#include <GL/glut.h>
#include <stdlib.h>
class Matrix{
    private :
        float mat[3][3];

    public:
        Matrix();
        ~Matrix();
        void setValues(float newM[3][3]);
        void printMat();
        void Multiply(float mt[3][3]);
        void Rotate(float D);
        void Scale(int x, int y);
        void Move(float x, float y);
        void Pivote(float x, float y);
        void BackPivote(float x, float y);
        void getPoints(float a, float b, float c);

};
