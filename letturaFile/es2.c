#include <stdio.h>
#include "es1.h"
#include "es2.h"
//Dato un file con N elementi di tipo Integer, eseguirne la somma e stamparla a video




void sommaInteri() {
    int somma = 0;
    int str;
    FILE * file;
    file = fopen("E:\\ITS Kennedy\\Secondo anno\\C C++\\Esercizi\\letturaFile\\numbers.txt","r");
    if (file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", &str);
            //int n = toString(str);
            somma+= str;

        }
        printf("La somma e': %d \n",somma);
        fclose(file);
    } else {
        printf("Errore impossibile aprire file \n");
    }
}
