#include "Triangle.h"
#include <GL/glut.h>
#include <stdlib.h>

Triangle::Triangle(){
    ln1.setValues(10,0,15,10);
    ln2.setValues(15,10,20,0);
    ln3.setValues(20,0,10,0);
}

Triangle::~Triangle(){
    ln1.setValues(0,0,0,0);
    ln2.setValues(0,0,0,0);
    ln3.setValues(0,0,0,0);
}

void Triangle::setVertex(int a, int b, int c, int d, int e, int f, int g){
	ln1.setValues(a,b,c,d);
    ln2.setValues(c,d,e,f);
    ln3.setValues(e,f,a, b);
}

void Triangle::draw(){
    ln1.draw();
    ln2.draw();
    ln3.draw();
}
int Triangle::getPivotX(){
    return ln1.getValueX();
}
int Triangle::getPivotY(){
    return ln1.getValueY();
}
