#include <stdio.h>


void stampaArray(int a[]);

int main() {

    //Dato un array con N elementi di tipo Integer, stamparli a video, con indicazione sulla
    //posizione del singolo elemento.
    int test[] = {25,2,3,4,5,4};
    stampaArray(test);
    return 0;
}

void stampaArray(int a[]){
    for (int i = 0; i < 6; i++) {
        printf("%d  e posizione %d \n",a[i], i);
    }
}