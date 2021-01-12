#include <iostream>

using namespace std;

/*
Faça um algoritmo que responda a área de um círculo dado o raio, fornecido pelo usuário.
 Use o valor 3,14159 como uma aproximação de π. (S  = πr2)
*/

int main() {

    float raio, S, dois;

    cout << "Valor do raio: "; cin >> raio;
    S = 3.14159*(raio*raio);

    cout << "O raio do circulo e: " << S;

    return 0;
}