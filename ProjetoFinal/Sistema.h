#ifndef SISTEMA_H
#define SISTEMA_H
#include <fstream>
#include <string>
#include "Aluno.h"
#include "Professor.h"
#include "Materia.h"


using namespace std;

//A maioria dos metodos retorna uma string, isto é feito para que seja mostrado na tela
//o resultado de cada um desses metodos. Isto é, caso tenha sido um sucesso ou falha
class Sistema
{
    public:
        Sistema(char fileAlunos[50], char fileMaterias[50], char fileProfessores[50]);
        virtual ~Sistema();
        string adicionaAluno(char nome[50], int idade, int ra, char curso[50]);
        string adicionaProfessor(char nome[50], int idade, int identificacao, char especialidade[50]);
        string adicionaMateria(char nome[50]);
        string adicionaCursante(char aluno[50], char materia[50]);
        string adicionaMinistrante(char professor[50], char materia[50]);
        void fazerChamada(char materia[50]);
        string imprimirAluno(char aluno[50]);
        string imprimirMateria(char materia[50]);
        string imprimirProfessor(char professor[50]);
    private:
        char fileAlunos[50];
        char fileMateriais[50];
        char fileProfessores[50];
};

#endif // SISTEMA_H

