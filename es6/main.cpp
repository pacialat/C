#include <stdio.h>

void mediaArray(float *a);
int main() {
    //Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    //eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
    float test[] =  {35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    mediaArray(test);
    return 0;
}

void mediaArray(float *a) {
    float media;
    float somma= 0;
    for (int i = 0; i < 6; i++) {
        somma +=a[i];
    }
    media = somma /6;
    printf("media: %.2f",media);
}