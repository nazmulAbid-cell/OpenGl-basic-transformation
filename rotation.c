#include<windows.h>
#include<GL/glut.h>
#include<math.h>
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
 GLfloat x1,x2,y1,y2,x3,y3, t= 0.785;
    x1=0.2;
    y1=0.1;
    x2=0.6;
    y2=0.1;
    x3=0.2;
    y3=0.4;
    glColor3f (1.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
    glEnd();
    glFlush();
    x1=x1*cos(t)-y1*sin(t);
    y1=y1*cos(t)+x1*sin(t);
    x2=x2*cos(t)-y2*sin(t);
    y2=y2*cos(t)+x2*sin(t);
    x3=x3*cos(t)-y3*sin(t);
    y3=y3*cos(t)+x3*sin(t);

    glColor3f (0.0, 0.0, 1.0);
    glBegin(GL_POLYGON);
    glVertex2f(x1,y1);
    glVertex2f(x2,y2);
    glVertex2f(x3,y3);
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

















