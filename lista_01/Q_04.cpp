#include <iostream>

using namespace std;

/*
Faça um algoritmo que receba o salário de um funcionário,
calcule e mostre o novo salário, sabendo-se que este sofreu um aumento de 25%.
*/

int main() {

    float salario;

    cout << "Seu salario: "; cin >> salario;

    salario += (salario*25)/100;

    cout << "Salario com aumento: " << salario;

    return 0;
}