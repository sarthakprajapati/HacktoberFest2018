#include<iostream>
#include<GL/glut.h>
#include <cmath>

using namespace std;

float x,y,lle=0;
int pt=0;

void symDDA (float x1, float y1, float x2, float y2){
    float epsilon;
    float delx=(x2-x1);
    float dely=(y2-y1);
    float j;
    if(abs(delx)>=abs(dely))
    {
        j=abs(delx);
    }
    else
        j=abs(dely);


    float n=floor(log2(j))+1;
    epsilon=1/pow(2,n);
    lle=1/epsilon;

    float xinc=epsilon*delx;
    float yinc=epsilon*dely;

    glBegin(GL_POINTS);
    glColor3f(1.0, 0.0, 1.0);
    for(int k=0;k<lle;k++){
        x1=x1+xinc;
        y1=y1+yinc;
        //cout<<"\n"<<round(x1)<<"\t"<<round(y1);
        x=round(x1);
        y=round(y1);
        glVertex2d(x,y);
    }
    glEnd();
}
int xst1,xst2,yst1,yst2;

void mymouse(int button,int state, int a, int b){

    if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN&&pt==0){
            xst1=a-480/2;
            yst1=640/2-b;
            cout<<"\nX-Dir\tY-Dir";
            cout<<"\n"<<xst1<<"\t"<<yst1;
            pt=1;
        }

    else if(button==GLUT_LEFT_BUTTON && state==GLUT_DOWN&pt==1){
    xst2=a-480/2;
    yst2=640/2-b;
    cout<<"\n"<<xst2<<"\t"<<yst2;
    symDDA(float(xst1),float(yst1),float(xst2),float(yst2));
    pt=0;
    }
glFlush();

}
void Init(){
    glClearColor(0.0,0.0,0.0,0);
    gluOrtho2D(-480/2, 480/2, -640/2, 640/2);
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(0,640/2);
    glVertex2f(0,-640/2);
    glEnd();
    glBegin(GL_LINES);
    glVertex2f(-480/2,0);
    glVertex2f(480/2,0);
    glEnd();
}
void display(){

    glutSwapBuffers();

    }

int main(int argc ,char **argv){

glutInit(&argc,argv);
glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);
glutInitWindowPosition(500,50);
glutInitWindowSize(480,640);
glutCreateWindow("Symmetric DDA - Line");
glutDisplayFunc(display);
glutMouseFunc(mymouse);
Init();
glutMainLoop();
return 0;

}
