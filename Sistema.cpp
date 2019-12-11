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
    cin >> nome;
    cout << "Idade: ";
    cin >> idade;
    cout << "RA: ";
    cin >> ra;
    cout << "Curso: ";
    cin >> curso;

    Aluno aux;
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Aluno));


    while(!entrada.eof() && strcmp(aux.getNome(), nome) && aux.getRa() != ra)
        entrada.read(reinterpret_cast<char*>(&aux), sizeof (Aluno));

    if(strcmp(aux.getNome(), nome) && aux.getRa() != ra)
    {
        Aluno escrever(nome, idade, ra, curso);
        entrada.close();
        saida.open(fileAlunos, ios::binary | ios::app);
        saida.write(reinterpret_cast<char*>(&escrever), sizeof (Aluno));
        saida.close();
        entrada.open(fileAlunos, ios::binary);
    }
    else
    {
        cout << "Aluno ja cadastrado" << endl;
    }

    entrada.close();
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
    cin >> nome;
    cout << "Idade: ";
    cin >> idade;
    cout << "Identificacao: ";
    cin >> identificacao;
    cout << "Especialidade: ";
    cin >> especialidade;

    Professor aux;
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Professor));


    while(!entrada.eof() && strcmp(aux.getNome(), nome) && aux.getIdentificacao() != identificacao)
        entrada.read(reinterpret_cast<char*>(&aux), sizeof (Professor));

    entrada.close();
    if(strcmp(aux.getNome(), nome) && aux.getIdentificacao() != identificacao)
    {
        Professor escrever(nome, idade, identificacao, especialidade);
        saida.open(fileProfessores, ios::binary | ios::app);
        saida.write(reinterpret_cast<char*>(&escrever), sizeof (Professor));
        saida.close();
    }
    else
    {
        cout << "Professor ja cadastrado" << endl;
    }
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
    cin >> nome;

    Aluno aux;
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Aluno));
    while(!entrada.eof() && strcmp(aux.getNome(), nome))
        entrada.read( reinterpret_cast<char *>(&aux), sizeof (Aluno));

    if(!entrada.eof())
        aux.imprime();
    else
        cout << "Aluno nao encontrado" << endl;
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
    cin >> nome;

    Professor aux;
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Professor));
    while(!entrada.eof() && strcmp(aux.getNome(), nome))
        entrada.read( reinterpret_cast<char *>(&aux), sizeof (Professor));

    if(!entrada.eof())
        aux.imprime();
    else
        cout << "Professor nao encontrado" << endl;
    entrada.close();
}

void Sistema::adicionaMateria()
{
    char nome[50];
    cout << "Digite o nome da Materia: ";
    cin >> nome;

    ofstream saida(fileMateriais, ios::binary | ios::app);
    saida.close();
    ifstream entrada(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    Materia aux;
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Materia));


    while(!entrada.eof() && strcmp(aux.getNome(), nome))
        entrada.read(reinterpret_cast<char*>(&aux), sizeof (Materia));

    if(strcmp(aux.getNome(), nome))
    {
        Materia escrever(nome);
        entrada.close();
        saida.open(fileMateriais, ios::binary | ios::app);
        saida.write(reinterpret_cast<char*>(&escrever), sizeof (Materia));
        saida.close();
        entrada.open(fileMateriais, ios::binary);
    }
    else
    {
        cout << "Materia ja cadastrado" << endl;
    }

    entrada.close();

}

void Sistema::imprimirMateria()
{
    ifstream entrada(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o entradauivo" << endl;
            return;
        }
    char nome[50];
    cout << "Nome da Materia: ";
    cin >> nome;

    Materia aux;
    entrada.read(reinterpret_cast<char*>(&aux), sizeof (Materia));
    while(!entrada.eof() && strcmp(aux.getNome(), nome))
        entrada.read( reinterpret_cast<char *>(&aux), sizeof (Materia));

    if(!strcmp(aux.getNome(), nome))
        aux.imprime();
    else
        cout << "Materia nao encontrado" << endl;
    entrada.close();
}

void Sistema::adicionaCursante()
{
    int posAluno = 0;
    int posMateria = 0;
    char aluno[50];
    char materia[50];
    cout << "Digite o nome do aluno: ";
    cin >> aluno;
    cout << "Digite o nome da materia: ";
    cin >> materia;
    Aluno auxAluno;
    Materia auxMateria;
    ifstream entrada(fileAlunos, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    entrada.read(reinterpret_cast<char*>(&auxAluno), sizeof (Aluno));
    while(!entrada.eof() && strcmp(auxAluno.getNome(), aluno))
    {
        entrada.read( reinterpret_cast<char *>(&auxAluno), sizeof (Aluno));
        posAluno++;
    }

    if(!strcmp(auxAluno.getNome(), aluno));
    else
    {
        cout << "Aluno nao encontrado" << endl;
        entrada.close();
        return;
    }
    entrada.close();

    entrada.open(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    while(!entrada.eof() && strcmp(auxMateria.getNome(), materia))
    {
        entrada.read( reinterpret_cast<char *>(&auxMateria), sizeof (Materia));
        posMateria++;
    }

    if(!strcmp(auxMateria.getNome(), materia));
    else
    {
        cout << "Materia nao encontrada" << endl;
        entrada.close();
        return;
    }
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
    cin >> professor;
    cout << "Digite o nome da materia: ";
    cin >> materia;
    Professor auxProfessor;
    Materia auxMateria;
    ifstream entrada(fileProfessores, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    entrada.read(reinterpret_cast<char*>(&auxProfessor), sizeof (Professor));
    while(!entrada.eof() && strcmp(auxProfessor.getNome(), professor))
    {
        entrada.read( reinterpret_cast<char *>(&auxProfessor), sizeof (Professor));
        posProfessor++;
    }

    if(!strcmp(auxProfessor.getNome(), professor));
    else
    {
        cout << "Professor nao encontrado" << endl;
        entrada.close();
        return;
    }
    entrada.close();

    entrada.open(fileMateriais, ios::binary);
    if (!entrada.is_open())
        {
            cout << "Falha ao abrir o arquivo" << endl;
            return;
        }

    entrada.read(reinterpret_cast<char*>(&auxMateria), sizeof (Materia));
    while(!entrada.eof() && strcmp(auxMateria.getNome(), materia))
    {
        entrada.read( reinterpret_cast<char *>(&auxMateria), sizeof (Materia));
        posMateria++;
    }

    if(!strcmp(auxMateria.getNome(), materia));
    else
    {
        cout << "Materia nao encontrada" << endl;
        entrada.close();
        return;
    }
    entrada.close();

    int verifica = 0;
    auxMateria.setProfessor(auxProfessor);
    verifica = !(auxProfessor.adicionaMateria(auxMateria));

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
    arq.open(fileProfessores, ios::binary | ios::in | ios::out);
    arq.seekg((posProfessor) * sizeof(Professor));
    arq.write(reinterpret_cast<char*>(&auxProfessor), sizeof (Professor));
    arq.close();
}

/*void Sistema::fazerChamada()
{
    char materia[50];
    int pos = 0;
    int falta;
    cout << "Digite o nome da materia: ";
    cin >> materia;
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
}*/
