#include <stdio.h>

void mediaPonderataArray(float *a);
int main() {
    //Dato il seguente array { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 } di elementi di tipo float,
    //eseguirne la MEDIA PONDERATA con pesi pari alla corrispondente posizione inversa, e stamparne il risultato a video
    float test[] = { 35.4, 46.7, 77.55, 11.1, 9.04, 0.75 };
    mediaPonderataArray(test);
    return 0;
}

void mediaPonderataArray(float *a) {
    float mediaP;
    int pesoTot = 0;
    int peso[6];
    float somma= 0;
    float valPonderato[6];
    for (int i = 0; i < 6; i++) {
        peso[i] = 5 -i;
        pesoTot+= peso[i];
        valPonderato[i] = a[i]*peso[i];
        somma +=valPonderato[i];
    }
    mediaP = somma /21;
    printf("media Ponderata: %.2f",mediaP);
}
