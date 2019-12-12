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
    return -1;
    arq.close();
}

void Sistema::adicionaAluno()
{
    ofstream saida(fileAlunos, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }
    char nome[50];
    int idade;
    int ra;
    char curso[50];

    cout << "Preencha os seguintes campos abaixo:" << endl;
    cout << "Nome: ";
    fflush(stdin);
    cin.getline(nome, sizeof(nome));
    cout << "Idade: ";
    cin >> idade;
    cout << "RA: ";
    cin >> ra;
    cout << "Curso: ";
    fflush(stdin);
    cin.getline(curso, sizeof(curso));

    Aluno aux;

    int posAluno = acharPos<Aluno>(fileAlunos, nome);
    if (posAluno != -1)
    {
        cout << "Aluno ja cadastrado" << endl;
        return;
    }

    Aluno escrever(nome, idade, ra, curso);
    entrada.close();
    saida.open(fileAlunos, ios::binary | ios::app);
    saida.write(reinterpret_cast<char*>(&escrever), sizeof (Aluno));
    saida.close();
}

void Sistema::adicionaProfessor()
{
    ofstream saida(fileProfessores, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }
    char nome[50];
    int idade;
    int identificacao;
    char especialidade[50];

    cout << "Preencha os seguintes campos abaixo:" << endl;
    cout << "Nome: ";
    fflush(stdin);
    cin.getline(nome, sizeof(nome));
    cout << "Idade: ";
    cin >> idade;
    cout << "Identificacao: ";
    cin >> identificacao;
    cout << "Especialidade: ";
    fflush(stdin);
    cin.getline( especialidade, sizeof(especialidade));

    Professor aux;

    int posProfessor = acharPos<Professor>(fileProfessores, nome);
    if (posProfessor != -1)
    {
        cout << "Professor ja cadastrado" << endl;
        return;
    }
    Professor escrever(nome, idade, identificacao, especialidade);
    saida.open(fileProfessores, ios::binary | ios::app);
    saida.write(reinterpret_cast<char*>(&escrever), sizeof (Professor));
    saida.close();

}

void Sistema::imprimirAluno()
{
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o entradauivo" << endl;
            return;
        }
    char nome[50];
    cout << "Nome do Aluno: ";
    fflush(stdin);
    cin.getline(nome, sizeof(nome));

    Aluno aux;
    int posAluno = acharPos<Aluno>(fileAlunos, nome);
    if (posAluno == -1)
    {
        cout << "Aluno nao encontrado" << endl;
        return;
    }
    entrada.seekg(posAluno * sizeof(Aluno));
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Aluno));

    aux.imprime();
    entrada.close();
}

void Sistema::imprimirProfessor()
{
    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o entradauivo" << endl;
            return;
        }
    char nome[50];
    cout << "Nome do Professor: ";
    fflush(stdin);
    cin.getline(nome, sizeof(nome));

    Professor aux;
    int verifica = acharPos<Professor>(fileProfessores, nome);
    if (verifica == -1)
    {
        cout << "Professor nao encontrado" << endl;
        return;
    }
    entrada.seekg(verifica * sizeof(Professor));
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Professor));
    entrada.close();
    aux.imprime();
    entrada.close();
}

void Sistema::adicionaMateria()
{
    char nome[50];
    cout << "Digite o nome da Materia: ";
    fflush(stdin);
    cin.getline(nome, sizeof(nome));

    ofstream saida(fileMateriais, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    int achou = acharPos<Materia>(fileMateriais, nome);
    if (achou != -1)
    {
        cout << "Materia ja cadastrada" << endl;
        return;
    }

    Materia escrever(nome);
    entrada.close();
    saida.open(fileMateriais, ios::binary | ios::app);
    saida.write(reinterpret_cast<char*>(&escrever), sizeof (Materia));
    saida.close();

}

void Sistema::imprimirMateria()
{
    ifstream entrada(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o entradauivo" << endl;
            return;
        }
    Materia auxMateria;
    char nome[50];
    cout << "Nome da Materia: ";
    fflush(stdin);
    cin.getline(nome, sizeof(nome));

    int posMateria = acharPos<Materia>(fileMateriais, nome);
    if (posMateria == -1)
    {
        cout << "Materia nao encontrada";
        return;
    }
    entrada.seekg(posMateria * sizeof(Materia));
    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    entrada.close();
    auxMateria.imprime();
}

void Sistema::adicionaCursante()
{
    int posAluno = 0;
    int posMateria = 0;
    char aluno[50];
    char materia[50];
    cout << "Digite o nome do aluno: ";
    fflush(stdin);
    cin.getline(aluno, sizeof(aluno));
    cout << "Digite o nome da materia: ";
    fflush(stdin);
    cin.getline(materia, sizeof(materia));
    Aluno auxAluno;
    Materia auxMateria;
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    posAluno = acharPos<Aluno>(fileAlunos, aluno);
    if (posAluno == -1)
    {
        cout << "Aluno nao encontrado" << endl;
        return;
    }
    entrada.seekg(posAluno * sizeof(Aluno));
    entrada.read(reinterpret_cast<char*>(&auxAluno), sizeof (Aluno));
    entrada.close();

    entrada.open(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    posMateria = acharPos<Materia>(fileMateriais, materia);
    if (posMateria == -1)
    {
        cout << "Materia nao encontrada";
        return;
    }
    entrada.seekg(posMateria * sizeof(Materia));
    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    entrada.close();

    int verifica = 0;
    verifica = !(auxMateria.adicionarAluno(auxAluno) && auxAluno.adicionaMateria(auxMateria));
    if (verifica)
    {
        cout << "Erro ao adicionar o aluno a materia" << endl;
        return;
    }
    fstream arq(fileMateriais, ios::binary | ios::in | ios::out);
    if (!arq.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
        return;
    }

    arq.seekg((posMateria) * sizeof(Materia));
    arq.write(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    arq.close();
    arq.open(fileAlunos, ios::binary | ios::in | ios::out);
    arq.seekg((posAluno) * sizeof(Aluno));
    arq.write(reinterpret_cast<char*>(&auxAluno), sizeof (Aluno));
    arq.close();
}

void Sistema::adicionaMinistrante()
{
    int posProfessor = 0;
    int posMateria = 0;
    char professor[50];
    char materia[50];
    cout << "Digite o nome do professor: ";
    fflush(stdin);
    cin.getline(professor, sizeof(professor));
    cout << "Digite o nome da materia: ";
    fflush(stdin);
    cin.getline(materia, sizeof(materia));
    Professor auxProfessor;
    Materia auxMateria;

    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    posProfessor = acharPos<Professor>(fileProfessores, professor);
    if (posProfessor == -1)
    {
        cout << "Professor nao encontrado" << endl;
        return;
    }
    entrada.seekg(posProfessor * sizeof(Professor));
    entrada.read(reinterpret_cast<char*>(&auxProfessor), sizeof (Professor));
    entrada.close();

    entrada.open(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    posMateria = acharPos<Materia>(fileMateriais, materia);
    if (posMateria == -1)
    {
        cout << "Materia nao encontrada";
        return;
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
        cout << "Erro ao adicionar o professor a materia" << endl;
        return;
    }
    fstream arq(fileMateriais, ios::binary | ios::in | ios::out);
    if (!arq.is_open())
    {
        cout << "Nao foi possivel abrir o arquivo" << endl;
        return;
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
}

void Sistema::fazerChamada()
{
    char materia[50];
    int pos = 0;
    int falta;
    cout << "Digite o nome da materia: ";
    fflush(stdin);
    cin.getline(materia, sizeof(materia));
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
            cout << "Materia nao encontrada" << endl;
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
