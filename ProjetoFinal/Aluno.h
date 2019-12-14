#ifndef ALUNO_H
#define ALUNO_H
#include "Pessoa.h"
#include <vector>

using namespace std;
class Materia;

class Aluno : public Pessoa
{
    public:
        Aluno();
        Aluno(char nome[50], int idade, int ra, char curso[50]);
        virtual ~Aluno();
        virtual char* getFuncao();

        //getters
        int getRa();
        char* getCurso();

        //setters
        void setRa(int novo);
        void setCurso(char nova[50]);

        bool adicionaMateria(Materia nova);
        bool removeMateria(char removida[50]);
        virtual string imprime();
    private:
        int ra;
        char curso[50];
        char materias[20][50];
        int qtdMaterias;
};

#endif // ALUNO_H
