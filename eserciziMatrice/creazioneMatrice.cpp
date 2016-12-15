#include <cstdlib>
#include <time.h>
#include <iostream>
using namespace std;

int** create2DArray()
{
    srand((unsigned) time(NULL));
    int** array2D = 0;
    array2D = new int*[10];

    for (int h = 0; h < 10; h++)
    {
        array2D[h] = new int[10];

        for (int w = 0; w < 10; w++)
        {
            array2D[h][w] =  rand() % 50 +1;
            cout << array2D[h][w] << "\t";
        }
        cout <<"\n";
    }

    return array2D;
}