#include<windows.h>
#include<GL/glut.h>
void display()
{
 glClear(GL_COLOR_BUFFER_BIT); ///Clear the color buffer of background
///axis
 glBegin(GL_LINES);
 glColor3f(1.0f,1.0f,1.0f); ///white color
 ///glVertex2f(0.0f,0.0f); /// center
 glVertex2f(-1.0f,0.0f); ///x-axis
 glVertex2f(1.0f,0.0f);
 glVertex2f(0.0f,1.0f);///y-axis
 glVertex2f(0.0f,-1.0f);
 glEnd();
///draw a point
 glPointSize(4.0f);
 ///GLfloat xstart = 0.1f, xend= 0.5, y=0.1f, x, p;
 ///int xa = 100, ya = 100, xb = 400, yb = 400;
 GLfloat px = 0.2f, py= 0.7f, qx=0.1f, qy= 0.3f, p= 0.2;
 glBegin(GL_LINES);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(px,py);
  glVertex2f(qx,qy);
 glEnd();
 glFlush();

 px = px + p;
 py = py + p;
 qx = qx+ p;
 qy = qy + p;

glBegin(GL_LINES);
 glColor3f(1.0f,0.0f,0.0f);
 glVertex2f(px,py);
  glVertex2f(qx,qy);
 glEnd();
 glFlush();


}
int main(int argc, char** argv)
{
 glutInit(&argc, argv); ///Initialize GLUT
 glutInitWindowSize(640,640); /// Set the initial window size with given width and height
 glutInitWindowPosition(80,50); ///Position of the window's initial top-left corner
 glutCreateWindow("Lab 1"); ///Create a window which name will be the given one
 glutInitDisplayMode(GLUT_RGB|GLUT_SINGLE|GLUT_DEPTH); ///shows color,allows for single buffer
//window and allows for depth buffer
 glutDisplayFunc(display); ///Call the named function to display
 glutMainLoop(); ///Enter the event-processing loop
 return 0;
}


