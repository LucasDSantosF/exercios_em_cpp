#include <iostream>

using namespace std;


/*
Faça um algoritmo que leia os valores de anos, meses e dias e imprima tudo em dias.
*/


int main() {

    int ano, mes;
    int dia; 
    int ias;

    cout <<"Ano: "; cin >> ano;
    cout <<"Mes: "; cin >> mes;
    cout << "dia: "; cin >> dia;

    ias = ano*365;
    ias += mes*30;
    ias += dia;

    cout << "d; " << ias;
    return 0;
}