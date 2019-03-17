#include <iostream>
#include <fstream>
#include <time.h>
#include <stdio.h>
#include <stdlib.h>
#include <thread>
#include "matrix_multiplication.h"

int main(int argc, char** argv)
{
    coreCount = atoi(argv[1]);
    std::cout << "number of cores = " << coreCount << "\n";
    inFile.open("matrix_values.txt");
    
    inFile >> size;
    std::cout << "The size of the matrices are = " << size << "\n";
    int matrix1[size][size];
    int matrix2[size][size];
    int row[size];
    int column [size];
    int productMatrix [size][size];
    
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            inFile >> matrix1[i][j];
        }
    }

    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            inFile >> matrix2[i][j];
        }
    }
    inFile.close();
    for(rowIndex=0; rowIndex<size; rowIndex++)
    {
        for(i=0; i <size; i++)
            row[i] = matrix1[rowIndex][i];
        
        for(columnIndex=0; columnIndex<size; columnIndex++)
        {
            for(i=0; i <size; i++)
                column[i] = matrix2[i][columnIndex];
            
            newValue = 0;
            for(i=0; i<size; i++)
            {
                newValue += row[i]*column[i];
            }
            productMatrix[rowIndex][columnIndex] = newValue;
        }
    }
    
    /*std::cout << "matrix 1 \n";
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            std::cout << matrix1[i][j] << " ";
        }
        std::cout << "\n";
    }
    std::cout << "matrix 2 \n";
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            std::cout << matrix2[i][j] << " ";
        }
        std::cout << "\n";
    } */
    
   std::cout << "product matrix \n";
    for(i=0; i<size; i++)
    {
        for(j=0; j<size; j++)
        {
            std::cout << productMatrix[i][j] << " ";
        }
        std::cout << "\n";
    } 
    return EXIT_SUCCESS;
}

        


