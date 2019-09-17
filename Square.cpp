#include "Square.h"
#include <GL/glut.h>
#include <stdlib.h>

Square::Square(){
    ln1.setValues(0,10,10,10);
    ln2.setValues(10,10,10,0);
    ln3.setValues(10,0,0,0);
    ln4.setValues(0,0,0,10);

}

Square::~Square(){
    ln1.setValues(0,0,0,0);
    ln2.setValues(0,0,0,0);
    ln3.setValues(0,0,0,0);
    ln4.setValues(0,0,0,0);
}

void Square::setVertex(int a, int b, int c, int d, int e, int f, int g, int h, int i){
	ln1.setValues(a,b,c,d);
    ln2.setValues(c,d,e,f);
    ln3.setValues(e,f,g,h);
    ln4.setValues(h,i,a,b);
}

void Square::draw(){
    ln1.draw();
    ln2.draw();
    ln3.draw();
    ln4.draw();
}
int Square::getPivotX(){
    return ln4.getValueX();
}
int Square::getPivotY(){
    return ln4.getValueY();
}
