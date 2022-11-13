#include <GL/gl.h>
#include <GL/glu.h>
#include <GL/glut.h>
#include <stdlib.h>
#include <stdio.h>
#include <windows.h>
#include <math.h>
#define PI 3.1416

bool flagScale=false;
double boat1_move=0;
double boat2_move=0;
double sun_move=0;
double cloud1_move=0;
double cloud2_move=0;
double bird1_move=0;
double bird2_move=0;

void drawFilledCircle(GLfloat x, GLfloat y, GLfloat radius){
	int i;
	int triangleAmount = 150;
	GLfloat twicePi = 2.0f * PI;


	glBegin(GL_TRIANGLE_FAN);
		glVertex2f(x, y);
		for(i = 0; i <= triangleAmount;i++) {
			glVertex2f(
		            x + (radius * cos(i *  twicePi / triangleAmount)),
			    y + (radius * sin(i * twicePi / triangleAmount))
			);
		}
	glEnd();
}

void sun()
{
    glPushMatrix();
    glColor3f(1.0,0.5,0.0);
    drawFilledCircle(-5.0,5.2,0.5);
    glPopMatrix();
}

void cloud1()
{
    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(-3.0,5.7,0.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(-2.0,5.7,0.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(-2.5,6.2,0.4);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(-2.5,5.2,0.4);
    glPopMatrix();
}

void cloud2()
{
    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(4.0,5.7,0.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(5.0,5.7,0.5);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(4.5,6.2,0.4);
    glPopMatrix();

    glPushMatrix();
    glColor3f(1,1,1);
    drawFilledCircle(4.5,5.2,0.4);
    glPopMatrix();
}


void boat1()
{
    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.1,0.0);
    glVertex2f(4.0,2.0);
    glVertex2f(4.2,1.8);
    glVertex2f(4.8,1.8);
    glVertex2f(5.0,2.0);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.0);
    glVertex2f(4.3,2.2);
    glVertex2f(4.3,2.0);
    glVertex2f(4.7,2.0);
    glVertex2f(4.7,2.2);
glEnd();
glPopMatrix();
}

void boat2()
{
    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.1,0.0);
    glVertex2f(1.8,-2.2);
    glVertex2f(2.0,-2.4);
    glVertex2f(2.6,-2.4);
    glVertex2f(2.8,-2.2);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.0);
    glVertex2f(2.1,-2.0);
    glVertex2f(2.1,-2.2);
    glVertex2f(2.5,-2.2);
    glVertex2f(2.5,-2.0);
glEnd();
glPopMatrix();
}

void bird1()
{
    glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.9);
    glVertex2f(0.0,6.0);
    glVertex2f(0.2,6.0);
    glVertex2f(0.1,6.1);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.9);
    glVertex2f(0.2,6.0);
    glVertex2f(0.4,6.0);
    glVertex2f(0.3,5.9);
glEnd();
glPopMatrix();
}
void bird2()
{
    glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.9);
    glVertex2f(0.7,6.0);
    glVertex2f(0.9,6.0);
    glVertex2f(0.8,6.1);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.8,0.9);
    glVertex2f(0.9,6.0);
    glVertex2f(1.1,6.0);
    glVertex2f(1.0,5.9);
glEnd();
glPopMatrix();
}


void pahar()
{
    glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.6,0.0);
    glVertex2f(-6.0,3.0);
    glVertex2f(-4.0,3.0);
    glVertex2f(-5.0,4.0);
glEnd();
glPopMatrix();

}
void tree_triangle()
{
    glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.4,0.0);
    glVertex2f(-0.4,2.6);
    glVertex2f(0.8,2.6);
    glVertex2f(0.2,3.6);
glEnd();
glPopMatrix();
}
void kinar()
{
    glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.4,1.0,0.4);
    glVertex2f(1.0,1.6);
    glVertex2f(1.5,1.3);
    glVertex2f(1.0,1.1);
glEnd();
glPopMatrix();
}

void boat()
{
    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.1,0.0);
    glVertex2f(4.0,2.0);
    glVertex2f(4.2,1.8);
    glVertex2f(4.8,1.8);
    glVertex2f(5.0,2.0);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.8,0.8,0.0);
    glVertex2f(4.3,2.2);
    glVertex2f(4.3,2.0);
    glVertex2f(4.7,2.0);
    glVertex2f(4.7,2.2);
glEnd();
glPopMatrix();
}
void ghash()
{
    glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.7,0.0);
    glVertex2f(0.0,-4.5);
    glVertex2f(0.4,-4.5);
    glVertex2f(0.2,-4.3);
glEnd();
glPopMatrix();
}

void rcloud()
{
    glPushMatrix();
    glBegin(GL_POLYGON);
glColor3f(0,128,0);
    glVertex2f(-16,8);
glColor3f(0,204,255);
    glVertex2f(-14.5,9);
glColor3f(204,153,255);
    glVertex2f(-13,9.2);
    glVertex2f(-11.2,8);
    glEnd();
glPopMatrix();
}


