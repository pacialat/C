//Dato un file con N elementi di tipo Int, eseguirne la moltiplicazione e stamparli a video
#include <stdio.h>
void moltiplicazioneInteri() {
    double moltiplicazione = 1;
    int str;
    FILE * file;
    file = fopen("E:\\ITS Kennedy\\Secondo anno\\C C++\\Esercizi\\letturaFile\\numbers.txt","r");
    if (file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", &str);
            moltiplicazione *= str;

        }
        printf("La moltiplicazione e': %.0f \n",moltiplicazione);
        fclose(file);
    } else {
        printf("Errore impossibile aprire file \n");
    }
}