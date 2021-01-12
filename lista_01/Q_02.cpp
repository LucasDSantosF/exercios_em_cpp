#include <iostream>

using namespace std;

/*
Desenvolva um algoritmo que receba quatro números inteiros,
calcule e mostre a soma desses números.
*/

int main() {

    int n1, n2, n3, n4, soma;

    cout << "n1: "; cin >> n1;
    cout << "n2: "; cin >> n2;
    cout << "n3: "; cin >> n3;
    cout << "n4: "; cin >> n4;

    soma = n1 + n2 + n3 + n4;

    cout << "Soma deu: " << soma;

    return 0;
}