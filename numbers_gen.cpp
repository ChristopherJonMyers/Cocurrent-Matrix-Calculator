// Chris Myers 
// All code is my own, I did not copy code.

#include <iostream>
#include <fstream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>

int main(int argc, char** argv)
{
    int size = atoi(argv[1]);
    int range = atoi(argv[2]);
    int totalValues = size*size*2;
    int element = 0;
    srand(time(NULL));
    
    std::ofstream outfile ("matrix_values.txt");
    outfile << size << " ";

    for(int i=0; i<totalValues; i++)
    {
        element = rand()% range + 1;
        outfile << element << " ";
    }
    
    outfile.close();
    
    return EXIT_SUCCESS;
}