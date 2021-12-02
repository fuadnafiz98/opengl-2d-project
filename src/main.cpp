#ifdef _WIN32
#include<windows.h>
#endif

#include <GL/glut.h>
#include <iostream>
#include <GL/glut.h>
#include <GL/freeglut.h>
#include <math.h>
#include <time.h>
#include <string>
#include <time.h>
#include <sys/timeb.h>
#include <cstring>


bool toggle = false;

// void circle(float radius) {
//   int i = 0;
//   float angle = 0.0;
//   glBegin(GL_POLYGON);
//   for(int i = 0; i < 100; i++) {
//     angle = 2 * 3.1415926 * i / 100;
//     glVertex2f(cos(angle) * radius, sin(angle) * radius);
//   }
//   glEnd();
// }

void text(int x, int y, float r, float g, float b, char *string) {
  glColor3f(r, g, b) ;
  glRasterPos2f(x, y);
  int len, i;
  len = (int)strlen(string);
  for (i = 0; i < len; i++) {
    glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, string[i]);
  }
}


void circle(float cx, float cy, float r) {
  int i = 0;
  float angle = 0.0;
  glBegin(GL_POLYGON);
  for(int i = 0; i < 100; i++) {
    angle = 2 * 3.1415926 * i / 100;
    glVertex2f(cx + cos(angle) * r, cy + sin(angle) * r);
  }
  glEnd();
}

void table() {
    // table leg bottom
    glColor3f(0.5, 0.3, 0.1);
    glBegin(GL_QUADS);
      glVertex2f(245, 1024-940);
      glVertex2f(310, 1024-826);
      glVertex2f(326, 1024-836);
      glVertex2f(260, 1024-940);
      glVertex2f(245, 1024-940);
    glEnd();

    // table leg stick
    glColor3f(0.5, 0.3, 0.1);
    glBegin(GL_QUADS);
      glVertex2f(270, 1024-896);
      glVertex2f(270, 1024-703);
      glVertex2f(290, 1024-703);
      glVertex2f(290, 1024-861);
      glVertex2f(270, 1024-892);
    glEnd();

    //table body
    glColor3f(0.5, 0.3, 0.1);
    glBegin(GL_QUADS);
      glVertex2f(235, 1024-703);
      glVertex2f(235, 1024-670);
      glVertex2f(850, 1024-670);
      glVertex2f(850, 1024-703);
    glEnd();

    // table right bottom
    glColor3f(0.5, 0.3, 0.1);
    glBegin(GL_QUADS);
      glVertex2f(245+520, 1024-940);
      glVertex2f(310+520, 1024-826);
      glVertex2f(326+520, 1024-836);
      glVertex2f(260+520, 1024-940);
      glVertex2f(245+520, 1024-940);
    glEnd();

    // table right stick
    glColor3f(0.5, 0.3, 0.1);
    glBegin(GL_QUADS);
      glVertex2f(270+520, 1024-896);
      glVertex2f(270+520, 1024-703);
      glVertex2f(290+520, 1024-703);
      glVertex2f(290+520, 1024-861);
      glVertex2f(270+520, 1024-892);
    glEnd();
}

void pc1() {
  // body
  glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_QUADS);
    glVertex2f(331, 1024-634);
    glVertex2f(331, 1024-508);
    glVertex2f(545, 1024-508);
    glVertex2f(545, 1024-634);
  glEnd();
  // screen
  glColor3f(1, 1, 1);
  glBegin(GL_QUADS);
    glVertex2f(341, 1024-624);
    glVertex2f(341, 1024-518);
    glVertex2f(535, 1024-518);
    glVertex2f(535, 1024-624);
  glEnd();
  // leg
  glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_QUADS);
    glVertex2f(431, 1024-670);
    glVertex2f(431, 1024-634);
    glVertex2f(445, 1024-634);
    glVertex2f(445, 1024-670);
  glEnd();
  // text
  text(420, 1024-550, 0, 0, 0, "MIST");
  text(410, 1024-580, 0, 0, 0, "CSE-18");
  text(345, 1024-610, 0, 0, 0, "GRAPHICS PROJECT");
}

