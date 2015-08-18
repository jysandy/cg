#include <GL/glut.h>

void display()
{
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(1.0, 0.0, 0.0);
    
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.75, 0.25);
        glVertex2f(-0.75, 0.75);
        glVertex2f(-0.25, 0.75);
        glVertex2f(-0.25, 0.25);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.3, 0.4);
        glVertex2f(0.4, 0.5);
        glVertex2f(0.5, 0.5);
        glVertex2f(0.6, 0.4);
        glVertex2f(0.5, 0.3);
        glVertex2f(0.4, 0.3);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.9, -0.9);
        glVertex2f(-0.9, -0.6);
        glVertex2f(-0.6, -0.6);
        glVertex2f(-0.6, -0.9);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.7, -0.7);
        glVertex2f(-0.7, -0.4);
        glVertex2f(-0.4, -0.4);
        glVertex2f(-0.4, -0.7);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.1, -0.6);
        glVertex2f(0.3, -0.3);
        glVertex2f(0.5, -0.6);
    glEnd();
    glBegin(GL_LINE_LOOP);
        glVertex2f(0.4, -0.7);
        glVertex2f(0.6, -0.5);
        glVertex2f(0.25, -0.5);
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