void display(void)
{
 glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);

    glMatrixMode( GL_PROJECTION );
    glLoadIdentity();
    gluOrtho2D(-10,10,-10,10);

    glMatrixMode( GL_MODELVIEW );
    glLoadIdentity();
    //SUN
    glPushMatrix();
    glTranslatef(sun_move,0,0);
    sun();
    glPopMatrix();

    //Cloud
    glPushMatrix();
    glTranslatef(cloud1_move,0,0);
    cloud1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(cloud2_move,0,0);
    cloud2();
    glPopMatrix();

    glPushMatrix();
    glTranslatef(bird1_move,0,0);
    bird1();
    glPopMatrix();
    glPushMatrix();
    glTranslatef(bird2_move,0,0);
    bird2();
    glPopMatrix();
    //Pahar
pahar();
glPushMatrix();
glTranslatef(1,0,0);
pahar();
glPopMatrix();

glPushMatrix();
glTranslatef(3,0,0);
pahar();
glPopMatrix();

glPushMatrix();
glTranslatef(7,0,0);
pahar();
glPopMatrix();
glPushMatrix();
glTranslatef(8.7,0,0);
pahar();
glPopMatrix();
glPushMatrix();
glTranslatef(9.5,0,0);
pahar();
glPopMatrix();

//Ghor
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-3.5,3.0);
    glVertex2f(-3.0,2.5);
    glVertex2f(-1.0,2.5);
    glVertex2f(-1.5,3.0);
glEnd();
glPopMatrix();
//Window
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-3.7,1.7);
    glVertex2f(-3.7,2.1);
    glVertex2f(-3.4,2.1);
    glVertex2f(-3.4,1.7);
glEnd();
glPopMatrix();
//Door
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-2.2,1.9);
    glVertex2f(-2.2,1.0);
    glVertex2f(-1.8,1.0);
    glVertex2f(-1.8,1.9);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.0,0.0,0.2);
    glVertex2f(-3.0,2.5);
    glVertex2f(-3.0,1.0);
    glVertex2f(-1.0,1.0);
    glVertex2f(-1.0,2.5);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.0,0.3,0.6);
    glVertex2f(-4.0,2.5);
    glVertex2f(-4.0,1.0);
    glVertex2f(-3.0,1.0);
    glVertex2f(-3.0,2.5);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.6,0.6,0.0);
    glVertex2f(-4.0,2.5);
    glVertex2f(-3.0,2.5);
    glVertex2f(-3.5,3.0);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-3.7,1.7);
    glVertex2f(-3.7,2.1);
    glVertex2f(-3.4,2.1);
    glVertex2f(-3.4,1.7);
glEnd();
glPopMatrix();

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.0,1.0,1.0);
    glVertex2f(-4.2,1.0);
    glVertex2f(-4.2,0.8);
    glVertex2f(-0.8,0.8);
    glVertex2f(-0.8,1.0);
glEnd();
glPopMatrix();



//Khor er pala
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-5.5,2.0);
    glVertex2f(-5.5,1.0);
    glVertex2f(-5.0,1.0);
    glVertex2f(-5.0,2.0);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(1.0,1.0,0.0);
    glVertex2f(-5.5,2.0);
    glVertex2f(-5.0,2.0);
    glVertex2f(-5.25,2.5);
glEnd();
glPopMatrix();

//TREE
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.2,0.0);
    glVertex2f(0.1,2.6);
    glVertex2f(0.1,1.6);
    glVertex2f(0.3,1.6);
    glVertex2f(0.3,2.6);
glEnd();
glPopMatrix();
tree_triangle();
glPushMatrix();
glTranslatef(0,0.5,0);
tree_triangle();
glPopMatrix();
//River Siri

glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.0,0.4,0.0);
    glVertex2f(1.0,-1.4);
    glVertex2f(1.0,-2.2);
    glVertex2f(1.1,-2.2);
    glVertex2f(1.1,-1.4);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.1,0.1,0.1);
    glVertex2f(1.1,-1.5);
    glVertex2f(1.1,-2.1);
    glVertex2f(1.175,-2.1);
    glVertex2f(1.175,-1.5);
glEnd();
glPopMatrix();


//TREE
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.0,0.8,0.0);
    glVertex2f(-5.6,-0.7);
    glVertex2f(-5.0,-0.7);
    glVertex2f(-5.3,0.0);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_TRIANGLES);
    glColor3f(0.,0.8,0.0);
    glVertex2f(-5.6,-0.9);
    glVertex2f(-5.0,-0.9);
    glVertex2f(-5.3,0.3);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.2,0.0);
    glVertex2f(-5.4,-0.9);
    glVertex2f(-5.4,-1.7);
    glVertex2f(-5.2,-1.7);
    glVertex2f(-5.2,-0.9);
glEnd();
glPopMatrix();


    glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.2,0.6,1.0);
    glVertex2f(-6.0,7.0);
    glVertex2f(-6.0,3.0);
    glVertex2f(6.0,3.0);
    glVertex2f(6.0,7.0);
