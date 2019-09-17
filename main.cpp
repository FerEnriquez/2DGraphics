#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <math.h>
#include "Square.h"
#include "Triangle.h"
#include "Circle.h"


void reshape(int width, int height) //Reescalado
{
     glViewport(0, 0, width, height);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(-320,320,-240,240);
     glMatrixMode(GL_MODELVIEW);
 }

void display()
{
    Point mipunto;
    Line milinea;
    mipunto.setValues(50,50);
    milinea.setValues(0,0,40,50);
     glClear(GL_COLOR_BUFFER_BIT);
     glLoadIdentity();


    //mipunto.draw();
  //  milinea.draw();
     Square cuadrado;
     cuadrado.draw();
    Triangle triangulo;
    triangulo.draw();
    Circle circulo;
    circulo.draw();

     glFlush();
 }


void init()
{
     glClearColor(0,0,0,0);
 }

int main(int argc, char*argv[])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowPosition(50,50);
    glutInitWindowSize(640,480);
    glutCreateWindow("Manejo Clases");
    init();
    //funcion que se llama para dibujar los objetos en pantalla
    glutDisplayFunc(display);
    //funcion que se llama para indicar que hacer cuando la pantalla cambia de tamano
    glutReshapeFunc(reshape);
    glutMainLoop();
    return 0;
}
