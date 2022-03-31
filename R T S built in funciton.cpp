#include<windows.h>
#include<GL/glut.h>
#include<math.h>
void display()
{
  glClear(GL_COLOR_BUFFER_BIT);
 glColor3f(1.0f,1.0f,1.0f); ///white color
 glBegin(GL_LINES);
 glVertex3f(-1.0f,0.0f,0.0f); ///x-axis
 glVertex3f(1.0f,0.0f,0.0f);
 glVertex3f(0.0f,1.0f,0.0f);///y-axis
 glVertex3f(0.0f,-1.0f,0.0f);
 glEnd();
 glFlush();

 glClear(GL_COLOR_BUFFER_BIT);
 glMatrixMode(GL_MODELVIEW);
 glLoadIdentity();


 glColor3f(0.0f,1.0f,0.0f);
 glBegin(GL_TRIANGLES);
  glVertex3f(0.2,-0.2,0.0);
  glVertex3f(0.5,-0.2,0.0);
  glVertex3f(0.25,0.1,0.0);
 glEnd();

 glColor3f(1.0f,0.0f,0.0f);
 glPushMatrix();
  glTranslatef(0.1,0.1,0.0);
  glScalef(1.5,1.5,0.0);
  glRotatef(30,0.0,0.0,1.0);
 glBegin(GL_TRIANGLES);
   glVertex3f(0.2,-0.2,0.0);
   glVertex3f(0.5,-0.2,0.0);
   glVertex3f(0.25,0.1,0.0);
 glEnd();
 glFlush();
 glPopMatrix();
 glutPostRedisplay();


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










