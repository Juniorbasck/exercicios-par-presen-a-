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
          cout << "informe o numero da posi��o " << i << endl;
          cin >> num[i];
     }

    for (i=0; i<15; i++)  // comando para exibi��o do valores
    {
         if (num[i]%2 ==0)
           cout << " O numero" << num[i] << " � par!" << endl;
         else (num[i]%2 ==0);
           cout << " O numero " << i << " � impar!" << endl;
    }
    return 0;
}
