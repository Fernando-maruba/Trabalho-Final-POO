#ifndef SISTEMA_H
#define SISTEMA_H
#include <fstream>
#include <string>
#include "Aluno.h"
#include "Professor.h"
#include "Materia.h"


using namespace std;

class Sistema
{
    public:
        Sistema(char fileAlunos[50], char fileMaterias[50], char fileProfessores[50]);
        virtual ~Sistema();
        void adicionaAluno();
        void adicionaProfessor();
        void adicionaMateria();
        void adicionaCursante();
        void adicionaMinistrante();
        //void fazerChamada();
        void imprimirAluno();
        void imprimirMateria();
        void imprimirProfessor();
    private:
        char fileAlunos[50];
        char fileMateriais[50];
        char fileProfessores[50];
};

#endif // SISTEMA_H

