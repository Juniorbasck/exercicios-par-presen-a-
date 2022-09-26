#include <iostream>
#include <locale>
#include <iomanip>

using namespace std;

int main()
{
     setlocale(LC_ALL, "Portuguese");

     int i, num[15];

     for (i=0; i<15; i++)  // Comando para leitura dos valores
     {
          cout << "informe o numero da posição " << i << endl;
          cin >> num[i];
     }

    for (i=0; i<15; i++)  // comando para exibição do valores
    {
         if (num[i]%2 ==0)
           cout << " O numero" << num[i] << " é par!" << endl;
         else (num[i]%2 ==0);
           cout << " O numero " << i << " é impar!" << endl;
    }
    return 0;
}
