#ifndef MATERIA_H
#define MATERIA_H
#include "Aluno.h"
#include "Professor.h"

using namespace std;
class Aluno;
class Professor;

//struct para unir os alunos com suas respectivas faltas na materia
typedef struct faltas
{
    char aluno[50];
    int Nfaltas;
}Faltas;


class Materia
{
    public:
        Materia();
        Materia(char nome[50]);
        virtual ~Materia();
        char* getNome();
        int getQtd();
        void setProfessor(Professor NovoProfessor);
        bool adicionarAluno(Aluno aluno);
        bool removeAluno(char nome[50]);
        void imprimeAluno(char nome[50]);
        void imprimePosicao(int posicao);
        void imprime();
        void acrescentarFalta(int posicao, int falta);

private:
    char nome[50];
    Faltas faltasAlunos[100];
    int qtdAlunos;
    char professor[50];

};

#endif // MATERIA_H
