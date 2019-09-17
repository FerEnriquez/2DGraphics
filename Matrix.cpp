#include "Matrix.h"
#include <stdio.h>
#include <math.h>
#define PI 3.14159265

Matrix::Matrix(){
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                mat[i][j] = 1.0;
            }
            else
                mat[i][j] = 0.0;
        }
    }
}
Matrix::~Matrix()
{

}
void Matrix::setValues(float newM[3][3]){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           mat[i][j] = newM[i][j];
        }
    }
}
void Matrix::printMat(){
    int i, j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            printf("| %f |", mat[i][j]);
        }
        printf("\n");
    }
}
void Matrix::Multiply(float mt[3][3]){
    int i, j, k;
    float sum = 0;
    float mult = 0;
    float x[3][3];
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                mult = mat[i][k] * mt[k][j];
                sum = sum + mult;
            }
        x[i][j] = sum;
        sum = 0;
        }
    }
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           mat[i][j] = x[i][j];
        }
    }

}
void Matrix::Move(float x, float y){
    float met[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                met[i][j] = 1.0;
            }
            else
                met[i][j] = 0.0;
        }
    }
    met[0][2] = x;
    met[1][2] = y;
    Multiply(met);
}
void Matrix::Scale(int x, int y){
    float met[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                met[i][j] = 1.0;
            }
            else
                met[i][j] = 0.0;
        }
    }
    met[0][0] = x;
    met[1][1] = y;
    Multiply(met);
}
void Matrix::Rotate(float d){
    float met[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                met[i][j] = 1.0;
            }
            else
                met[i][j] = 0.0;
        }
    }
    float val = PI / 180.0;
    met[0][0] = cos(d*val);
    met[0][1] = -sin(d*val);
    met[1][0] = sin(d*val);
    met[1][1] = cos(d*val);
    Multiply(met);
}
void Matrix::Pivote(float x, float y){
    mat[0][2] = x;
    mat[1][2] = y;
}
void Matrix::BackPivote(float x, float y){
    float met[3][3];
    int i,j;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                met[i][j] = 1.0;
            }
            else
                met[i][j] = 0.0;
        }
    }
    met[0][2] = -x;
    met[1][2] = -y;
    Multiply(met);
}
void Matrix::getPoints(float a, float b, float c){
    float mPoints[3];
    mPoints[0] = a;
    mPoints[1] = b;
    mPoints[2] = c;
    int i, j, k;
    float x[3][3];
    float sum = 0;
    float mult = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            for(k = 0; k < 3; k++){
                mult = mat[i][k] * mPoints[k];
                sum = sum + mult;
            }
        x[i][j] = sum;
        sum = 0;
        }
    }

    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
           mat[i][j] = x[i][j];
        }
    }

}

