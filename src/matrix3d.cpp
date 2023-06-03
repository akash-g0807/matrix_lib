#include "matrix3d.h"
#include <math.h>
#include <iostream>

/**
 * Constructor Implementation
*/
Matrix3D::Matrix3D()
{
    for (int i = 0; i <= 3; i++)
    {
        this->m[i][i] = 0;
    }
}

/**
 * Printing the matrix
*/
void Matrix3D::Log(){

    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            std::cout << this->m[i][j] << " ";
        }
        std::cout << std::endl;
    }
}

/**
 * Adding two matrices
*/
void Matrix3D::Add(Matrix3D m){
    
    for (int i = 0; i <= 3; i++){
        for (int j = 0; j <= 3; j++){
            this->m[i][j] += m.m[i][j];
        }
    }
}


