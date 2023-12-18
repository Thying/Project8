#include <iostream> 
#include "functions.h" 
#include <cstdlib> 
#include <ctime> 

using namespace std;

void start() {
    srand(time(0));
    extern int matrix[5][2];//mkmcekcodmceokcmeocmkodmeocdmedcoecdmo 
    int mas[5];

    for (int i = 0; i < 5; i++)
    {
        mas[i] = rand() % 100 + 1;
        matrix[i][0] = mas[i];
    }

    for (int i = 0; i < 5; i++)
    {
        matrix[i][rand() % (5 - i)] = mas[i];
    }
}
