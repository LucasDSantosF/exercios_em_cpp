#include <iostream>

using namespace std;

/*
Faça um programa que, dados pelo usuário dois números inteiros m e n, 
com m > n, escreve os valores de uma tripla Pitagórica (lado1, lado2 e hipotenusa)
gerada a partir de m e n, através das 3 fórmulas:
*/

int main() {

    int m , n, l1, l2, h;

    cout << "valor de m: "; cin >> m;
    cout << "valor de n: "; cin >> n;

    if (m > n ) {
        l1 = m*m - n*n;
        l2 = 2*m*n;
        h = m*m + n*n;

        cout << "lado 1: " << l1 << "\n" << "lado 2: " <<l2<< "\n" << "Hipotenusa: " << h;

    } else {
        cout  <<"m tem que ser maior n.";
    }

    return 0;
}