#include "Func.hpp"

namespace Masiv
{

    int* FunInput(int &a, int Mess[1000])
        {
            int b=0;
            std::ifstream
            file("/Users/enil/Desktop/AddGotov/Add-2/input.txt");
            
            file >> b;
            
            for (int i=0; i<b; i++)
            {
                file >> Mess[i];
            }
            a=b;
            
            file.close();

            return Mess;
        }
    

    void FunOutput(int a, int Mass[], int Min, int Max)
    {
        std::ofstream file("/Users/enil/Desktop/AddGotov/Add-2/output.txt", std::ios::out);
        
        for (int i=0; i<a; i++)
        {
            file << Mass[i] << " ";
        }
        
        file << std::endl << Min << " " << Max;
        
        file.close();
    }

    int* FunSort(int a, int Mess[1000])
    {
        int temp;
        for (int i=0; i<a; i++)
        {
            for (int j=0; j<a-1; j++)
            {
                if (Mess[j]>Mess[j+1])
                {
                    temp = Mess[j];
                    Mess[j] = Mess[j+1];
                    Mess[j+1] = temp;
                }
            }
        }
        
        return Mess;
    }

    void FunMin(int a, int Mass[1000], int &Min)
    {
        Min=2000000;
        for (int i=0; i<a; i++)
        {
            if (Min>Mass[i]) Min=Mass[i];
        }
    }
    void FunMax(int a, int Mass[1000], int &Max)
    {
        Max=-2000000;
        for (int i=0; i<a; i++)
        {
            if (Max<Mass[i]) Max=Mass[i];
        }
    }

}