void pc2() {
  // body
  glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_QUADS);
    glVertex2f(331+226, 1024-634);
    glVertex2f(331+226, 1024-508);
    glVertex2f(545+226, 1024-508);
    glVertex2f(545+226, 1024-634);
  glEnd();
  // screen
  glColor3f(1, 1, 1);
  glBegin(GL_QUADS);
    glVertex2f(341+226, 1024-624);
    glVertex2f(341+226, 1024-518);
    glVertex2f(535+226, 1024-518);
    glVertex2f(535+226, 1024-624);
  glEnd();
  // leg
  glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_QUADS);
    glVertex2f(431+226, 1024-670);
    glVertex2f(431+226, 1024-634);
    glVertex2f(445+226, 1024-634);
    glVertex2f(445+226, 1024-670);
  glEnd();
  // text
  text(400+225, 1024-550, 0, 0, 0, "Project Title");
  text(350+225, 1024-610, 0, 0, 0, "HOME DESK SETUP");
}

void CPU() {
  // dark gray glColor3f(0.5, 0.5, 0.5);
  glColor3f(0.2, 0.2, 0.2);
  glBegin(GL_QUADS);
    glVertex2f(687, 1024-943);
    glVertex2f(687, 1024-757);
    glVertex2f(764, 1024-757);
    glVertex2f(764, 1024-943);
  glEnd();
  // parts
  glColor3f(1, 1, 1);
  glBegin(GL_QUADS);
    glVertex2f(697, 1024-933);
    glVertex2f(697, 1024-850);
    glVertex2f(754, 1024-850);
    glVertex2f(754, 1024-933);
  glEnd();

  glColor3f(1, 1, 1);
  glBegin(GL_QUADS);
    glVertex2f(697, 1024-806);
    glVertex2f(697, 1024-793);
    glVertex2f(754, 1024-793);
    glVertex2f(754, 1024-806);
  glEnd();

  glColor3f(1, 1, 1);
  glBegin(GL_QUADS);
    glVertex2f(697, 1024-784);
    glVertex2f(697, 1024-771);
    glVertex2f(754, 1024-771);
    glVertex2f(754, 1024-784);
  glEnd();

}

void leftSpeaker() {
  glColor3f(0.2, 0.2, 0.2);
  // leg
  glBegin(GL_QUADS);
    glVertex2f(190, 1024-704);
    glVertex2f(190, 1024-618);
    glVertex2f(202, 1024-618);
    glVertex2f(202, 1024-704);
  glEnd();
  // body
  glBegin(GL_QUADS);
    glVertex2f(162, 1024-618);
    glVertex2f(162, 1024-508);
    glVertex2f(230, 1024-508);
    glVertex2f(230, 1024-618);
  glEnd();

  // small part
  glColor3f(0.7, 0.7, 0.7);
  circle(196, 1024-537, 14);
  glColor3f(0.5, 0.7, 0.7);
  circle(196, 1024-537, 8);

  // large part
  glColor3f(0.5, 0.7, 0.7);
  circle(196, 1024-585, 24);
  glColor3f(0.7, 0.7, 0.7);
  circle(196, 1024-585, 20);
  glColor3f(0.5, 0.7, 0.7);
  circle(196, 1024-585, 14);
}

void rightSpeaker() {
  glColor3f(0.2, 0.2, 0.2);
  // leg
  glBegin(GL_QUADS);
    glVertex2f(190+672, 1024-897);
    glVertex2f(190+672, 1024-618);
    glVertex2f(202+672, 1024-618);
    glVertex2f(202+672, 1024-897);
  glEnd();
  // body
  glBegin(GL_QUADS);
    glVertex2f(162+672, 1024-618);
    glVertex2f(162+672, 1024-508);
    glVertex2f(230+672, 1024-508);
    glVertex2f(230+672, 1024-618);
  glEnd();

  // small part
  glColor3f(0.7, 0.7, 0.7);
  circle(196+672, 1024-537, 14);
  glColor3f(0.5, 0.7, 0.7);
  circle(196+672, 1024-537, 8);

  // large part
  glColor3f(0.5, 0.7, 0.7);
  circle(196+672, 1024-585, 24);
  glColor3f(0.7, 0.7, 0.7);
  circle(196+672, 1024-585, 20);
  glColor3f(0.5, 0.7, 0.7);
  circle(196+672, 1024-585, 14);
}

