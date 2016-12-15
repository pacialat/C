#include <iostream>
using namespace std;

//es. 2 data una matrice di numeri random effettuare la somma dei valori di ogni colonna
void sommaColonna(int **m) {
    int somma = 0;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            somma += m[j][i];
        }
        cout <<"La somma dei numeri della colonna "<<i+1<<" e': "<<somma<<"\n";
        somma = 0;
    }
}
