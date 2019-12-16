#include "Materia.h"
#include "Professor.h"
#include "Aluno.h"
#include <cstring>

Materia::Materia(){}
Materia::Materia(char nome[50])
{
    strcpy(this->nome, nome);
    strcpy(professor, "nenhum");
    qtdAlunos = 0;
}

Materia::~Materia()
{
    //dtor
}

char* Materia::getNome()
{
    return nome;
}

int Materia::getQtd()
{
    return qtdAlunos;
}

char* Materia::setProfessor(Professor novoProfessor)
{
    char* aux = new char[50];
    strcpy(aux, professor);
    strcpy(professor, novoProfessor.getNome());
    return aux;
}

bool Materia::adicionarAluno(Aluno aluno)
{
    Faltas nova;
    strcpy(nova.aluno, aluno.getNome());
    nova.Nfaltas = 0;
    for (int i = 0; i < qtdAlunos; i++)
        if (!strcmp(faltasAlunos[i].aluno, aluno.getNome()))
            return 0;
    if (qtdAlunos < 50)
    {
        faltasAlunos[qtdAlunos] = nova;
        qtdAlunos++;
        return 1;
    }
    return 0;
}

bool Materia::removeAluno(char nome[50])
{
    for (int i = 0; i < qtdAlunos; i++)
    {
        if (!strcmp(faltasAlunos[i].aluno, nome))
        {
            for (int j = i; j < qtdAlunos; j++)
            {
                faltasAlunos[i] = faltasAlunos[i + 1];
            }
            qtdAlunos--;
            return 1;
        }
    }
    return 0;
}

void Materia::imprimeAluno(char nome[50])
{
    for (int i = 0; i < qtdAlunos; i++)
    {
        if (!strcmp(faltasAlunos[i].aluno, nome))
        {
         cout << "Nome: " << nome << " ";
         cout << "Faltas: " << faltasAlunos[i].Nfaltas << endl;
         return;
        }
    }

    cout << "Aluno nao encontrado" << endl;
}


//Retorna o nome de aluno armazenado em uma determinada posição do vetor
string Materia::imprimePosicao(int posicao)
{
    return faltasAlunos[posicao].aluno;
}

void Materia::acrescentarFalta(int posicao, int falta)
{
    faltasAlunos[posicao].Nfaltas = faltasAlunos[posicao].Nfaltas + falta;
}


//É feita a concatenação de tudo que deverá aparecer na tela de consulta
string Materia::imprime()
{
    cout << "Materia: " << nome << endl;
    cout << "Ministrante: " << professor << endl;
    cout << "Alunos: " << endl;
    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Nome: " << faltasAlunos[i].aluno << " ";
        cout << "Faltas: " << faltasAlunos[i].Nfaltas << endl;
    }

    string imprimir;
    string nomeS = this->nome, ministranteS = this->professor, alunosS, faltasS;
    imprimir = "Nome: "+nomeS+"\nMinistrante: "+ministranteS+"\nAlunos: ";
    for (int i = 0; i < qtdAlunos; i++) //imprime todas as materias do vetor que as armazena
    {
        alunosS = faltasAlunos[i].aluno;
        faltasS = to_string(faltasAlunos[i].Nfaltas);
        imprimir+= "\n"+alunosS+" Faltas: "+faltasS;
    }
    return imprimir;
}










