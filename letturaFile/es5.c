//Dato un file con N elementi di tipo Int,eseguirne la MEDIA ARITMETICA e stamparne il risultato a video
#include <stdio.h>
void mediaAritmeticaInteri() {
    float somma = 0;
    int i = 0;
    int str;
    FILE * file;
    file = fopen("E:\\ITS Kennedy\\Secondo anno\\C C++\\Esercizi\\letturaFile\\numbers.txt","r");
    if (file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", &str);
            somma += str;
            i++;
        }
        printf("La media aritmetica e': %.2f \n",(somma/i));
        fclose(file);
    } else {
        printf("Errore impossibile aprire file \n");
    }
}