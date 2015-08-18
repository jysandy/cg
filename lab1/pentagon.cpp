#include <GL/glut.h>

void display()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(0.3, 0.1);
        glVertex2f(0.1, 0.4);
        glColor3f(0.0, 1.0, 0.0);
        glVertex2f(0.5, 0.7);
        glColor3f(1.0, 0.0, 0.0);
        glVertex2f(0.9, 0.4);
        glVertex2f(0.7, 0.1);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("simple");
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
