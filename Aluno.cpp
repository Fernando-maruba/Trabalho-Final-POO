#include "Aluno.h"
#include <cstring>
Aluno::Aluno(){};

Aluno::Aluno(char nome[50], int idade, int ra, char curso[50])
: Pessoa(nome, idade), ra(ra)
{
    strcpy(this->curso, curso);
    qtdMaterias = 0;
}

Aluno::~Aluno()
{
    //dtor
}

int Aluno::getRa()
{
    return ra;
}

char* Aluno::getFuncao()
{
    return "Aluno";
}

char* Aluno::getCurso()
{
    return curso;
}

void Aluno::setRa(int novo)
{
    ra = novo;
}

void Aluno::setCurso (char nova[50])
{
    strcpy(this->curso, nova);
}

bool Aluno::adicionaMateria(Materia nova)
{
    for (int i = 0; i < qtdMaterias; i++)
    if (!strcmp(materias[i], nova.getNome()))
        return 0;
    if (qtdMaterias < 50)
    {
        strcpy(materias[qtdMaterias], nova.getNome());
        qtdMaterias++;
        return 1;
    }
    return 0;
}

bool Aluno::removeMateria(char removida[50])
{
    for (int i = 0; i < qtdMaterias; i++)
    {
        if (!strcmp(materias[i], removida))
        {
            for (int j = i; j < qtdMaterias; j++)
            {
                strcpy(materias[j], materias[j+1]);
            }
            qtdMaterias--;
            return 1;
        }
    }
    return 0;
}

void Aluno::imprime()
{
    Pessoa::imprime();
    cout << "RA: " << ra << endl;
    cout << "Curso: " << curso << endl;
    cout << "Materias cursadas: " << endl;
    for (int i = 0; i < qtdMaterias; i++) //imprime todas as materias do vetor que as armazena
    {
        cout << materias[i] << endl;
    }
}
