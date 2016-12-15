#include <iostream>
using namespace std;

//es. 1 data una matrice di numeri random effettuare la somma dei valori della diagonale
void sommaDiagonale(int **m) {
    int somma = 0;
    int j;
    for (int i = 0; i < 10; i++) {
        j = i;
        somma += m[i][j];
    }
    cout <<"La somma dei numeri della diagonale e': "<<somma<<"\n";
}