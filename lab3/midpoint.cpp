#include <iostream>
#include <GL/glut.h>
#include <cmath>

using namespace std;

double X0, Y0, r;

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

void circlemidpoint()
{
    int x = r;
    int y = 0;
    int p = 1 - x;
    
    
	glClear(GL_COLOR_BUFFER_BIT);

    glBegin(GL_POINTS);
        while (x >= y)
        {
            glVertex2d( x + X0,  y + Y0);
            glVertex2d( y + X0,  x + Y0);
            glVertex2d(-x + X0,  y + Y0);
            glVertex2d(-y + X0,  x + Y0);
            glVertex2d(-x + X0, -y + Y0);
            glVertex2d(-y + X0, -x + Y0);
            glVertex2d( x + X0, -y + Y0);
            glVertex2d( y + X0, -x + Y0);
            y++;
            if (p <= 0)
            {
                p += 2 * y + 1;
            }
            else
            {
                x--;
                p += 2 * (y - x) + 1;
            }
        }
	glEnd();
  	glFlush();
}

int main(int argc, char** argv)
{
    cout << "Enter the center:\n";    
    cin >> X0 >> Y0;
    cout << "Enter the radius:";
    cin >> r;

    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
    glutInitWindowPosition(100, 100);
    glutInitWindowSize(640, 480);
    glutCreateWindow("Midpoint Circle");
    init();
    glutDisplayFunc(circlemidpoint);
    glutMainLoop();
    return 0;
}