void treePot() {
  // stick 1
  glColor3f(0.420, 0.557, 0.137);
  // glBegin(GL_QUADS);
  //   glVertex2f(72, 1024-622);
  //   glVertex2f(72, 1024-535);
  //   glVertex2f(78, 1024-535);
  //   glVertex2f(78, 1024-622);
  // glEnd();
  // stick 2
  glBegin(GL_QUADS);
    glVertex2f(100, 1024-622);
    glVertex2f(100, 1024-532);
    glVertex2f(110, 1024-532);
    glVertex2f(110, 1024-622);
  glEnd();
  // // stick 3
  // glBegin(GL_QUADS);
  //   glVertex2f(120, 1024-622);
  //   glVertex2f(120, 1024-535);
  //   glVertex2f(126, 1024-535);
  //   glVertex2f(126, 1024-622);
  // glEnd();

  glBegin(GL_QUADS);
    glVertex2f(73+30, 1024-573);
    glVertex2f(36+30, 1024-561);
    glVertex2f(40+30, 1024-555);
    glVertex2f(73+30, 1024-566);
  glEnd();
  glBegin(GL_QUADS);
    glVertex2f(73+30, 1024-563);
    glVertex2f(36+30, 1024-551);
    glVertex2f(40+30, 1024-545);
    glVertex2f(73+30, 1024-556);
  glEnd();
  glBegin(GL_QUADS);
    glVertex2f(73+30, 1024-553);
    glVertex2f(36+30, 1024-541);
    glVertex2f(40+30, 1024-535);
    glVertex2f(73+30, 1024-546);
  glEnd();
  glBegin(GL_QUADS);
    glVertex2f(73+30, 1024-543);
    glVertex2f(36+30, 1024-531);
    glVertex2f(40+30, 1024-525);
    glVertex2f(73+30, 1024-536);
  glEnd();

 glBegin(GL_QUADS);
    glVertex2f(77+30, 1024-571);
    glVertex2f(77+30, 1024-563);
    glVertex2f(103+30, 1024-554);
    glVertex2f(103+30, 1024-561);
  glEnd();
 glBegin(GL_QUADS);
    glVertex2f(77+30, 1024-561);
    glVertex2f(77+30, 1024-553);
    glVertex2f(103+30, 1024-544);
    glVertex2f(106+30, 1024-551);
  glEnd();
 glBegin(GL_QUADS);
    glVertex2f(77+30, 1024-551);
    glVertex2f(77+30, 1024-543);
    glVertex2f(103+30, 1024-534);
    glVertex2f(106+30, 1024-541);
  glEnd();
 glBegin(GL_QUADS);
    glVertex2f(77+30, 1024-541);
    glVertex2f(77+30, 1024-533);
    glVertex2f(103+30, 1024-524);
    glVertex2f(106+30, 1024-531);
  glEnd();



  glColor3f(0.82, 0.56, 0.008);
  // bucket
  glBegin(GL_QUADS);
    glVertex2f(80, 1024-704);
    glVertex2f(60, 1024-618);
    glVertex2f(140, 1024-618);
    glVertex2f(120, 1024-704);
  glEnd();

}

void poster() {
  glColor3f(0.824, 0.706, 0.549);
  // frame
  glBegin(GL_QUADS);
    glVertex2f(260, 1024-545);
    glVertex2f(260, 1024-335);
    glVertex2f(422, 1024-335);
    glVertex2f(422, 1024-545);
  glEnd();

  // picture
  glColor3f(0.255, 0.412, 0.882);
  glBegin(GL_QUADS);
    glVertex2f(280, 1024-525);
    glVertex2f(280, 1024-355);
    glVertex2f(402, 1024-355);
    glVertex2f(402, 1024-525);
  glEnd();
}

void varticalTray() {
  glColor3f(0.545, 0.271, 0.075);
  glBegin(GL_QUADS);
    glVertex2f(508, 1024-404);
    glVertex2f(508, 1024-380);
    glVertex2f(757, 1024-380);
    glVertex2f(757, 1024-404);
  glEnd();

}

