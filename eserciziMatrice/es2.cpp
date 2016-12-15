#include <iostream>
using namespace std;

//es. 2 data una matrice di numeri random effettuare la moltiplicazione
void moltiplicazione(int **m){
    long double moltiplicazione = 1;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            moltiplicazione *= m[i][j];
        }
    }
    cout <<"La moltiplicazione dei numeri e': "<<moltiplicazione<<"\n";
}