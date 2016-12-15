#include <iostream>
using namespace std;

//es. 4 data una matrice di numeri random trovare il valore più piccolo per ogni colonna
void valorePiccoloColonna(int **m) {
    int min = 2147483647;
    for (int i = 0; i < 10; i++) {
        for (int j = 0; j < 10; j++) {
            if (m[j][i] < min ) {
                min = m[j][i];
            }
        }
        cout <<"Il numero piu' piccolo della colonna "<< i+1<<" e': "<<min<<"\n";
        min = 2147483647;
    }
}