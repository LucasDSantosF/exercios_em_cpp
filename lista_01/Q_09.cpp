#include <iostream>

using namespace std;

/*
Faça um programa que, dados pelo usuário os três coeficientes a, b e c de uma equação do 2º  grau,
escreve os valores das raízes dessa equação.
*/

int main() {

    float a, b;
    float c ,del;
    float xp, xn;
    float aux;

    cout << "valor de a: "; cin >> a;
    cout << "Valor de b: "; cin >> b;
    cout << "valor de c: "; cin >> c;

    del = (b*b) - ((4*a)*c);
    
    del = del*del;
    aux = 2*a;
    xp = (-b) + del;
    xp =  xp / aux;

    xn = (-b) - del;
    xn = xn/aux; 

    cout << "X1 = " << xp << ", X2 = " << xn;


    return 0;
}