#include "Materia.h"
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

void Materia::setProfessor(Professor novoProfessor)
{
    strcpy(professor, novoProfessor.getNome());
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

void Materia::imprimePosicao(int posicao)
{
    cout << faltasAlunos[posicao].aluno << " ";
}

void Materia::acrescentarFalta(int posicao, int falta)
{
    faltasAlunos[posicao].Nfaltas = faltasAlunos[posicao].Nfaltas + falta;
}

void Materia::imprime()
{
    cout << "Materia: " << nome << endl;
    cout << "Ministrante: " << professor << endl;
    cout << "Alunos: " << endl;
    for (int i = 0; i < qtdAlunos; i++)
    {
        cout << "Nome: " << faltasAlunos[i].aluno;
        cout << "Faltas: " << faltasAlunos[i].Nfaltas << endl;
        cout << endl;
    }
}










