#include <gl/glut.h>


void userdraw(){
    static int tick=0;


glColor3f(1,1,1);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(11,15);
glEnd();

glColor3f(1,1,0);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(12,15);
glEnd();

glColor3f(0,1,1);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(13,15);
glEnd();

glColor3f(1,0.5,0.5);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(14,15);
glEnd();

glColor3f(0.5,0.5,0.7);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(11,14);
glEnd();

glColor3f(0.1,0.6,0.5);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(12,14);
glEnd();

glColor3f(1,0.9,0.5);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(13,14);
glEnd();

glColor3f(1,0.5,0.6);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(11,13);
glEnd();

glColor3f(0.8,0,0.5);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(12,13);
glEnd();

glColor3f(0,1,0.1);
glPointSize(5);
glBegin(GL_POINTS);
glVertex2i(11,12);
glEnd();
}


void display(void){
    glClear(GL_COLOR_BUFFER_BIT);
    userdraw();
    glutSwapBuffers();
}
int main(int argc, char **argv){
    glutInit(&argc,argv);
    glutInitDisplayMode(GLUT_DOUBLE|GLUT_RGB);
    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("E1E120026_DENI HIDAYAT");
    glClearColor(0,0,0,0);
    gluOrtho2D(0.,24.,0.,24.);
    glutIdleFunc(display);
    glutDisplayFunc(display);
    glutMainLoop();
return 0;
}
