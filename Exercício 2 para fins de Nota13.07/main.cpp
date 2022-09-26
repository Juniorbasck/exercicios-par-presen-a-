#include <stdio.h>
#include <iostream>

using namespace std;


//funçoes para fatorial EX: 5! (5 fatorial) = 1 x 2 x 3 x 4 x 5 = 120

void fato(int,int);

int main(){


fato(1,0);

}

void fato(int f, int n){

  cout << "Digite um numero para ser calculado: ";
  cin >> n;
  cout << endl;

    for(int i=1;i <= n;i++){
     f*=i;
     cout << f << endl << endl;

 }
  cout << "Fatorial de " << n << " e " << f << endl;
}
