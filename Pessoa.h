#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>

using namespace std;
class Pessoa
{
    public:
        Pessoa();
        Pessoa(char nome[50], int idade);
        virtual ~Pessoa();

        //getters
        virtual char* getNome();
        virtual int getIdade();

        //setters
        virtual void setNome(char novo[50]);
        virtual void setIdade(int nova);

        virtual void imprime();
        virtual char* getFuncao() = 0; //aluno ou professor


    private:
        char nome[50];
        int idade;
};

#endif // PESSOA_H
