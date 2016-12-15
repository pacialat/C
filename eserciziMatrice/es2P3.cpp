#include <iostream>
#include <fstream>
using namespace std;

//es. 2 data una matrice di numeri random stamparli su file
void stampaMatriceFile(int **m) {
    ofstream file("matrice.txt");
    if (file.is_open()) {
        if (file.good()) {
            cout<<"file aperto e OK"<<endl;
        }

        for (int i=0; i <10; i++) {
            for (int j=0;j<10;j++) {
                // output in console con tabulazione
                file <<m[i][j]<<"\t";
            }
            file <<endl;
        }
        file.close();
    }

}