#include <iostream>

using namespace std;

/*
João recebeu seu salário e precisa pagar duas contas atrasadas. Como as contas 
estão atrasadas, João deverá pagar uma multa de 2% sobre cada uma. 
Faça um algoritmo que leia o valor do salário de João e das contas que ele deve pagar, 
e que mostre quanto restará do seu salário após o pagamento das contas.
*/

int main() {

    float salario, contas;
    float comMulta;

    cout << "Salario: "; cin >> salario;
    cout << "Contas a pagar: "; cin >> contas;


    comMulta = contas*2;
    contas += comMulta/100;

    salario =  salario - contas;

    cout << "Renda final: " << salario;

    return 0;
}