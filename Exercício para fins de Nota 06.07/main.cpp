#include <iostream>
#include <locale>

using namespace std;

int achedivisao (int num1, int num2)
{
    return num1/num2;
}

int main()


{
    int a, b, resultado;
    cout << "Informe os numeros" << endl;
    cin >> a >> b;
    resultado=achedivisao(a,b);

    cout << "O resultado é: " << resultado << endl;
}
