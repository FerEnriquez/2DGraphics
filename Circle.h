#include <GL/glut.h>
#include <stdlib.h>
#include "Point.h"
#ifndef CIRCLE_H
#define CIRCLE_H
class Circle{
    private:
        Point p;
        float rat;
        int xc;
        int yc;
    public:
        Circle();
        ~Circle();
        void setRadio(float r);
        void setCenter(int x, int y);
        int getPivotX();
        int getPivotY();
        void draw();
};
#endif
