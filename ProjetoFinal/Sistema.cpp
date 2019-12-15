#include "Sistema.h"
#include <cstring>
#include <iomanip>

Sistema::Sistema(char x[50], char y[50], char z[50])
{
    strcpy(this->fileAlunos, x);
    strcpy(this->fileMateriais, y);
    strcpy(this->fileProfessores, z);
}

Sistema::~Sistema()
{
}

template<class Tipo>
int acharPos(char file[50], char nome[50])
{
    int pos = 0;
    fstream arq(file, ios::binary | ios::in | ios::out);
    if (!arq.is_open())
        return -1;
    Tipo aux;

    arq.read(reinterpret_cast<char*>(&aux), sizeof (Tipo));
    while(!arq.eof() && strcmp(aux.getNome(), nome))
    {
        arq.read(reinterpret_cast<char*>(&aux), sizeof (Tipo));
        pos++;
    }

    if(!strcmp(aux.getNome(), nome))
       return pos;
    arq.close();
    return -1;
}

string Sistema::adicionaAluno(char nome[50], int idade, int ra, char curso[50])
{
    ofstream saida(fileAlunos, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            return "Falha ao abrir o arquivo";
        }

    Aluno aux;

    int posAluno = acharPos<Aluno>(fileAlunos, nome);
    if (posAluno != -1)
    {
        return "Aluno já cadastrado";
    }

    Aluno escrever(nome, idade, ra, curso);
    entrada.close();
    saida.open(fileAlunos, ios::binary | ios::app);
    saida.write(reinterpret_cast<char*>(&escrever), sizeof (Aluno));
    saida.close();
    return "Aluno cadastrado com sucesso!";
}

string Sistema::adicionaProfessor(char nome[50], int idade, int identificacao, char especialidade[50])
{
    ofstream saida(fileProfessores, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            return "Falha ao abrir o arquivo";
        }

    Professor aux;

    int posProfessor = acharPos<Professor>(fileProfessores, nome);
    if (posProfessor != -1)
    {
        return "Professor já cadastrado";
    }
    Professor escrever(nome, idade, identificacao, especialidade);
    saida.open(fileProfessores, ios::binary | ios::app);
    saida.write(reinterpret_cast<char*>(&escrever), sizeof (Professor));
    saida.close();
    return "Professor cadastrado com sucesso!";

}

string Sistema::imprimirAluno(char nome[50])
{
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            return "Nenhum aluno cadastrado";
        }

    Aluno aux;
    int posAluno = acharPos<Aluno>(fileAlunos, nome);
    if (posAluno == -1)
    {
        return "Aluno não encontrado";
    }
    entrada.seekg(posAluno * sizeof(Aluno));
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Aluno));

    entrada.close();
    return aux.imprime();
}

string Sistema::imprimirProfessor(char nome[50])
{
    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            return "Nenhum professor cadastrado";
        }

    Professor aux;
    int verifica = acharPos<Professor>(fileProfessores, nome);
    if (verifica == -1)
    {
        return "Professor não encontrado";
    }
    entrada.seekg(verifica * sizeof(Professor));
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Professor));
    entrada.close();
    return aux.imprime();
}

string Sistema::adicionaMateria(char nome[50])
{

    ofstream saida(fileMateriais, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            return "Falha ao abrir o arquivo";
        }

    int achou = acharPos<Materia>(fileMateriais, nome);
    if (achou != -1)
    {
        return "Matéria já cadastrada";
    }

    Materia escrever(nome);
    entrada.close();
    saida.open(fileMateriais, ios::binary | ios::app);
    saida.write(reinterpret_cast<char*>(&escrever), sizeof (Materia));
    saida.close();
    return "Matéria cadastrada com sucesso!";

}

string Sistema::imprimirMateria(char nome[50])
{
    ifstream entrada(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            return "Nenhum cadastro de matéria realizado";
        }
    Materia auxMateria;

    int posMateria = acharPos<Materia>(fileMateriais, nome);
    if (posMateria == -1)
    {
        return "Matéria não encontrada";
    }
    entrada.seekg(posMateria * sizeof(Materia));
    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    entrada.close();
    return auxMateria.imprime();
}

