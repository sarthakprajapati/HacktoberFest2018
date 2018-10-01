  #include <GL/glut.h>
  #include <math.h>
  #include<iostream>
  using namespace std;
  float ww = 600, wh = 400;
  float first = 0;
  float xi, yi, xf, yf;

  void axes(){
    //Y-AXIS
    glBegin(GL_LINES);
    glColor3f(0.0, 1.0, 0.0);
    glVertex2f(glutGet(GLUT_WINDOW_WIDTH)/2,0);
    glVertex2f(glutGet(GLUT_WINDOW_WIDTH)/2,glutGet(GLUT_WINDOW_HEIGHT));
    glEnd();

    //X-AXIS
    glBegin(GL_LINES);
    glColor3f(0.0, 0.0, 1.0);
    glVertex2f(0, glutGet(GLUT_WINDOW_HEIGHT)/2);
    glVertex2f(glutGet(GLUT_WINDOW_WIDTH), glutGet(GLUT_WINDOW_HEIGHT)/2);
    glEnd();
}

  void putPixel (float x, float y)
  {
   glColor3f (0.3, 0.2, 0.0); // activate the pixel by setting the point color to white
   glBegin (GL_POINTS);
   glVertex2f (x, y); // set the point
   glEnd ();
   glFlush (); // process all openGL routines as quickly as possible
   }

  void display()
  {
   glClearColor(0.4, 0.7, 0.5, 1.0);
   glColor3f(0.2, 0.3, 0.3);
   glClear(GL_COLOR_BUFFER_BIT);
   //putPixel(x,y);
   axes();
   glFlush();
   glutSwapBuffers();
  }

  void bresenhamAlg (float x0, float y0, float x1, float y1)
  {
  float dx = abs (x1 - x0);
  float dy = abs (y1 - y0);
  float x, y;

  if (dx >= dy){
   float d = 2*dy-dx;
   float ds = dy;
   float dt = (dy-dx);
       if (x0 < x1){
            x = x0;
            y = y0;
        }
       else{
             x = x1;
             y = y1;
             x1 = x0;
             y1 = y0;
        }
        cout<<x-300<<"\t"<<y-200<<endl;
    putPixel (x, y);

   while (x < x1){
       if (d < 0)
        d += ds;
        else {
             if (y < y1) {
              y++;
              d += dt;
             }
             else {
              y--;
              d += dt;
             }
        }
        x++;
        cout<<x-300<<"\t"<<y-200<<endl;
        putPixel (x, y);
       }
       }
    else {
        float d = 2*dx-dy;
        float ds = dx;
        float dt = (dx-dy);
             if (y0 < y1) {
                x = x0;
                y = y0;
            }
             else {
                x = x1;
                y = y1;
                y1 = y0;
                x1 = x0;
             }
             cout<<x-300<<"\t"<<y-200<<endl;
            putPixel (x, y);
        while (y < y1)
        {
              if (d < 0)
                 d += ds;
              else {
                      if (x > x1){
                      x--;
                      d += dt;
                   } else {
                      x++;
                     d += dt;
                   }
              }
             y++;
             cout<<x-300<<"\t"<<y-200<<endl;
              putPixel (x, y);
        }
       }
  }
       void mouse(int btn, int state, int x, int y)
       {
        if(btn==GLUT_LEFT_BUTTON && state == GLUT_DOWN)
        {

        switch((int)first)
        {
        case 0:
         xi = x;
         yi = (wh-y);
         first = 1;
         break;
        case 1:
         xf = x;
         yf = (wh-y);
         bresenhamAlg ( xi, yi, xf, yf);
         first = 0;
         break;
        }
        }
        glFlush();
       }
  void myinit()
  {
     glViewport(0,0,ww,wh);
     glMatrixMode(GL_PROJECTION);
     glLoadIdentity();
     gluOrtho2D(0.0,(GLfloat)ww,0.0,(GLfloat)wh);
     glMatrixMode(GL_MODELVIEW);
  }
  int main(int argc, char** argv)
  {
     glutInit(&argc,argv);
     glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
     glutInitWindowSize(ww,wh);
     glutCreateWindow("Mid-Point Line Algorithm");
     glutDisplayFunc(display);
     myinit();
     glutMouseFunc(mouse);
     glutMainLoop();
     return 0;
 }
