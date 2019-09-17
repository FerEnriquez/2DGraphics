#include "Circle.h"
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#define PI 3.14159265

Circle::Circle(){
    rat = 100;
    xc = 0;
    yc = 0;
}
Circle::~Circle(){
    rat = 0;
}
void Circle::setRadio(float r){
    rat = r;
}
void Circle::setCenter(int x, int y){
    xc = x;
    yc = y;
}
void Circle:: draw(){
    float angulo;
    int x = 0;
    int y = 0;
    for(angulo = 1; angulo <= 360; angulo ++){
        x = rat * sin(angulo);
        y = rat * cos(angulo);
        p.setValues(x,y);
        p.draw();
    }
}
int Circle::getPivotX(){
    return xc;
}
int Circle::getPivotY(){
    return yc;
}
