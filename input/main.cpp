#include <stdio.h>

void funzione1();
void funzione2();
void funzione3();
void funzione4();
int main() {
    int x;
    printf("1 Esegui prima funzione \n");
    printf("2 Esegui seconda funzione \n");
    printf("3 Esegui terza funzione \n");
    printf("4 Esegui quarta funzione \n");
    printf("\n");
    printf("Inserisci il numero della funzione: \n");
    scanf("%d \n",&x);
    switch (x) {
        case 1:
            funzione1();
            break;
        case 2:
            funzione2();
            break;
        case 3:
            funzione3();
            break;
        case 4:
            funzione4();
            break;
        default:
            printf("scelta non valida");
            break;
    }
    return 0;
}

void funzione1() {
    printf("Funzione 1");
}

void funzione2() {
    printf("Funzione 2");
}
void funzione3() {
    printf("Funzione 3");
}
void funzione4() {
    printf("Funzione 4");
}