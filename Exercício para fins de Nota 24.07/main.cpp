//exemploArquivoW
#include <iostream>
#include <fstream>
using namespace std;
int main ()
 {
  int i, idade;
  char nome[20];

 for (i = 0; i <=2;i++) {
 cout << "Digite o seu nome: ";
 cin >> nome;
 cout << "Digite sua idade: ";
 cin >> idade;

 ofstream arq1;
 arq1.open ("pessoas.txt", ios::app);
 arq1 << nome << endl;
 arq1 << idade << endl;
 arq1.close(); // Fecha o arquivo.
 }
 return 0;
}
