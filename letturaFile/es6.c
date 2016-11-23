#include <stdio.h>

//Dato un file con N elementi di tipo Int, indicare il maggiore, il minore e il valore medio, stamparne il risultato a video
void calcoliInteri() {
    float somma = 0;
    int minore = 10000;
    int maggiore = 0;
    int i = 0;
    int str;
    FILE * file;
    file = fopen("E:\\ITS Kennedy\\Secondo anno\\C C++\\Esercizi\\letturaFile\\numbers.txt","r");
    if (file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%d", &str);
            somma += str;
            if (minore > str) {
                minore = str;
            }
            if (maggiore < str) {
                maggiore = str;
            }
            i++;
        }
        printf("La media aritmetica e': %.2f \n",(somma/i));
        printf("Il valore minore e': %d \n",minore);
        printf("Il valore maggiore e': %d \n",maggiore);
        fclose(file);
    } else {
        printf("Errore impossibile aprire file \n");
    }
}