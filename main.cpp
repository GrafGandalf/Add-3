//
//  main.cpp
//  Lab_6
//
#include <iostream>
#include <locale>
#include <fstream>
#include "Func.hpp"

using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian_Russia.1251");
    int Mass[1000]; int a=0; int Min; int Max;
    
    *Mass = *Masiv::FunInput(a, Mass);
    
    *Mass = *Masiv::FunSort(a, Mass);
    
    Masiv::FunMin(a, Mass, Min);
    Masiv::FunMax(a, Mass, Max);
    
    Masiv::FunOutput(a, Mass, Min, Max);
    
    return 0;
}
