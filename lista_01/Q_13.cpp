#include <iostream>

using namespace std;

/*
Um funcionário recebe um salário fixo mais 4% de comissão sobre as suas vendas. 
Faça um algoritmo que receba o valor do salário fixo do funcionário, 
o valor das suas vendas e que calcule e mostre o salário final do funcionário.
*/

int main() {

    float salario, vendas;
    float comisao;

    cout << "Valor do salario; ";cin >> salario;
    cout <<"Quantidade de vendas: " ;cin >> vendas;

    comisao = salario*4.0;
    comisao = comisao/100;

    salario += comisao*vendas;

    cout << "Salario final: " << salario; 



    return 0;
}