#include <stdio.h>

void moltiplicazioneArray(float *a);
int main() {
    //Dato un array con N elementi di tipo Float, eseguirne la moltiplicazione e
    // stamparli a video con un numero di cifre decimali pari a 2.
    float test[] = {25.21,2.47,3.12};
    moltiplicazioneArray(test);
    return 0;
}

void moltiplicazioneArray(float *a) {
    float moltiplicazione= 1;
    for (int i = 0; i < sizeof(a) - 1; i++) {
        moltiplicazione *=a[i];
    }
    printf("moltiplicazione: %.2f",moltiplicazione);
}