#include <iostream>

using namespace std;

/*
Elabore um algoritmo que calcule e imprima a média de um aluno em uma 
disciplina com as seguintes características: Duas prova (P1 e P2), um trabalho (T)
e 5 listas de exercícios (L1..L5). A média será dada por: média = 0,3xP1 + 0,4xP2 + ]
0,2x(média das listas) + 0,1xT.
*/


int main() {

    float p1, p2, t, l1, l2, l3, l4, l5, media_total, media_list;

    cout << "p1: " ; cin >> p1;
    cout << "p2: "; cin >> p2;
    cout << "t: "; cin >> t;
    cout << "l1: "; cin >> l1;
    cout << "l2: "; cin >> l2;
    cout << "l3: "; cin >> l3;
    cout << "l4: "; cin >> l4;
    cout << "l5: "; cin >> l5;

    media_list = (l1+l2+l3+l4+l5)/5;
    media_total = p1*0.3 + p2*0.4 + media_list*0.2 + t*0.1;

    cout << "Media Final: " << media_total;


    return 0;
}