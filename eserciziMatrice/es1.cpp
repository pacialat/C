#include <iostream>
using namespace std;

//es. 1 data una matrice di numeri random effettuare la somma dei valori
void somma(int **m) {
    int somma = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            somma += m[i][j];
        }
    }
    cout <<"La somma dei numeri e': "<<somma<<"\n";
}
