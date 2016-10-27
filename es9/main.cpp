#include <stdio.h>

float ordinamentoCrescente(float *a);
float ordinamentoDecrescente(float *a);
int main() {
    //Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    //eseguire l’ordinamento crescente e decrescente, stamparne il risultato a video

    float test[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    ordinamentoCrescente(test);
    ordinamentoDecrescente(test);
    return 0;
}

float ordinamentoCrescente(float *a) {
    float temp;
    int min;

    for(int i=0; i < 6-1; i++) {
        min = i;

        for(int j=i+1; j < 6; j++) {
            if (a[j] < a[min])
                min = j;
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    }

    for (int i=0; i < 6; i++) {
        printf("%.2f \n",a[i]);
    }
    printf("\n");
}

float ordinamentoDecrescente(float *a) {
    float temp;
    int max;

    for(int i=0; i < 6-1; i++) {
        max = i;

        for(int j=i+1; j < 6; j++) {
            if (a[j] > a[max])
                max = j;
        }
        temp=a[max];
        a[max]=a[i];
        a[i]=temp;
    }

    for (int i=0; i < 6; i++) {
        printf("%.2f \n",a[i]);
    }
}
