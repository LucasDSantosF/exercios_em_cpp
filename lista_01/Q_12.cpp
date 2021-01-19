#include <iostream>

using namespace std;

/*Faça um algoritmo que leia a base e a altura de um retângulo e 
escreva o seu perímetro, a sua área e a sua diagonal.*/

int main() {

    int base, altura;
    int area;

    cout << "valor da base: ";  cin >> base;
    cout << "Valor da altura: "; cin >> altura;

    area = base*altura;

    cout << "O perimetro deu:  " << area;


    return 0;
}