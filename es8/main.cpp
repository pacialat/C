#include <stdio.h>

void arrayMinMaxMedia(float *a);
int main() {
    //Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    // indicare il maggiore, il minore e il valore medio, stamparne il risultato a video
    float test[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    arrayMinMaxMedia(test);
    return 0;
}

void arrayMinMaxMedia(float *a) {
    float media;
    float tot = a[0];
    float min = a[0];
    float max = a[0];
    for (int i = 0; i < 5; i++) {

        if (a[i+1] < a[i]) {
            min = a[i+1];
        }
        if (a[i+1] > a[i]) {
            max = a[i+1];
        }
        tot += a[i+1];
    }
    media = tot / 6;
    printf("Minimo %.2f massimo %.2f media %.2f",min,max,media);
}
