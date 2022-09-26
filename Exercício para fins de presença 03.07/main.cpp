#include <iostream>
#include <cstring>
#include <locale>
#define NALUNO 50

using namespace std;

int main()
{
    setlocale(LC_ALL, "Portuguese");
    struct EstruturaAluno
      {
       char nome[60];
       char matricula[10];
       int anoIngresso;
      } strAluno[NALUNO];

      int i;
      for(i=0;i<NALUNO;i++)
      {
          cout << "Informe o nome do aluno:  ";
          cin.getline(strAluno[i].nome,60);
          cout << "Informe a matriculado aluno:  ";
          cin.getline(strAluno[i].matricula, 10);
          cout << "Informe o ano de ingresso do aluno: ";
          cin >> strAluno[i].anoIngresso;
          cout << endl;
          getchar();
      }
          cout << "\nAlunos cadastrados com sucesso!\n\n";
          for(i=0;i<NALUNO;i++)
          {
          cout << "Aluno: "<< strAluno[i].nome << endl;
          cout << "matricula: " << strAluno[i].matricula << endl;
          cout << "Ano de ingresso: " << strAluno[i].anoIngresso << endl << endl << endl;
          }


    return 0;
}
