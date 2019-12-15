#ifndef PROFESSOR_H
#define PROFESSOR_H
#include "Pessoa.h"
#include "Materia.h"
#include <vector>


using namespace std;
class Materia;
class Professor : public Pessoa
{
    public:
        Professor();
        Professor(char nome[50], int idade, int identificacao, char especialidade[50]);
        virtual ~Professor();
        virtual char* getFuncao();

        //getters
        int getIdentificacao();
        char* getEspecialidade();

        //setters
        void setIdentificacao(int nova);
        void setEspecialidade(char nova[50]);

        bool adicionaMateria(Materia materia);
        bool removeMateria (char removida[50]);

        //Retorna a string que sera mostrada na interface
        virtual string imprime();
    private:
        int identificacao;
        char especialidade[50];
        char materias[20][50];
        int qtdMaterias;
};

#endif // PROFESSOR_H

