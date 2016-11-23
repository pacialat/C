//Dato un file con N elementi di tipo Integer, eseguirne la sottrazione e stamparla a video
#include <stdio.h>
#include "es1.h"

void sottrazioneInteri() {
    int somma = 0;
    int str;
    FILE * file;
    file = fopen("E:\\ITS Kennedy\\Secondo anno\\C C++\\Esercizi\\letturaFile\\numbers.txt","r");
    if (file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", &str);
            if (somma == 0) {
                somma = str;
            } else {
                somma -= str;
            }

        }
        printf("La sottrazione e': %d \n",somma);
        fclose(file);
    } else {
        printf("Errore impossibile aprire file \n");
    }
}