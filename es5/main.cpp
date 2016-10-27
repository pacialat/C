#include <stdio.h>

void sottrazioneArray(float *a);
int main() {
    //Dato un array con N elementi di tipo Float, eseguirne la sottrazione e stamparli a video
    // con un numero di cifre decimali pari a 2.
    float test[] = {25.21,2.47,3.12};
    sottrazioneArray(test);
    return 0;
}

void sottrazioneArray(float *a) {
    float sottrazione= a[0];
    for (int i = 0; i < sizeof(a) - 2; i++) {
        sottrazione -=a[i+1];
    }
    printf("sottrazione: %.2f",sottrazione);
}