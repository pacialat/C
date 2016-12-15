#include <iostream>
using namespace std;

//es. 3 data una matrice di numeri random effettuare la media dei valori
void media(int **m) {
    int somma = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            somma += m[i][j];
        }
    }
    float media = (float)somma / 100;
    cout <<"La media dei numeri e': "<<media<<"\n";
}