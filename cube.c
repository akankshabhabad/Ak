

#include <GL/glut.h>  
 

void init(void)
{
glClearColor(0.0,0.0,0.0,1.0);
glMatrixMode(GL_PROJECTION);
glLoadIdentity();
gluOrtho2D(-100,100,-100,100);
}
 
void display() {
   glClear(GL_COLOR_BUFFER_BIT);   
   
glPointSize(4.0f);	
 glBegin(GL_LINES);           
      glColor3f(0.0f, 1.0f, 0.0f);     

	
      glVertex2f(-100.0f, 0.0f);
 glVertex2f(100.0f, 0.0f);

glVertex2f(0.0f, -100.0f);
 glVertex2f(0.0f, 100.0f);
   glEnd();

glPointSize(4.0f);
glBegin(GL_LINE_LOOP);           
      glColor3f(1.0f, 0.0f, 5.0f);     
    glVertex2f(10.0f, 10.0f);
   glVertex2f(50.0f, 10.0f);
    glVertex2f(50.0f, 50.0f);
    glVertex2f(10.0f, 50.0f);
glEnd();


glBegin(GL_LINE_LOOP);  
 glVertex2f(25.0f, 25.0f);
   glVertex2f(65.0f, 25.0f);
    glVertex2f(65.0f, 65.0f);
    glVertex2f(25.0f, 65.0f);
     
   glEnd();

glBegin(GL_LINES);  
glVertex2f(10.0f, 10.0f);
 glVertex2f(25.0f, 25.0f);
glVertex2f(50.0f, 10.0f);
   glVertex2f(65.0f, 25.0f);
glVertex2f(50.0f, 50.0f);
    glVertex2f(65.0f, 65.0f);
 glVertex2f(10.0f, 50.0f);
    glVertex2f(25.0f, 65.0f);
     
   glEnd();

   glFlush();  
}
 

int main(int argc, char** argv) {
  glutInit(&argc, argv);
glutInitDisplayMode (GLUT_SINGLE | GLUT_RGB);
glutInitWindowSize (500, 500);
glutInitWindowPosition (50, 50);
glutCreateWindow ("Cube");
init();
glutDisplayFunc(display);
glutMainLoop();               
   return 0;
}
