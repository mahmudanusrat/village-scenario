
#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include<math.h>
# define PI 3.14159265358979323846

int posx = 0;
void init(void)
{
	glClearColor(1.0, 1.0, 1.0, 0.0);

	glMatrixMode(GL_PROJECTION);
	gluOrtho2D(0.0, 120.0, 0.0, 120.0);

}


void circle(float a, float b, float r)
{

    int i;
    int triangleAmount = 100;
    GLfloat twicePi = 2.0f * PI;
    GLfloat x=a;
    GLfloat y=b;
    GLfloat radius =r;
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void sun()
{
    glColor3f(0.92, 0.81, 0.05);
    circle(1,1,1);

}
///cloud1
void cloud1()
{
    glColor3f(1,1,1);
    circle(.8,.8,.8);
    circle(2,1,.8);
    circle(1.9,1.5,.8);
}
///tree1
void tree1()
{
    glColor3f(0.13, 0.47, 0.29);
    circle(.8,.8,.8);
    circle(2,1,.8);
    circle(1.9,1.5,.8);
}



void line_drawing(float a, float b, float c, float d)
{

	glBegin(GL_LINES);

		glVertex2f(a, b);
		glVertex2f(c, d);


	glEnd();
}

void quads(float a, float b, float c, float d, float e, float f, float g, float h){

    glBegin(GL_QUADS);

	//Trapezoid
	glVertex2f(a, b);
	glVertex2f(c,d);
	glVertex2f(e, f);
	glVertex2f(g, h);

	glEnd();


}

void triangle(float a, float b, float c, float d, float e, float f){
   glBegin(GL_TRIANGLES);
   //Triangle
	glVertex2f(a, b);
	glVertex2f(c, d);
	glVertex2f(e, f);

	glEnd();//End triangle coordinates

}

void pentagon(int a, int b, int c, int d, int e, int f, int g, int h, int i, int j, int k, int l, int m, int n, int o, int p, int q, int r)
{
    glBegin(GL_TRIANGLES); //Begin triangle coordinates

	//Pentagon
	glVertex2i(a, b);
	glVertex2i(c, d);
	glVertex2i(e, f);

	glVertex2i(g, h);
	glVertex2i(i, j);
	glVertex2i(k, l);

	glVertex2i(m, n);
	glVertex2i(o, p);
	glVertex2i(q, r);

	glEnd();//End triangle coordinates
}



///river
void river()
{
    glColor3f(0.03, 0.57, 0.81);
    glBegin(GL_POLYGON);

    glVertex3i(0, 0, 0);
    glVertex3i(0, 70, 0);
    glVertex3i(0, 70, 0);
    glVertex3i(55, 0, 0);


glEnd();



}
void update(int value)
{

    if(posx>=30)
    {
        posx=0;
    }
    else
    {
        posx++;
    }
    glutPostRedisplay();
    glutTimerFunc(300, update, 0);
}
void boat()
{
    glColor3f(0,0,0);
    glBegin(GL_POLYGON);

    glVertex3i(0,10,0);
    glVertex3i(5,5,0);
    glVertex3i(15,5,0);
    glVertex3i(20,10,0);
    glEnd();

    glColor3f(0.89, 0.68, 0.04);
    glBegin(GL_POLYGON);

    glVertex3i(5,14,0);
    glVertex3i(5,10,0);
    glVertex3i(18,10,0);
    glVertex3i(18,14,0);
    glEnd();

    glColor3f(0.98, 0.24, 0.02 );
    glBegin(GL_TRIANGLES);

    glVertex3i(2,10,0);
    glVertex3i(5,10,0);
    glVertex3i(5,14,0);
    glEnd();
}

void sky()
{
   glColor3f(0.53, 0.9, 0.99);
   glBegin(GL_POLYGON);

    glVertex3i(0,70 , 0);
    glVertex3i(0,120 , 0);
    glVertex3i(120, 120, 0);
    glVertex3i(120,70, 0);

    glEnd();
}


void pahar()
{

    glColor3f(0.11, 0.4, 0.14);
    glBegin(GL_POLYGON);

    glVertex3i(120,70 , 0);
    glVertex3i(110, 80, 0);
    glVertex3i(100,70, 0);

    glEnd();


    glColor3f(0.11, 0.4, 0.14);
    glBegin(GL_POLYGON);

    glVertex3i(100,70 , 0);
    glVertex3i(90, 80, 0);
    glVertex3i(80,70 , 0);

    glEnd();

    glColor3f(0.11, 0.4, 0.14);
    glBegin(GL_POLYGON);

    glVertex3i(80,70 , 0);
    glVertex3i(60, 80, 0);
    glVertex3i(50,70 , 0);

    glEnd();

    glColor3f(0.11, 0.4, 0.14);
    glBegin(GL_POLYGON);

    glVertex3i(50,70 , 0);
    glVertex3i(40, 80, 0);
    glVertex3i(20,70 , 0);

    glEnd();

    glColor3f(0.11, 0.4, 0.14);
    glBegin(GL_POLYGON);

    glVertex3i(20,70 , 0);
    glVertex3i(10, 80, 0);
    glVertex3i(00,70 , 0);

    glEnd();
}
void tree()
{
    glColor3f(0.6, 0.2, 0.1);

    glBegin(GL_POLYGON);

    glVertex3i(40, 40, 0);
    glVertex3i(44, 40, 0);
    glVertex3i(44, 80, 0);
    glVertex3i(40, 80, 0);

    glEnd();

    glPushMatrix();
    glColor3f(0.13, 0.43, 0.2);
    glTranslatef(40,90,0);
    glScalef(8,9.5,0);
    glPopMatrix();

glEnd();

   glPushMatrix();
    glTranslatef(31,77,0);
    glScalef(7,7.5,0);
    tree1();
    glPopMatrix();
     glPushMatrix();
    glTranslatef(32,84,0);
    glScalef(7,7.5,0);
    tree1();
    glPopMatrix();



}

void drawShapes(void)
{


	glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.1,0.9,0.1);



   quads(0.0,0.0,0.0,70.0,120,70.0,120,0.0);


   glColor3f(0.0f, 1.0f, 1.0f);


    ///Rasta

    glColor3f(0.85, 0.47, 0.17);
    glBegin(GL_POLYGON);

    glVertex3i(78, 0, 0);
    glVertex3i(71, 30, 0);
    glVertex3i(84, 30, 0);
    glVertex3i(92, 0, 0);


glEnd();




    river();

    sky();

    //sun
    glPushMatrix();
    glTranslatef(30,100,0);
    glScalef(7,7.5,0);
    sun();
    glPopMatrix();


    ///cloud
    glPushMatrix();
    glTranslatef(10,100,0);
    glScalef(7,7.5,0);
    cloud1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(50,100,0);
    glScalef(7,7.5,0);
    cloud1();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(90,90,0);
    glScalef(8,8.5,0);
    cloud1();
    glPopMatrix();


    pahar();
    tree();
    ///ghor
   //tin
    glColor3f(0.7,0.0,0.1);
    triangle(53.0,60.0,80.0,75.0,102,60.0);
    glColor3f(0.5411764705882353, 0.0, 0.5411764705882353);

    //boundary
    glColor3f(1.0f, 1.89f, 0.89f);
    glColor3f(1.0,0.8,0.6);
    quads(55.0,30.0,55.0,60.0,100.0,60.0,100.0,30.0);


    //dorja
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.47, 0.7, 0.99);

    glVertex2f(72,58);
    glVertex2f(72,30);
    glVertex2f(83,30);
    glVertex2f(83,58);

    glEnd();
    glPopMatrix();

    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.0);

    glVertex2f(77,58);
    glVertex2f(77,30);
    glVertex2f(77.5,30);
    glVertex2f(77.5,58);

    glEnd();
    glPopMatrix();

 //left janala
    glPushMatrix();
    glBegin(GL_QUADS);
    glColor3f(0.47, 0.7, 0.99);

    glVertex2f(58,40);
    glVertex2f(58,50);
    glVertex2f(68,50);
    glVertex2f(68,40);

    glEnd();
    glPopMatrix();

//right janala
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.47, 0.7, 0.99);

    glVertex2f(88,40);
    glVertex2f(88,50);
    glVertex2f(98,50);
    glVertex2f(98,40);

    glEnd();

    glPopMatrix();
    glPushMatrix();
    glBegin(GL_POLYGON);
    glColor3f(0.34, 0.22, 0.12);

    glVertex2f(53,30);
    glVertex2f(53,28);
    glVertex2f(102,30);
    glVertex2f(102,28);

    glEnd();
    glPopMatrix();

   // pentagon();

        glPushMatrix();
        glTranslatef(posx,-1,-1);
        boat();
        glPopMatrix();

	glFlush();	// Process all OpenGL routines
}



int main(int argc, char* argv[])
{
	glutInit(&argc, argv);						     // Initalise GLUT
	glutInitDisplayMode(GLUT_SINGLE|GLUT_RGB);	     // Set display mode

	glutInitWindowPosition(50, 100);				// Set window position
	glutInitWindowSize(600, 600);					// Set window size
	glutCreateWindow("Village View");	// Create display window

	init();							// Execute initialisation procedure
	glutDisplayFunc(drawShapes);
	glutTimerFunc(0, update, 0);
	glutMainLoop();					// Display everything and wait

	return 0;
}
