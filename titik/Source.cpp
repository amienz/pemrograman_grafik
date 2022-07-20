#include <windows.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include <glut.h>

void drawLine(int x1,int y1,int x2,int y2) {
glBegin(GL_LINES);
glVertex2i(x1,y1);
glVertex2i(x2,y2);
glEnd();
}

void drawDot(int x,int y) {
glBegin(GL_POINTS);
glVertex2i(x,y);
glEnd();
}

void userdraw() {
static int tick=3;
glColor3f(1,0,0);
drawDot(100,50);
drawDot(100,130);
drawDot(150,130);
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
glutInitWindowSize(640,480);
glutCreateWindow("TITIK"); 
glClearColor(1,0,1,0); 
gluOrtho2D(0.,640.,0.,480.); 
glLineWidth (5.0);//
glutIdleFunc(display);
glutDisplayFunc(display);
glutMainLoop();
return 0;
}