#include <iostream>
#include <cstring>
#include <locale>
#define JOGADORES 5

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");// ARMAZENAS DADOS DE UM TIME DE BASQUETE

    struct estruturaJogadores
    {
      char nome[60];
      char idade[10];
      int numeroCamisa;
      char posicao[60];
      char anoIngresso[10];// ano de ingresso no time
    } strJogadores[JOGADORES];

    int i;
    for(i=0;i<JOGADORES;i++)
    {
        cout << "Informe o nome do jogador:  ";
        cin.getline(strJogadores[i].nome, 60);
        cout << "Informe a idade do aluno: ";
        cin.getline(strJogadores[i].idade,10);
        cout << "Informe o numero da camisa: ";
        cin >> strJogadores[i].numeroCamisa;
        cout << "Informe a posição: ";
        cin.getline(strJogadores[i].posicao, 60);
        cout << "Informe o ano de ingresso : ";
        cin.getline(strJogadores[i].anoIngresso, 10);
        cout << endl;
        getchar();
    }

    cout << "\nJogadores cadastrados com sucesso!\n\n";
    for(i=0;i<JOGADORES;i++)
    {
        cout << "Aluno:" << strJogadores[i].nome << endl;
        cout << "Idade:" << strJogadores[i].idade << endl;
        cout << "Numero da camisa:" << strJogadores[i].numeroCamisa << endl;
        cout << "posição:" << strJogadores[i].posicao << endl;
        cout << "Ano de ingresso:" << strJogadores[i].anoIngresso << endl << endl << endl;
    }
 return 0;
}
