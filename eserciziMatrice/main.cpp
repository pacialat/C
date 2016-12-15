#include <iostream>
int** matrix();
int** create2DArray();
void somma(int **m);
void moltiplicazione(int **m);
void media(int **m);
void sommaRiga(int **m);
void sommaColonna(int **m);
void valorePiccoloRiga(int **m);
void valorePiccoloColonna(int **m);
void sommaDiagonale(int **m);
void stampaMatriceFile(int **m);
using namespace std;

int **miaMatrice;

int main() {
    miaMatrice = create2DArray();
    cout<<"\n \n";
    somma(miaMatrice);
    moltiplicazione(miaMatrice);
    media(miaMatrice);
    sommaRiga(miaMatrice);
    sommaColonna(miaMatrice);
    valorePiccoloRiga(miaMatrice);
    valorePiccoloColonna(miaMatrice);
    sommaDiagonale(miaMatrice);
    stampaMatriceFile(miaMatrice);
    return 0;
}

