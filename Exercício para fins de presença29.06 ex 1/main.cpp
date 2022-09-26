#include <iostream>

using namespace std;

int main()
{
    int matriz1[lin][col];
    int matriz2[lin][col];
    int matizsoma[lin][col];
    int i, j;
    // preenchimento da matriiz
     for(i=0; j<lin; i++){
        for(j=0; j<col; j++){
         cout << "Digite o valor para preencher a matriz [" << i << ", " << j << "]:" << endl;
         cin >> matriz[i][j];
         cout << "Digite o valor para preencher a matriz 2 [" << i << ", " << j << "]:" << endl;
         cin >> matriz2[i][j];

         matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
     }
  }
  cout << endl;

  //mostrando os valores na tela
     cout << "matriz soma: " << endl;
     for(i = 0; i < lin; i++) { //linha
            for(j = 0; j < col; j++){ //columa
                cout << matrizsoma [i][j] << "\t";
            cout << endl;
    }
}