void smallTree1() {
  glColor3f(0.627, 0.322, 0.176);
  glBegin(GL_QUADS);
    glVertex2f(530, 1024-380);
    glVertex2f(518, 1024-348);
    glVertex2f(555, 1024-348);
    glVertex2f(545, 1024-380);
  glEnd();
  glColor3f(0.180, 0.545, 0.341);
  for(int i = 10; i < 41; i+= 5) {
    glBegin(GL_TRIANGLES);
      glVertex2f(509+i, 1024-348);
      glVertex2f(512+i, 1024-322);
      glVertex2f(515+i, 1024-348);
    glEnd();
  }
}

void smallTree2() {
  glColor3f(0.627, 0.322, 0.176);
  glBegin(GL_QUADS);
    glVertex2f(530+190, 1024-380);
    glVertex2f(518+190, 1024-348);
    glVertex2f(555+190, 1024-348);
    glVertex2f(545+190, 1024-380);
  glEnd();

  glColor3f(0.180, 0.545, 0.341);
  for(int i = 10; i < 41; i+= 5) {
    glBegin(GL_TRIANGLES);
      glVertex2f(509+190+i, 1024-348);
      glVertex2f(512+190+i, 1024-322);
      glVertex2f(515+190+i, 1024-348);
    glEnd();
  }
}

void camera() {
  // body
  glColor3f(0.412, 0.412, 0.412);
  glBegin(GL_QUADS);
    glVertex2f(585, 1024-380);
    glVertex2f(585, 1024-345);
    glVertex2f(640, 1024-345);
    glVertex2f(640, 1024-380);
  glEnd();

  // upper part
  glColor3f(0.412, 0.412, 0.412);
  glBegin(GL_QUADS);
    glVertex2f(598, 1024-345);
    glVertex2f(602, 1024-329);
    glVertex2f(620, 1024-329);
    glVertex2f(624, 1024-345);
  glEnd();

  // camera big circle
  glColor3f(0.502, 0.502, 0.502);
  circle(610, 1024-363, 13);
  // camera small circle
  glColor3f(0.663, 0.663, 0.663);
  circle(610, 1024-363, 8);

}

void shelf() {
    glColor3f(0.2, 0.2, 0.2);
    glBegin(GL_QUADS);
      glVertex2f(35, 20);
      glVertex2f(35, 320);
      glVertex2f(220, 320);
      glVertex2f(220, 20);
    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_QUADS);
      glVertex2f(55, 220);
      glVertex2f(55, 300);
      glVertex2f(200, 300);
      glVertex2f(200, 220);
    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_QUADS);
      glVertex2f(55, 120);
      glVertex2f(55, 200);
      glVertex2f(200, 200);
      glVertex2f(200, 120);
    glEnd();

    glColor3f(0.3, 0.3, 0.3);
    glBegin(GL_QUADS);
      glVertex2f(55, 40);
      glVertex2f(55, 100);
      glVertex2f(200, 100);
      glVertex2f(200, 40);
    glEnd();
}

void lamp() {
  glColor3f(0, 0, 0);
  glBegin(GL_QUADS);
    glVertex2f(807, 1024-670);
    glVertex2f(807, 1024-400);
    glVertex2f(819, 1024-400);
    glVertex2f(819, 1024-670);
  glEnd();
  glBegin(GL_QUADS);
    glVertex2f(778, 1024-440);
    glVertex2f(807, 1024-404);
    glVertex2f(817, 1024-415);
    glVertex2f(783, 1024-450);
  glEnd();
  if(toggle)
    glColor3f(255, 255, 0);
  else
    glColor3f(0, 0, 0);
  int i = 0;
  float angle = 0.0;
  glBegin(GL_POLYGON);
  for(int i = -10; i < 40; i++) {
    angle = 2 * 3.1415926 * i / 100;
    glVertex2f(755 + cos(angle) * 50, 1024-470 + sin(angle) * 50);
  }
  glEnd();

}

#define PI 3.14159
double second_angle = 0, minute_angle = 0, hour_angle = 0;

