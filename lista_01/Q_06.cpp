#include <iostream>

using namespace std;

/*
Faça um algoritmo que converta um comprimento dado em polegadas para centímetros.
O programa deve utilizar o diálogo Comprimento em polegadas: e escrever 
o resultado em um linha da tela com a forma xxxpol = yyycm. (1 pol = 2,54 cm)
*/

int main() {

    float pol, cm;

    cout << "Polegadas: "; cin >> pol;

    cm = pol*2.54;

    cout << pol << "pol" << " == " << cm << "cm.";

    return 0;
}