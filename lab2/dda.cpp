#include <iostream>
#include <GL/glut.h>
#include <cmath>

using namespace std;

double X1, Y1, X2, Y2;

float round_value(float v)
{
    return floor(v + 0.5);
}

void init()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0, 0, 0);
    gluOrtho2D(0, 640, 0, 480);
}

void linedda()
{
    double dx = X2 - X1;
 	double dy = Y2 - Y1;
 	double steps;
 	float xInc, yInc, x = X1, y = Y1;
	
	if (abs(dx) > abs(dy))
	{
	    steps = abs(dx);
	}
	else
	{
	    steps = abs(dy);
	}
	
	xInc = dx / (float)steps;
	yInc = dy / (float)steps;
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
	    glVertex2d(x,y);
      	int k;
        for (k = 0; k < steps; k++)
      	{
            x += xInc;
            y += yInc;
            glVertex2d(round_value(x), round_value(y));
	    }
	glEnd();
  	glFlush();
}

int main(int argc, char** argv)
{
    cout << "Enter two end points:\n";
    cout << "Enter point one:";
    
    cin >> X1 >> Y1;
    cout << "Enter point two:";
    cin >> X2 >> Y2;
    
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("DDA Line");
    init();
    glutDisplayFunc(linedda);
    glutMainLoop();
    return 0;
}
