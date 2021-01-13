#include <iostream>

using namespace std;

/*
Faça um algoritmo que leia os valores de horas, minutos e segundos e transforme tudo para segundo.
*/

int main() {

    int hora, min, seg, segundos;

    cout << "Hora: "; cin >> hora;
    cout << "minutos: "; cin >> min;
    cout << "segundos: "; cin >> seg;

    segundos = hora*3600;
    segundos += min*60;
    segundos += seg;

    cout << "Tempo em segundos: " << segundos;

    return 0;
}