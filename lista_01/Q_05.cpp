#include <iostream>

using namespace std;

/*
Faça um algoritmo que, dado o valor de um peso em libras,
escreve o valor em gramas desse peso.
O programa deve dialogar com o usuário segundo o formato do exemplo abaixo: 
(1 libra vale 453,59237g)
*/

int main() {

    float libras, grama;

    cout << "Valor em libras: "; cin >> libras;

    grama = libras*453.59237;

    cout << "Libras >> Gramas: " << grama <<"g";

    return 0;
}