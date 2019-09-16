#include "Matrix.h"

Matrix::Matrix(){
    int i = 0;
    int j = 0;
    for(i = 0; i < 3; i++){
        for(j = 0; j < 3; j++){
            if(i == j){
                M[i][j] = 1.0;
            }
            M[i][j] = 0.0;
        }
    }
}
Matrix::~Matrix(){

}

void Multiply(float B[3][3]){

}

void Rotate(int D){

}
void Escale(int x, int y){
}
