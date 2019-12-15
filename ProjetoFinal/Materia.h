#ifndef MATERIA_H
#define MATERIA_H
#include <string>

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

        //Troca o ministrante da materia
        //Também retorna o antigo professor, para que este seja alterado no arquivo
        char* setProfessor(Professor NovoProfessor);

        bool adicionarAluno(Aluno aluno);
        bool removeAluno(char nome[50]);
        void imprimeAluno(char nome[50]);

        //Retorna o nome ocupado por determinada posição, o qual sera mostrado na interface durante a chamada
        string imprimePosicao(int posicao);

        //Retorna o texto que sera mostrado na interface ao imprimir a materia
        string imprime();
        void acrescentarFalta(int posicao, int falta);

private:
    char nome[50];
    Faltas faltasAlunos[100];
    int qtdAlunos;
    char professor[50];

};

#endif // MATERIA_H
