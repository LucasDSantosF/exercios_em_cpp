#include <iostream>

using namespace std;

/*
Faça um algoritmo que receba três notas, calcule e mostre a média aritmética entre elas.
*/

int main() {

    float n1, n2, n3, media;

    cout << "nota 1: "; cin >> n1;
    cout << "nota 2: "; cin >> n2;
    cout << "nota 3: "; cin >> n3;

    media = (n1+n2+n3)/float(3);

    cout << "Media: " << media;

    return 0;
}