string Sistema::adicionaCursante(char aluno[50], char materia[50])
{
    int posAluno = 0;
    int posMateria = 0;
    Aluno auxAluno;
    Materia auxMateria;
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            return "Falha ao abrir o arquivo";
        }

    posAluno = acharPos<Aluno>(fileAlunos, aluno);
    if (posAluno == -1)
    {
        return "Aluno não encontrado";
    }
    entrada.seekg(posAluno * sizeof(Aluno));
    entrada.read(reinterpret_cast<char*>(&auxAluno), sizeof (Aluno));
    entrada.close();

    entrada.open(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            return "Falha ao abrir o arquivo";
        }

    posMateria = acharPos<Materia>(fileMateriais, materia);
    if (posMateria == -1)
    {
        return "Matéria não encontrada";
    }
    entrada.seekg(posMateria * sizeof(Materia));
    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    entrada.close();

    int verifica = 0;
    verifica = !(auxMateria.adicionarAluno(auxAluno) && auxAluno.adicionaMateria(auxMateria));
    if (verifica)
    {
        return "Erro ao adicionar o aluno a matéria";
    }
    fstream arq(fileMateriais, ios::binary | ios::in | ios::out);
    if (!arq.is_open())
    {
        return "Não foi possível abrir o arquivo";
    }

    arq.seekg((posMateria) * sizeof(Materia));
    arq.write(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    arq.close();
    arq.open(fileAlunos, ios::binary | ios::in | ios::out);
    arq.seekg((posAluno) * sizeof(Aluno));
    arq.write(reinterpret_cast<char*>(&auxAluno), sizeof (Aluno));
    arq.close();
    return "Cursante adicionado à matéria com sucesso!";
}

string Sistema::adicionaMinistrante(char professor[50], char materia[50])
{
    int posProfessor = 0;
    int posMateria = 0;
    Professor auxProfessor;
    Materia auxMateria;

    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            return "Falha ao abrir o arquivo";
        }

    posProfessor = acharPos<Professor>(fileProfessores, professor);
    if (posProfessor == -1)
    {
        return "Professor não encontrado";
    }
    entrada.seekg(posProfessor * sizeof(Professor));
    entrada.read(reinterpret_cast<char*>(&auxProfessor), sizeof (Professor));
    entrada.close();

    entrada.open(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            return  "Falha ao abrir o arquivo";
        }

    posMateria = acharPos<Materia>(fileMateriais, materia);
    if (posMateria == -1)
    {
        return "Matéria não encontrada";
    }
    entrada.seekg(posMateria * sizeof(Materia));
    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    entrada.close();

    char antigoProfessor[50];
    Professor auxAntigoProfessor;
    int posAntigoProfessor;
    int verifica = 0;
    strcpy(antigoProfessor, auxMateria.setProfessor(auxProfessor));
    posAntigoProfessor = acharPos<Professor>(fileProfessores, antigoProfessor);
    verifica = !(auxProfessor.adicionaMateria(auxMateria));

    if (verifica)
    {
        return "Erro ao adicionar o professor a matéria";
    }
    fstream arq(fileMateriais, ios::binary | ios::in | ios::out);
    if (!arq.is_open())
    {
        return "Nao foi possível abrir o arquivo";
    }

    arq.seekg((posMateria) * sizeof(Materia));
    arq.write(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    arq.close();
    arq.open(fileProfessores, ios::binary | ios::in | ios::out);
    arq.seekg((posProfessor) * sizeof(Professor));
    arq.write(reinterpret_cast<char*>(&auxProfessor), sizeof (Professor));
    if (posAntigoProfessor != -1)
    {
        arq.seekg(posAntigoProfessor * sizeof(Professor));
        arq.read(reinterpret_cast<char*>(&auxAntigoProfessor), sizeof (Professor));
        auxAntigoProfessor.removeMateria(auxMateria.getNome());
        arq.seekg((posAntigoProfessor) * sizeof(Professor));
        arq.write(reinterpret_cast<char*>(&auxAntigoProfessor), sizeof (Professor));
    }
    arq.close();
    return "Ministrante adicionado à matéria com sucesso!";
}

void Sistema::fazerChamada(char materia[50])
{
    int pos = 0;
    int falta;
    fstream arq(fileMateriais, ios::binary | ios::in | ios::out);
    if (!arq.is_open())
    {
        cout << "Falha ao abrir o arquivo.";
        return;
    }
    Materia auxMateria;

    arq.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    while(!arq.eof() && strcmp(auxMateria.getNome(), materia))
    {
        arq.read( reinterpret_cast<char *>(&auxMateria), sizeof (Materia));
        pos++;
    }

    if (strcmp(auxMateria.getNome(), materia))
        {
            cout << "Matéria não encontrada" << endl;
            return;
        }

    for (int i = 0; i < auxMateria.getQtd(); i++)
    {
        auxMateria.imprimePosicao(i);
        cin >> falta;
        auxMateria.acrescentarFalta(i, falta);
    }

    arq.seekg(pos * sizeof(Materia));
    arq.write(reinterpret_cast<char *>(&auxMateria), sizeof (Materia));
    arq.close();
}
