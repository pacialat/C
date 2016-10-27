#include <stdio.h>

void sommaArray(int a[]);
int main() {
    //Dato un array con N elementi di tipo Integer, eseguirne la somma e stamparla a video
    int test[] = {25,2,3};
    sommaArray(test);
    return 0;
}

void sommaArray(int a[]) {
    int somma= 0;
    for (int i = 0; i < sizeof(a) - 1; i++) {
       somma +=a[i];
    }
    printf("somma: %d",somma);
}