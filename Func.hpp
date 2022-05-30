#pragma once
#include <math.h>
#include <fstream>
#include <iostream>

namespace Masiv
{
    int* FunInput(int &a, int Mess[1000]);

    void FunOutput(int a, int Mass[], int Min, int Max);

    void FunMin(int a, int Mass[1000], int &Min);
    void FunMax(int a, int Mass[1000], int &Max);

    int* FunSort(int a, int Mess[1000]);
}

