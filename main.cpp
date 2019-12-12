#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Aluno.h"
#include "Materia.h"
#include "Sistema.h"
using namespace std;

int opcao()
{
    cout << "SISTEMA DE ADMINISTRACAO DE ALUNOS E MATERIAS" << endl;
    cout << "0- Finalizar sistema" << endl;
    cout << "1- Cadastrar um aluno" << endl;
    cout << "2- Cadastrar um professor" << endl;
    cout << "3- Cadastrar uma materia" << endl;
    cout << "4- Adicionar um aluno como cursante de uma materia" << endl;
    cout << "5- Adicionar um professor como ministrante de uma materia" << endl;
    cout << "6- Imprimir dados de um aluno" << endl;
    cout << "7- Imprimir dados de um professor" << endl;
    cout << "8- Imprimir dados de uma materia" << endl;
    cout << "9- Fazer chamada" << endl;

    int resposta;
    cin >> resposta;
    return resposta;
}



int main()
{
    Sistema sist("aluno", "materias", "professores");

    int resposta = opcao();
    while (resposta != 0)
    {
        switch(resposta){
        case 0:
            break;
        case 1: sist.adicionaAluno();
            break;
        case 2: sist.adicionaProfessor();
            break;
        case 3: sist.adicionaMateria();
            break;
        case 4: sist.adicionaCursante();
            break;
        case 5: sist.adicionaMinistrante();
            break;
        case 6: sist.imprimirAluno();
            break;
        case 7: sist.imprimirProfessor();
            break;
        case 8: sist.imprimirMateria();
            break;
        case 9: sist.fazerChamada();
            break;
        }
        resposta = opcao();
    }
}
