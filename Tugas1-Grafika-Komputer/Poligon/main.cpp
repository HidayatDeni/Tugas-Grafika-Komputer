#include <gl/glut.h>


void userdraw(){
    static int tick=0;



    glBegin(GL_LINE_LOOP);
    glColor3f(0.0f, 0.5f, 1.0f);
    glVertex2i(13,15);
    glColor3f(0.9f, 0.5f, 0.0f);
    glVertex2i(7,11);
    glColor3f(0.3f, 0.5f, 0.4f);
    glVertex2i(13,7);
    glColor3f(0.8f, 1.0f, 1.0f);
    glVertex2i(19,11);
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
