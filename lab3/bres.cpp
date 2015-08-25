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

void linebres()
{
    int dx = abs(X1-X2);
    int dy = abs(X1-Y2);
    int p = 2 * dy - dx;
    int twody = 2 * dy;
    int twodydx = 2 * (dy - dx);
    int x, y, xend;
    
    if (X1 > X2)
    {
        x = X2;
        y = Y2;
        xend = X1;
    }
    else
    {
        x = X1;
        y = Y1;
        xend = X2;
    }
    
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
	    glVertex2d(x,y);
        while (x < xend)
        {
            //cout << "hue";
            x++;
            if (p < 0)
                p += twody;
            else
            {
                y++;
                p += twodydx;
            }        
            glVertex2d(x,y);
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
    glutCreateWindow("Bresenham Line");
    init();
    glutDisplayFunc(linebres);
    glutMainLoop();
    return 0;
}
