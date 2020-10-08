#include <iostream>
#include <cmath>
#include <cstdio>
#include <cstdlib>

#if __APPLE__
#include <GLUT/glut.h>
#else
#include <GL/glut.h>
#endif

using namespace std;

bool leftDown = false, rightDown = false;
int lastPos[2];
float cameraPos[4] = {0, 0, 2,1}; // TODO: Your code here! setup a proper camera position. It should be 4 dimentions homogeneous coordinate, first three elements represent position and 4th element should be 1.
int windowWidth = 640, windowHeight = 480;
double yRot = 0;
int curProblem = 3; // TODO: change this number to try different examples.

float specular[] = { 1.0, 1.0, 1.0, 1.0 };
float shininess[] = { 50.0 };

void problem1() {
	// TODO: Your code here!
	glMatrixMode(GL_MODELVIEW);

	glPushMatrix();
	//sixth row, far right
	glTranslatef(.90, -.75, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//sixth row, third from right
	glTranslatef(.2, -.75, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//sixth row, third from left
	glTranslatef(-.2, -.75, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//sixth row, second from left
	glTranslatef(-.55, -.75, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//sixth row, far left
	glTranslatef(-.9, -.75, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//sixth row, second from right
	glTranslatef(.55, -.75, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//fifth row, far right
	glTranslatef(.70, -.5, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//fifth row, far left
	glTranslatef(-.70, -.5, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//fifth row, second from right
	glTranslatef(.35, -.5, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//fifth row, second from left
	glTranslatef(-.35, -.5, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//left fourth row middle
	glTranslatef(-.20, -.25, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//right fourth row
	glTranslatef(.20, -.25, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//far right fourth row
	glTranslatef(.55, -.25, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//far left fourth row
	glTranslatef(-.55, -.25, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//middle
	glTranslatef(0, 0, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//far right third row
	glTranslatef(.35, 0, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//far left third row
	glTranslatef(-.35, 0, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//right 2nd row middle
	glTranslatef(.15, .25, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//middle bottom
	glTranslatef(0, -.5, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//top middle
	glTranslatef(0, .5, .5);
	glutSolidTeapot(.075);
	glPopMatrix();

	glPushMatrix();
	//left 2nd row
	glTranslatef(-.15, .25, .5);
	glutSolidTeapot(.075);
	glPopMatrix();


	glFlush();

}

void problem2() {
	// TODO: Your code here!
	glPushMatrix();
	//far left step
	glTranslatef(-.58, -.01, .5);
	glutSolidCube(.08);
	glPopMatrix();

	glPushMatrix();
	//second step from left
	glTranslatef(-.5, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//third step from left
	glTranslatef(-.4, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourth step from left
	glTranslatef(-.4, .045, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourth step from left
	glTranslatef(-.3, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourth step from left
	glTranslatef(-.3, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fifth step from left
	glTranslatef(-.2, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fifth step from left
	glTranslatef(-.2, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fifth step from left
	glTranslatef(-.2, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//sixth step from left
	glTranslatef(-.1, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//sixth step from left
	glTranslatef(-.1, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//sixth step from left
	glTranslatef(-.1, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//sixth step from left
	glTranslatef(-.1, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//seventh step from left
	glTranslatef(0, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//seventh step from left
	glTranslatef(0, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//seventh step from left
	glTranslatef(0, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//seventh step from left
	glTranslatef(0, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//seventh step from left
	glTranslatef(0, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.1, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.1, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.1, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.1, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.1, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.1, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//ninth step from left
	glTranslatef(0.2, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//ninth step from left
	glTranslatef(0.2, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eighth step from left
	glTranslatef(0.2, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//ninth step from left
	glTranslatef(0.2, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//ninth step from left
	glTranslatef(0.2, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//ninth step from left
	glTranslatef(0.2, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//ninth step from left
	glTranslatef(0.2, .225, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .225, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//tenth step from left
	glTranslatef(0.3, .25, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .225, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .25, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//eleventh step from left
	glTranslatef(0.4, .28, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .225, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .25, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .28, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//twelth step from left
	glTranslatef(0.5, .3, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
    //thirteenth step from left
	glTranslatef(0.6, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .225, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .25, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .28, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .3, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//thirteenth step from left
	glTranslatef(0.6, .33, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, 0, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .075, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .1, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .13, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .165, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .19, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .225, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .25, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .28, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .3, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .33, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glPushMatrix();
	//fourteenth step from left
	glTranslatef(0.7, .37, .5);
	glutSolidCube(.1);
	glPopMatrix();

	glFlush();
}

void problem3() {
	// TODO: Your code here! Your own creativity. 

	glPushMatrix();
	//front wheel
	glTranslatef(0, 0, 0);
	glutSolidTorus(.1, .006,8, 8);
	glPopMatrix();

	glPushMatrix();
	//front wheel
	glTranslatef(0, 0, .5);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//back wheel
	glTranslatef(0.4, 0, 0);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//back wheel
	glTranslatef(.4, 0, .5);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//body
	glTranslatef(0.25, .2, .25);
	glutSolidCube(.43);
	glPopMatrix();

	glPushMatrix();
	//hood
	glTranslatef(0, .1, .357);
	glutSolidCube(.215);
	glPopMatrix();

	glPushMatrix();
	//hood
	glTranslatef(0, .1, .15);
	glutSolidCube(.215);
	glPopMatrix();

		glPushMatrix();
	//front wheel
	glTranslatef(-.7, 0, 0);
	glutSolidTorus(.1, .006,8, 8);
	glPopMatrix();

	glPushMatrix();
	//front wheel
	glTranslatef(-.7, 0, .5);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//back wheel
	glTranslatef(-.3, 0, 0);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//back wheel
	glTranslatef(-.3, 0, .5);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//body
	glTranslatef(-.45, .2, .25);
	glutSolidCube(.43);
	glPopMatrix();

	glPushMatrix();
	//hood
	glTranslatef(-.7, .1, .357);
	glutSolidCube(.215);
	glPopMatrix();

	glPushMatrix();
	//hood
	glTranslatef(-.7, .1, .15);
	glutSolidCube(.215);
	glPopMatrix();

	glPushMatrix();
	//front wheel
	glTranslatef(0.7, 0, 0);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//front wheel
	glTranslatef(0.7, 0, .5);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//back wheel
	glTranslatef(1.1, 0, 0);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//back wheel
	glTranslatef(1.1, 0, .5);
	glutSolidTorus(.1, .006, 8, 8);
	glPopMatrix();

	glPushMatrix();
	//body
	glTranslatef(0.95, .2, .25);
	glutSolidCube(.43);
	glPopMatrix();

	glPushMatrix();
	//hood
	glTranslatef(0.7, .1, .357);
	glutSolidCube(.215);
	glPopMatrix();

	glPushMatrix();
	//hood
	glTranslatef(0.7, .1, .15);
	glutSolidCube(.215);
	glPopMatrix();
}


void display() {
	glClearColor(0, 0, 0, 0);
	glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

	glDisable(GL_LIGHTING);
	
	glEnable(GL_DEPTH_TEST);
	glBegin(GL_LINES);
	glColor3f(1, 0, 0); glVertex3f(0, 0, 0); glVertex3f(1, 0, 0); // x axis
	glColor3f(0, 1, 0); glVertex3f(0, 0, 0); glVertex3f(0, 1, 0); // y axis
	glColor3f(0, 0, 1); glVertex3f(0, 0, 0); glVertex3f(0, 0, 1); // z axis
	glEnd(/*GL_LINES*/);

	glEnable(GL_LIGHTING);
	glShadeModel(GL_SMOOTH);
	glMaterialfv(GL_FRONT, GL_SPECULAR, specular);
	glMaterialfv(GL_FRONT, GL_SHININESS, shininess);
	glEnable(GL_LIGHT0);

	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	// TODO: Your code here! Use glViewport() and gluPerspective() to setup projection matrix.
	glViewport(0, 0, windowWidth, windowHeight);
	gluPerspective(60, (float)windowWidth/windowHeight, .1f, 100.0f);

	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	// TODO: Your code here! Use gluLookAt() to setup model-view matrix.
	gluLookAt(0, 0, 2, 0, 0, 0,0,1,0);


	glLightfv(GL_LIGHT0, GL_POSITION, cameraPos);

	glRotatef(yRot, 0, 1, 0);

	if (curProblem == 1) problem1();
	if (curProblem == 2) problem2();
	if (curProblem == 3) problem3();

	glutSwapBuffers();
}

void mouse(int button, int state, int x, int y) {
	if (button == GLUT_LEFT_BUTTON) leftDown = (state == GLUT_DOWN);
	else if (button == GLUT_RIGHT_BUTTON) rightDown = (state == GLUT_DOWN);

	lastPos[0] = x;
	lastPos[1] = y;
}

void mouseMoved(int x, int y) {
	if (leftDown) yRot += (x - lastPos[0]) * .1;
	if (rightDown) {
		for (int i = 0; i < 3; i++)
			cameraPos[i] *= pow(1.1, (y - lastPos[1]) * .1);
	}


	lastPos[0] = x;
	lastPos[1] = y;
	glutPostRedisplay();
}

void keyboard(unsigned char key, int x, int y) {
	// TODO: Your code here! use key to switch between different scene, and set q, Q and Escape key as quit. 
	switch (key)
	{
	case 1:
		curProblem = 1;
		glutPostRedisplay;
		break;
	case 2:
		curProblem = 2;
		glutPostRedisplay();
		break;
	case 3:
		curProblem = 3;
		glutPostRedisplay();
		break;
	case 27:
		exit(1);
	case 'q':
		exit(1);
	case 'Q':
		exit(1);
	}
}

void reshape(int width, int height) {
	windowWidth = width;
	windowHeight = height;
	glutPostRedisplay();
}

int main(int argc, char** argv) {
	glutInit(&argc, argv);
	glutInitDisplayMode(GLUT_DOUBLE | GLUT_RGB | GLUT_DEPTH);
	glutInitWindowSize(windowWidth, windowHeight);
	glutCreateWindow("HW2");

	glutDisplayFunc(display);
	glutMotionFunc(mouseMoved);
	glutMouseFunc(mouse);
	glutReshapeFunc(reshape);
	glutKeyboardFunc(keyboard);

	glutMainLoop();


	return 0;
}