#include <GL/glut.h>


void display()
{
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.9, -0.6);
        glVertex2f(0.9, 0.3);
        glVertex2f(-0.9, 0.3);
        glVertex2f(0.9, -0.6);
        glVertex2f(0.0, 0.9);
    glEnd();
    glFlush();
}

int main(int argc, char **argv)
{
    glutInit(&argc, argv);
    glutCreateWindow("satanist");
    glutDisplayFunc(display);
    glutMainLoop();
    
    return 0;
}
