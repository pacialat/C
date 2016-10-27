#include <stdio.h>

void sottrazioneArray(int a[]);
int main() {
    //Dato un array con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video
    int test[] = {25,2,3};
    sottrazioneArray(test);
    return 0;
}

void sottrazioneArray(int a[]) {
    int sottrazione= a[0];
    for (int i = 0; i < sizeof(a) - 2; i++) {
        sottrazione -=a[i+1];
    }
    printf("sottrazione: %d",sottrazione);
}