glEnd();
glPopMatrix();
    rcloud();

    glPushMatrix();
    glTranslatef(3,3,0);
    rcloud();
glPopMatrix();
glPushMatrix();
    glTranslatef(4,4,0);
    rcloud();
glPopMatrix();

glPushMatrix();
    glTranslatef(8,5,0);
    rcloud();
glPopMatrix();


glPushMatrix();
 glTranslatef(boat1_move,0,0);
   boat1();
glPopMatrix();

 glPushMatrix();
 glTranslatef(boat2_move,0,0);
   boat2();
glPopMatrix();

//Road
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,0.8,0.6);
    glVertex2f(-2.3,0.8);
    glVertex2f(1.0,-2.0);
    glVertex2f(1.0,-1.4);
    glVertex2f(-1.7,0.8);
glEnd();
glPopMatrix();
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(1.0,0.8,0.6);
    glVertex2f(-6.0,-4.4);
    glVertex2f(-6.0,-5.0);
    glVertex2f(1.0,-2.3);
    glVertex2f(1.0,-1.7);
glEnd();
glPopMatrix();
//kinar
kinar();
glPushMatrix();
glTranslatef(-1,-3,0);
glScalef(2,2,1);
kinar();
glPopMatrix();

glPushMatrix();
glTranslatef(-1,-5.5,0);
glScalef(2,2,1);
kinar();
glPopMatrix();

//Ghash
ghash();
//River
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,0.7,1.0);
    glVertex2f(1.0,3.0);
    glVertex2f(1.0,-5.0);
    glVertex2f(6.0,-5.0);
    glVertex2f(6.0,3.0);
glEnd();
glPopMatrix();

//Ghash
ghash();
glPushMatrix();
glTranslatef(-1.0,0,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-2.0,0,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-3.0,0,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-4.0,0,0);
ghash();
glPopMatrix();

glPushMatrix();
glTranslatef(-1.0,0.5,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-2.0,0.5,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-3.0,0.5,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(0,0.5,0);
ghash();
glPopMatrix();

glPushMatrix();
glTranslatef(0,1.0,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-1.0,1.0,0);
ghash();
glPopMatrix();
glPushMatrix();
glTranslatef(-2,1.0,0);
ghash();
glPopMatrix();

glPushMatrix();
glTranslatef(0,1.5,0);
ghash();
glPopMatrix();

//Total Shape
glPushMatrix();
glBegin(GL_QUADS);
    glColor3f(0.4,1.0,0.4);
    glVertex2f(-6.0,7.0);
    glVertex2f(-6.0,-5.0);
    glVertex2f(6.0,-5.0);
    glVertex2f(6.0,7.0);
glEnd();
glPopMatrix();

    glFlush();
    glutSwapBuffers();
}
void myKeyboardFunc( unsigned char key, int x, int y )
{
    switch ( key )
    {

    case 'N':
        flagScale=true;
        break;
    case 'n':
        flagScale=false;
        break;



    case 16:
        exit(1);
    }
    glutPostRedisplay();
}

void animate()
{
	if (flagScale == true)
	{
		boat1_move-= 0.001;
		if(boat1_move < -3)
			boat1_move = 1;
	}
	if (flagScale == false)
	{
		boat1_move = 0;

	}

	if (flagScale == true)
	{
		boat2_move+= 0.001;
		if(boat2_move >3.3)
			boat2_move = -0.8;
	}
	if (flagScale == false)
	{
		boat2_move = 0;

	}

	if (flagScale == true)
    {
        sun_move -= 0.001;
        if(sun_move < -0.5)
            sun_move = 10.5;
    }
    if(flagScale == false)
    {
        sun_move=0;
    }

    if (flagScale == true)
	{
		cloud1_move-= 0.002;
		if(cloud1_move < -2.5)
			cloud1_move = 7.5;
	}
	if (flagScale == false)
	{
		cloud1_move = 0;
	}
	if (flagScale == true)
	{
		cloud2_move-= 0.002;
		if(cloud2_move < -9.5)
			cloud2_move = 0.5;
	}
	if (flagScale == false)
	{
		cloud2_move = 0;
	}

	if (flagScale == true)
	{
		bird1_move-= 0.002;
		if(bird1_move < -6.0)
			bird1_move = 5.5;
	}
	if (flagScale == false)
	{
		bird1_move = 0;
	}
	if (flagScale == true)
	{
		bird2_move-= 0.002;
		if(bird2_move < -5.5)
			bird2_move = 5.0;
	}
	if (flagScale == false)
	{
		bird2_move = 0;
	}


	glutPostRedisplay();
}


void init()
{
    glClearColor (0.0,0.0,1.0,0.0 );

}


int main (int argc, char **argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);

    glutInitWindowPosition(100,100);
    glutInitWindowSize(500,500);
    glutCreateWindow("Village Animation");

    glShadeModel( GL_SMOOTH );
    glEnable( GL_DEPTH_TEST );
glutKeyboardFunc(myKeyboardFunc);
    glutIdleFunc(animate);
    glutDisplayFunc(display);

    //init();

    glutMainLoop();

    return 0;
}



