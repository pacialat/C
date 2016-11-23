#include <stdio.h>
#include "es1.h"
//Dato un file con N elementi di tipo Int, leggerli e stamparli a video

int toString(char a[]);
void stampaNumeri();
void sommaInteri();
void sottrazioneInteri();
void moltiplicazioneInteri();
void mediaAritmeticaInteri();
void calcoliInteri();
int main() {
    stampaNumeri();
    sommaInteri();
    sottrazioneInteri();
    moltiplicazioneInteri();
    mediaAritmeticaInteri();
    calcoliInteri();
    return 0;
}

void stampaNumeri() {

    char * str;
    FILE * file;
    file = fopen("E:\\ITS Kennedy\\Secondo anno\\C C++\\Esercizi\\letturaFile\\numbers.txt","r");
    if (file != NULL) {
        while (!feof(file)) {
            fscanf(file, "%s", &str);
            int n = toString(&str);
            printf("%d \n",n);
        }
        fclose(file);
    } else {
        printf("Errore impossibile aprire file \n");
    }
}

int toString(char a[]) {
    int c, sign, offset, n;

    if (a[0] == '-') {  // Handle negative integers
        sign = -1;
    }

    if (sign == -1) {  // Set starting position to convert
        offset = 1;
    }
    else {
        offset = 0;
    }

    n = 0;

    for (c = offset; a[c] != '\0'; c++) {
        n = n * 10 + a[c] - '0';
    }

    if (sign == -1) {
        n = -n;
    }

    return n;
}