#include "Professor.h"
#include <cstring>

Professor::Professor(){}

Professor::Professor(char nome[50], int idade, int identificacao, char especialidade[50])
: Pessoa(nome, idade), identificacao(identificacao)
{
    strcpy(this->especialidade, especialidade);
    qtdMaterias = 0;
}

Professor::~Professor()
{
    //dtor
}

char* Professor::getFuncao()
{
    return "Professor";
}

int Professor::getIdentificacao()
{
    return identificacao;
}

char* Professor::getEspecialidade()
{
    return especialidade;
}

void Professor::setIdentificacao(int nova)
{
    identificacao = nova;
}

void Professor::setEspecialidade(char nova[50])
{
    strcpy(especialidade, nova);
}


bool Professor::adicionaMateria(Materia materia)
{
    for (int i = 0; i < qtdMaterias; i++)
        if (!strcmp(materias[i], materia.getNome()))
                return 0;
        if (qtdMaterias < 50)
        {
            strcpy(materias[qtdMaterias], materia.getNome());
            qtdMaterias++;
            return 1;
        }
    return 0;
}

bool Professor::removeMateria (char removida[50])
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
void Professor::imprime()
{
    Pessoa::imprime();
    cout << "Identificacao: " << identificacao << endl;
    cout << "Especialidade: " << especialidade << endl;
    cout << "Materias Ministradas: " << endl;
    for (int i = 0; i < qtdMaterias; i++)
        cout << materias[i] << endl;

}

