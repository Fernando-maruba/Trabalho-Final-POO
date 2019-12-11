#include "Pessoa.h"
#include <cstring>

Pessoa::Pessoa(){}

Pessoa::Pessoa(char nome[50], int idade) : idade(idade)
{
    strcpy(this->nome, nome);
}

Pessoa::~Pessoa()
{
    //dtor
}

char* Pessoa::getNome()
{
    return nome;
}

int Pessoa::getIdade()
{
    return idade;
}

void Pessoa::setNome(char novo[50])
{
    strcpy(this->nome, novo);
}

void Pessoa::setIdade(int nova)
{
    idade = nova;
}
void Pessoa::imprime()
{
    cout << "Nome: " << nome << endl;
    cout << "Idade: " << idade << endl;
}
