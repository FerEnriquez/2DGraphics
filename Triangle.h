#include <GL/glut.h>
#include <stdlib.h>
#include "Line.h"
#ifndef TRIANGLE_H
#define TRIANGLE_H
class Triangle{
    private:
        int vertex[3][2];
        Line ln1;
        Line ln2;
        Line ln3;
    public:
        Triangle();
        ~Triangle();
        void setVertex(int a, int b, int c, int d, int e, int f, int g);
        void draw();
        int getPivotX();
        int getPivotY();
};
#endif