void drawLine(GLfloat x, GLfloat y, GLfloat angle) {
	glVertex2f(x, x);
	glVertex2f(y * cos(angle), y * sin(angle));
}

void display_clock(void) {

	GLfloat x, y, angle;
	glColor3f(0.4, 0.4, 0.4);
	glPointSize(2);
	glBegin(GL_POINTS);
	for (angle = 0.0f; angle <= (2.0f * 3.14); angle += 0.01f)
	{
		x = 50.0f * sin(angle);
		y = 50.0f * cos(angle);
		glVertex3f(x, y, 0.0f);
	}
	glClear(GL_COLOR_BUFFER_BIT);
	angle = 0.0f;
	glEnd();
}

//Function to display the hands of the clock
void hands(void) {
  glPushMatrix();
    glTranslatef(800, 1024-200, 1);
    // glClear(GL_COLOR_BUFFER_BIT);
    glColor3f(0.5, 0.5, 0.5);
    glLineWidth(2.0);
    display_clock();

    glColor3f(1.0f, 0.8f, 0.0f);
    glBegin(GL_LINES);
    drawLine(0, 45.0, -second_angle + PI / 2);
    glEnd();

    glColor3f(1.0f, 0.7f, 0.6f);
    glBegin(GL_LINES);
    drawLine(0.0, 35.0, -minute_angle + PI / 2);
    glEnd();

    glColor3f(1.0f, 0.0f, 0.0f);
    glBegin(GL_LINES);
    drawLine(0.0, 30.0, -hour_angle + PI / 2);
    glEnd();
    // glFlush();
    // glutSwapBuffers();
  glPopMatrix();
}

void Draw() {
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.000, 1.000, 0.878);
    glBegin(GL_QUADS);
      glVertex2f(0, 1024-870);
      glVertex2f(0, 1024);
      glVertex2f(1024, 1024);
      glVertex2f(1024, 1024-870);
    glEnd();

    glColor3f(0.439, 0.502, 0.565);
    glBegin(GL_QUADS);
      glVertex2f(0, 0);
      glVertex2f(0, 1024-870);
      glVertex2f(1024, 1024-870);
      glVertex2f(1024, 0);
    glEnd();

    shelf();
    treePot();
    poster();

    table();
    pc1();
    pc2();
    CPU();
    lamp();
    leftSpeaker();
    rightSpeaker();

    varticalTray();
    smallTree1();
    smallTree2();
    camera();
    hands();

	glFlush();
  // glutSwapBuffers();
}

void time_change(int i) {
	struct timeb tb;
	time_t tim = time(0);
	struct tm* local_time;
	local_time = localtime(&tim);
	ftime(&tb);

	second_angle = (double)(local_time->tm_sec + (double)tb.millitm / 1000.0) / 30.0 * PI;
	minute_angle = (double)(local_time->tm_min) / 30.0 * PI + second_angle / 60.0;
	hour_angle = (double)(local_time->tm_hour > 12 ? local_time->tm_hour - 12 : local_time->tm_hour) / 6.0 * PI + minute_angle / 12.0;

	glutPostRedisplay();
	glutTimerFunc(15, time_change, 1);
}

void Initialize()
{
    glClearColor(0.0, 0.0, 0.0, 0.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    // glOrtho(-1, 1.0, -1, 1.0, 1.0, -1.0);
    // set glOrtho at the bottom left corner
    glOrtho(0.0, 1024.0, 0.0, 1024.0, 1.0, -1.0);
}

void spe_key(int key, int x, int y) {
  switch(key) {
    case GLUT_KEY_DOWN:
      toggle = !toggle;
      glutPostRedisplay();
      break;
		case GLUT_KEY_UP:
      toggle = !toggle;
      glutPostRedisplay();
      break;
	  default:
			break;
  }
}

int main(int iArgc , char** cppArgv) {
    glutInit(&iArgc , cppArgv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);

    glutInitWindowSize(1024, 1024);
    glutInitWindowPosition(0, 0);
    glutCreateWindow("Project");

    Initialize();

    glutDisplayFunc(Draw);
  	glutTimerFunc(15, time_change, 1);
    glutSpecialFunc(spe_key);
    glutMainLoop();

    return 0;
}
