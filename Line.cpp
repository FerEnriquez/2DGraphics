
#include "Line.h"

Line::Line()
{
}

Line::~Line()
{
}

void Line::setValues(int x1, int y1, int x2, int y2)
{
	p1.setValues(x1,y1);
	p2.setValues(x2,y2);
}

void Line::draw()
{
    glBegin(GL_LINES);
        glVertex2iv(p1.getValues()); //getValues regresa un vector, por eso es posible esa asignación
        glVertex2iv(p2.getValues());
    glEnd();
}

