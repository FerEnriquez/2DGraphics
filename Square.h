#include <GL/glut.h>
#include <stdlib.h>
#include "Line.h"
#ifndef SQUARE_H
#define SQUARE_H
class Square{
    private:
        int vertex[4][2];
        Line ln1;
        Line ln2;
        Line ln3;
        Line ln4;

    public:
        Square();
        ~Square();
        void setVertex(int a, int b, int c, int d, int e, int f, int g, int h, int i);
        void draw();
        int getPivotX();
        int getPivotY();
};
#endif
