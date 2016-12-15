#include <iostream>
using namespace std;

//es. 3 data una matrice di numeri random trovare il valore più piccolo per ogni riga
void valorePiccoloRiga(int **m){
    int min = 2147483647;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (m[i][j] < min ) {
                min = m[i][j];
            }
        }
        cout <<"Il numero piu' piccolo della riga "<< i+1<<" e': "<<min<<"\n";
        min = 2147483647;
    }
}