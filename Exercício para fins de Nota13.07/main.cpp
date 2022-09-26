#include <iostream>


using namespace std;


 int conversao (int);

int main()
{
    int f, feito;

    cout << "informe a temperatura em Fahrenheit: " << endl;
    cin >> f;

    feito = conversao(f);

    cout << "A temperatura em Celcius é: " << feito << endl;

    return 0;
}

  int conversao (int a)
  {

      return (a - 32)/1.8;
  }
