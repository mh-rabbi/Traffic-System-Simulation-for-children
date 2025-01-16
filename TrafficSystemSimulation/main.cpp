#include <windows.h>  // for MS Windows
#include <iostream>
#include <GL/glut.h>
#include <math.h>
#include <cmath>

using namespace std;

#define PI 3.14159265358979323846

GLfloat x, y, radius, twicePi; // for circle
int triangleAmount;

//for human movement as circle
float circlePosY = -0.4f; // Starting position for the circle
bool moveCircle = false; // Control variable to start/stop the movement

GLfloat position_c1 = 1.6f; // for car 1
GLfloat speed_c1 = 0.01f;

GLfloat position_c2 = 2.4f; // for car 2
GLfloat speed_c2 = 0.01f;

GLfloat position_c3 = -0.9f; // for car 3
GLfloat speed_c3 = 0.01f;

GLfloat position_c4 = 0.9f; // for car 4
GLfloat speed_c4 = 0.01f;

GLfloat position_rain = 0.0f; // for rain
GLfloat speed_rain = 0.05f;
GLfloat position_rain2 = 2.0f; // for rain
GLfloat speed_rain2 = 0.05f;

int cnt = 0, flag = 0, r = 0;

char *c;
/* Handler for window-repaint event. Call back when the window first appears and
whenever the window needs to be re-painted. */

//for human movement as circle
void drawCircle(float x, float y, float radius)
{
    glBegin(GL_TRIANGLE_FAN);
    glColor3f(1.0f, 0.0f, 0.0f); // Red color for the circle
    glVertex2f(x, y); // Center of the circle
    for (int i = 0; i <= 360; i++)
    {
        float angle = i * (M_PI / 180.0f); // Convert degrees to radians
        glVertex2f(x + cos(angle) * radius, y + sin(angle) * radius);
    }
    glEnd();
}// human movement work end


void tree()
{
    // circle tree 1
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 51);
    glVertex2f(-1.5f, 0.8f);
    glVertex2f(-1.5f, 0.55f);
    glEnd();
    x=-1.45f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-1.5f;
    y=0.85f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-1.55f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPointSize(5.0);
    glBegin(GL_POINTS); // fruits
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-1.53f, 0.85f);
    glVertex2f(-1.47f, 0.8f);
    glEnd();

    // circle tree 2
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 51);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.8f, 0.57f);
    glEnd();
    x=-0.85f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-0.8f;
    y=0.85f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-0.75f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 153, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

}

void shop()
{
    // left shop start
    glBegin(GL_POLYGON); // body
    glColor3ub(255, 255, 255);
    glVertex2f(-1.95f, 0.5f);
    glVertex2f(-1.95f, 0.75f);
    glVertex2f(-1.55f, 0.75f);
    glVertex2f(-1.55f, 0.5f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(128, 0, 0);
    glVertex2f(-1.95f, 0.75f);
    glVertex2f(-1.95f, 0.85f);
    glVertex2f(-1.55f, 0.85f);
    glVertex2f(-1.55f, 0.75f);
    glEnd();

    glBegin(GL_POLYGON); // shelter
    glColor3ub(255, 0, 0);
    glVertex2f(-2.0f, 0.65f);
    glVertex2f(-1.5f, 0.65f);
    glVertex2f(-1.5f, 0.7f);
    glVertex2f(-1.55f, 0.75f);
    glVertex2f(-1.95f, 0.75f);
    glVertex2f(-2.0f, 0.7f);
    glEnd();

    glBegin(GL_POLYGON); // door
    glColor3ub(0, 230, 230);
    glVertex2f(-1.9f, 0.5f);
    glVertex2f(-1.9f, 0.62f);
    glColor3ub(0, 153, 153);
    glVertex2f(-1.82f, 0.62f);
    glVertex2f(-1.82f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3ub(0, 230, 230);
    glVertex2f(-1.77f, 0.55f);
    glVertex2f(-1.77f, 0.62f);
    glColor3ub(0, 153, 153);
    glVertex2f(-1.6f, 0.62f);
    glVertex2f(-1.6f, 0.55f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 0, 0);
    glVertex2f(-1.52f, 0.5f);
    glVertex2f(-1.98f, 0.5f);

    glVertex2f(-1.524f, 0.504f);
    glVertex2f(-1.98f, 0.504f);

    glVertex2f(-1.9f, 0.5f); // door
    glVertex2f(-1.9f, 0.62f);

    glVertex2f(-1.9f, 0.62f);
    glVertex2f(-1.82f, 0.62f);

    glVertex2f(-1.82f, 0.62f);
    glVertex2f(-1.82f, 0.5f);

    glVertex2f(-1.82f, 0.5f);
    glVertex2f(-1.9f, 0.5f);

    glVertex2f(-1.82f, 0.55f);
    glVertex2f(-1.9f, 0.55f);

    glVertex2f(-1.77f, 0.55f); // window
    glVertex2f(-1.77f, 0.62f);

    glVertex2f(-1.77f, 0.62f);
    glVertex2f(-1.6f, 0.62f);

    glVertex2f(-1.6f, 0.62f);
    glVertex2f(-1.6f, 0.55f);

    glVertex2f(-1.6f, 0.55f);
    glVertex2f(-1.77f, 0.55f);
    glEnd();

    glColor3f(1.0, 1.0, 1.0);
    c="BFC";
    glRasterPos2f(-1.8, 0.78);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);
    // left shop end

    // right shop start
    glBegin(GL_POLYGON); // body
    glColor3ub(255, 204, 102);
    glVertex2f(-0.75f, 0.5f);
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON); // roof
    glColor3ub(179, 89, 0);
    glVertex2f(-0.75f, 0.85f);
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 0.85f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(179, 89, 0);
    glVertex2f(-0.3f, 0.85f);
    glVertex2f(-0.35f, 0.9f);
    glVertex2f(-0.6f, 0.9f);
    glVertex2f(-0.66f, 0.85f);
    glEnd();

    glBegin(GL_POLYGON); // inside
    glColor3ub(77, 38, 0);
    glVertex2f(-0.73f, 0.6f);
    glVertex2f(-0.73f, 0.75f);
    glVertex2f(-0.22f, 0.75f);
    glVertex2f(-0.22f, 0.6f);
    glEnd();

    glBegin(GL_POLYGON); // product
    glColor3ub(255, 0, 0);
    glVertex2f(-0.7f, 0.6f);
    glVertex2f(-0.7f, 0.65f);
    glVertex2f(-0.6f, 0.65f);
    glVertex2f(-0.6f, 0.6f);
    glEnd();
    glBegin(GL_POLYGON); // product
    glColor3ub(255, 204, 102);
    glVertex2f(-0.65f, 0.65f);
    glVertex2f(-0.65f, 0.68f);
    glVertex2f(-0.6f, 0.68f);
    glVertex2f(-0.6f, 0.65f);
    glEnd();
    glBegin(GL_POLYGON); // product
    glColor3ub(255, 204, 102);
    glVertex2f(-0.55f, 0.6f);
    glVertex2f(-0.55f, 0.65f);
    glVertex2f(-0.45f, 0.65f);
    glVertex2f(-0.45f, 0.6f);
    glEnd();
    glBegin(GL_POLYGON); // product
    glColor3ub(204, 0, 102);
    glVertex2f(-0.4f, 0.6f);
    glVertex2f(-0.4f, 0.65f);
    glVertex2f(-0.35f, 0.6f);
    glVertex2f(-0.35f, 0.65f);
    glEnd();
    glBegin(GL_POLYGON); // product
    glColor3ub(255, 204, 102);
    glVertex2f(-0.34f, 0.6f);
    glVertex2f(-0.34f, 0.66f);
    glVertex2f(-0.3f, 0.6f);
    glVertex2f(-0.3f, 0.66f);
    glEnd();

    glBegin(GL_POLYGON); // table
    glColor3ub(128, 64, 0);
    glVertex2f(-0.73f, 0.5f);
    glVertex2f(-0.73f, 0.6f);
    glVertex2f(-0.22f, 0.6f);
    glVertex2f(-0.22f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON); // shelter
    glColor3ub(230, 115, 0);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.8f, 0.75f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 0, 0);
    glVertex2f(-0.17f, 0.5f);
    glVertex2f(-0.77f, 0.5f);

    glVertex2f(-0.17f, 0.504f);
    glVertex2f(-0.77f, 0.504f);

    glColor3ub(255, 153, 51);
    glVertex2f(-0.73f, 0.6f);
    glVertex2f(-0.22f, 0.6f);
    glEnd();

    glColor3ub(0, 0, 0);
    c="Candy Shop";
    glRasterPos2f(-0.6, 0.84);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, c[i]);
    // right shop endgr
}

void IUBAT()
{
    float yOffset = -1.5f;  // Shift the iubat downward

    // body
    glBegin(GL_POLYGON);
    glColor3ub(180, 0, 0);
    glVertex2f(-1.4f, 0.5f + yOffset);
    glVertex2f(-1.4f, 1.0f + yOffset);
    glVertex2f(-0.9f, 1.0f + yOffset);
    glVertex2f(-0.9f, 0.5f + yOffset);
    glEnd();

    // Bottom window 1
    glBegin(GL_POLYGON);
    glColor3ub(179, 230, 255);
    glVertex2f(-1.35f, 0.55f + yOffset);
    glVertex2f(-1.35f, 0.65f + yOffset);
    glColor3ub(0, 230, 230);
    glVertex2f(-1.25f, 0.65f + yOffset);
    glVertex2f(-1.25f, 0.55f + yOffset);
    glEnd();

    // Bottom window 2
    glBegin(GL_POLYGON);
    glColor3ub(179, 230, 255);
    glVertex2f(-1.05f, 0.55f + yOffset);
    glVertex2f(-1.05f, 0.65f + yOffset);
    glColor3ub(0, 230, 230);
    glVertex2f(-0.95f, 0.65f + yOffset);
    glVertex2f(-0.95f, 0.55f + yOffset);
    glEnd();

    // Top windows
    for (float i = -1.35f; i <= -0.95f; i += 0.15f)
    {
        glBegin(GL_POLYGON);
        glColor3ub(179, 230, 255);
        glVertex2f(i, 0.85f + yOffset);
        glVertex2f(i, 0.95f + yOffset);
        glColor3ub(0, 230, 230);
        glVertex2f(i + 0.1f, 0.95f + yOffset);
        glVertex2f(i + 0.1f, 0.85f + yOffset);
        glEnd();
    }

    //Nameplate Background for "IUBAT"
    glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);  // Dark brown background for the nameplate
    glVertex2f(-1.28f, 0.73f + yOffset);
    glVertex2f(-1.28f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.73f + yOffset);
    glEnd();

    // Nameplate Border
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);  // Black border
    glVertex2f(-1.28f, 0.73f + yOffset);
    glVertex2f(-1.28f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.73f + yOffset);
    glEnd();

    // Display "IUBAT" in the middle of the bbuilding
    glColor3ub(0, 0, 0);  // Black color for text
    const char* c = "IUBAT";
    glRasterPos2f(-1.23f, 0.75f + yOffset);  // Centered in the building
    for (int i = 0; c[i] != '\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, c[i]);
    }

    // Door
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(-1.2f, 0.5f + yOffset);
    glVertex2f(-1.2f, 0.65f + yOffset);
    glVertex2f(-1.1f, 0.65f + yOffset);
    glVertex2f(-1.1f, 0.5f + yOffset);
    glEnd();

    // Door handle
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.17f, 0.58f + yOffset);
    glEnd();

    // Updated Roof (Shelter) aligned with the building
    glBegin(GL_POLYGON);
    glColor3ub(130, 50, 50);
    glVertex2f(-1.4f, 1.0f + yOffset);   // Adjusted to sit on top of the building
    glVertex2f(-1.45f, 0.95f + yOffset);
    glVertex2f(-1.45f, 0.9f + yOffset);
    glVertex2f(-0.85f, 0.9f + yOffset);
    glVertex2f(-0.85f, 0.95f + yOffset);
    glVertex2f(-0.9f, 1.0f + yOffset);
    glEnd();
}



void road_footpath()
{
    // road
    glBegin(GL_POLYGON);
    glColor3ub(95, 96, 91);
    glVertex2f(-2.0f, 0.5f);
    glVertex2f(2.0f, 0.5f);
    glVertex2f(2.0f, -0.5f);
    glVertex2f(-2.0f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(95, 96, 91);
    glVertex2f(0.4f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, -1.0f);
    glVertex2f(0.4f, -1.0f);
    glEnd();

    // footpath
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(-2.0f, 0.5f);
    glVertex2f(-2.0f, 0.3f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.6f, 0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(-2.0f, -0.5f);
    glVertex2f(-2.0f, -0.3f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.6f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(2.0f, -0.5f);
    glVertex2f(2.0f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(2.0f, 0.5f);
    glVertex2f(2.0f, 0.3f);
    glVertex2f(1.2f, 0.3f);
    glVertex2f(1.2f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(0.4f, -1.0f);
    glVertex2f(0.6f, -1.0f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(1.2f, -1.0f);
    glVertex2f(1.4f, -1.0f);
    glVertex2f(1.4f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(1.2f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, 0.3f);
    glVertex2f(1.2f, 0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(176, 191, 189);
    glVertex2f(0.4f, 1.0f);
    glVertex2f(0.6f, 1.0f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glEnd();

    // divider
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-2.0f, 0.0f);
    glVertex2f(-1.8f, 0.0f);

    glVertex2f(-1.7f, 0.0f);
    glVertex2f(-1.5f, 0.0f);

    glVertex2f(-1.4f, 0.0f);
    glVertex2f(-1.2f, 0.0f);

    glVertex2f(-1.1f, 0.0f);
    glVertex2f(-0.9f, 0.0f);

    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.3f, 0.0f);

    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.0f, 0.0f);

    glVertex2f(1.7f, 0.0f);
    glVertex2f(1.9f, 0.0f);

    glVertex2f(0.9f, 0.8f);
    glVertex2f(0.9f, 0.97f);

    glVertex2f(0.9f, -0.97f);
    glVertex2f(0.9f, -0.8f);
    glEnd();

    // zebra-crossing start
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.2f, -0.3f);

    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.4f, 0.3f);

    glVertex2f(0.6f, 0.5f);
    glVertex2f(1.2f, 0.5f);

    glVertex2f(0.6f, 0.7f);
    glVertex2f(1.2f, 0.7f);

    glVertex2f(1.4f, 0.3f);
    glVertex2f(1.4f, -0.3f);

    glVertex2f(1.6f, 0.3f);
    glVertex2f(1.6f, -0.3f);

    glVertex2f(0.6f, -0.5f);
    glVertex2f(1.2f, -0.5f);

    glVertex2f(0.6f, -0.7f);
    glVertex2f(1.2f, -0.7f);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    // left cross
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);

    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.4f, 0.1f);

    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.4f, 0.0f);

    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.4f, -0.1f);

    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.4f, -0.2f);

    // right cross
    glVertex2f(1.4f, 0.2f);
    glVertex2f(1.6f, 0.2f);

    glVertex2f(1.4f, 0.1f);
    glVertex2f(1.6f, 0.1f);

    glVertex2f(1.4f, 0.0f);
    glVertex2f(1.6f, 0.0f);

    glVertex2f(1.4f, -0.1f);
    glVertex2f(1.6f, -0.1f);

    glVertex2f(1.4f, -0.2f);
    glVertex2f(1.6f, -0.2f);

    // bottom cross
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.7f);

    glVertex2f(0.8f, -0.5f);
    glVertex2f(0.8f, -0.7f);

    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(1.0f, -0.5f);
    glVertex2f(1.0f, -0.7f);

    glVertex2f(1.1f, -0.5f);
    glVertex2f(1.1f, -0.7f);

    // top cross
    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.7f, 0.7f);

    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.7f);

    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.9f, 0.7f);

    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 0.7f);

    glVertex2f(1.1f, 0.5f);
    glVertex2f(1.1f, 0.7f);
    glEnd();
    // zebra-crossing end

    //human movement start
    if (moveCircle)
    {
        if (circlePosY < 0.4f)
        {
            circlePosY += 0.01f; // Move circle to the right
        }
        else
        {
            moveCircle = false; // Stop movement once it crosses the road
        }
    }

    // Draw the circle (human representation) at the current position
    drawCircle(0.3f,circlePosY, 0.05f);  // Adjust y-position and radius as needed
    //human movement end

    // road border
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(102, 102, 102);
    glVertex2f(-2.0f, 0.5f);
    glVertex2f(0.4f, 0.5f);

    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.4f, 1.0f);

    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, 0.5f);

    glVertex2f(1.4f, 0.5f);
    glVertex2f(2.0f, 0.5f);

    glVertex2f(2.0f, -0.5f);
    glVertex2f(1.4f, -0.5f);

    glVertex2f(1.4f, -0.5f);
    glVertex2f(1.4f, -1.0f);

    glVertex2f(0.4f, -1.0f);
    glVertex2f(0.4f, -0.5f);

    glVertex2f(0.4f, -0.5f);
    glVertex2f(-2.0f, -0.5f);

    glColor3ub(230, 230, 230);
    glVertex2f(-2.0f, 0.3f);
    glVertex2f(0.6f, 0.3f);

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.6f, 1.0f);

    glVertex2f(1.2f, 1.0f);
    glVertex2f(1.2f, 0.3f);

    glVertex2f(1.2f, 0.3f);
    glVertex2f(2.0f, 0.3f);

    glVertex2f(2.0f, -0.3f);
    glVertex2f(1.2f, -0.3f);

    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -1.0f);

    glVertex2f(0.6f, -1.0f);
    glVertex2f(0.6f, -0.3f);

    glVertex2f(0.6f, -0.3f);
    glVertex2f(-2.0f, -0.3f);
    glEnd();
}

void traffic_light1()
{
    // stand
    glBegin(GL_POLYGON);
    glColor3ub(128, 0, 0);
    glVertex2f(0.45f, 0.38f);
    glVertex2f(0.45f, 0.42f);
    glVertex2f(0.55f, 0.42f);
    glVertex2f(0.55f, 0.38f);
    glEnd();
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3ub(153, 0, 0);
    glVertex2f(0.55f, 0.4f);
    glVertex2f(0.7f, 0.4f);

    glVertex2f(0.7f, 0.4f);
    glVertex2f(0.7f, 0.15f);
    glEnd();

    //light start
    glBegin(GL_POLYGON);
    glColor3ub(204, 122, 0);
    glVertex2f(0.65f, 0.15f);
    glVertex2f(0.75f, 0.15f);
    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.65f, -0.05f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.65f, 0.15f);
    glVertex2f(0.75f, 0.15f);

    glVertex2f(0.75f, 0.15f);
    glVertex2f(0.75f, -0.05f);

    glVertex2f(0.75f, -0.05f);
    glVertex2f(0.65f, -0.05f);

    glVertex2f(0.65f, -0.05f);
    glVertex2f(0.65f, 0.15f);
    // side
    glVertex2f(0.65f, 0.1f);
    glVertex2f(0.6f, 0.1f);

    glVertex2f(0.65f, 0.05f);
    glVertex2f(0.62f, 0.05f);

    glVertex2f(0.65f, 0.0f);
    glVertex2f(0.63f, 0.0f);

    glVertex2f(0.75f, 0.1f);
    glVertex2f(0.8f, 0.1f);

    glVertex2f(0.75f, 0.05f);
    glVertex2f(0.78f, 0.05f);

    glVertex2f(0.75f, 0.0f);
    glVertex2f(0.77f, 0.0f);
    glEnd();

    x=0.7f;
    y=0.1f;
    radius =.02f; // red
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(204, 0, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.05f;
    radius =.02f; // yellow
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(255, 204, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.7f;
    y=0.0f;
    radius =.02f; // green
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 128, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // light end
}

void traffic_light2()
{
    // stand
    glBegin(GL_POLYGON);
    glColor3ub(128, 0, 0);
    glVertex2f(1.28f, -0.35f);
    glVertex2f(1.32f, -0.35f);
    glVertex2f(1.32f, -0.45f);
    glVertex2f(1.28f, -0.45f);
    glEnd();
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3ub(153, 0, 0);
    glVertex2f(1.3f, -0.35f);
    glVertex2f(1.3f, -0.2f);

    glVertex2f(1.3f, -0.2f);
    glVertex2f(1.0f, -0.2f);
    glEnd();

    // light start
    glBegin(GL_POLYGON);
    glColor3ub(204, 122, 0);
    glVertex2f(0.9f, -0.1f);
    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.3f);
    glVertex2f(0.9f, -0.3f);
    glEnd();
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(0, 0, 0);
    glVertex2f(0.9f, -0.1f);
    glVertex2f(1.0f, -0.1f);

    glVertex2f(1.0f, -0.1f);
    glVertex2f(1.0f, -0.3f);

    glVertex2f(1.0f, -0.3f);
    glVertex2f(0.9f, -0.3f);

    glVertex2f(0.9f, -0.3f);
    glVertex2f(0.9f, -0.1f);
    // side
    glVertex2f(0.9f, -0.15f);
    glVertex2f(0.85f, -0.15f);

    glVertex2f(0.9f, -0.2f);
    glVertex2f(0.87f, -0.2f);

    glVertex2f(0.9f, -0.25f);
    glVertex2f(0.88f, -0.25f);

    glVertex2f(1.0f, -0.15f);
    glVertex2f(1.05f, -0.15f);

    glVertex2f(1.0f, -0.2f);
    glVertex2f(1.03f, -0.2f);

    glVertex2f(1.0f, -0.25f);
    glVertex2f(1.02f, -0.25f);
    glEnd();

    x=0.95f;
    y=-0.15f;
    radius =.02f; // red
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(204, 0, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.95f;
    y=-0.2f;
    radius =.02f; // yellow
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(255, 204, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.95f;
    y=-0.25f;
    radius =.02f; // green
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 128, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    // light end
}

void road_light()
{
    glLineWidth(3.0f);
    // left-up
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-1.9f, 0.4f);
    glVertex2f(-1.8f, 0.4f);

    glVertex2f(-1.8f, 0.4f);
    glVertex2f(-1.8f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(-1.85f, 0.25f);
    glVertex2f(-1.8f, 0.25f);
    glVertex2f(-1.8f, 0.1f);
    glVertex2f(-1.85f, 0.1f);
    glEnd();
    glPointSize(10.0); //
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(-1.9f, 0.4f);
    glEnd();

    for(int i = 0; i < 3; i++)
    {
        glTranslated(0.6, 0.0, 0.0);
        glBegin(GL_LINES);
        glColor3ub(128, 128, 128);
        glVertex2f(-1.9f, 0.4f);
        glVertex2f(-1.8f, 0.4f);

        glVertex2f(-1.8f, 0.4f);
        glVertex2f(-1.8f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(191, 191, 191);
        glVertex2f(-1.85f, 0.25f);
        glVertex2f(-1.8f, 0.25f);
        glVertex2f(-1.8f, 0.1f);
        glVertex2f(-1.85f, 0.1f);
        glEnd();
        glBegin(GL_POINTS);
        glColor3ub(89, 89, 89);
        glVertex2f(-1.9f, 0.4f);
        glEnd();
    }

    // left-down
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-1.6f, -0.4f);
    glVertex2f(-1.5f, -0.4f);

    glVertex2f(-1.5f, -0.4f);
    glVertex2f(-1.5f, -0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(-1.5f, -0.1f);
    glVertex2f(-1.55f, -0.1f);
    glVertex2f(-1.55f, -0.25f);
    glVertex2f(-1.5f, -0.25f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(-1.6f, -0.4f);
    glEnd();

    for(int i = 0; i < 3; i++)
    {
        glTranslated(-0.6, 0.0, 0.0);
        glBegin(GL_LINES);
        glColor3ub(128, 128, 128);
        glVertex2f(-1.6f, -0.4f);
        glVertex2f(-1.5f, -0.4f);

        glVertex2f(-1.5f, -0.4f);
        glVertex2f(-1.5f, -0.1f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(191, 191, 191);
        glVertex2f(-1.5f, -0.1f);
        glVertex2f(-1.55f, -0.1f);
        glVertex2f(-1.55f, -0.25f);
        glVertex2f(-1.5f, -0.25f);
        glEnd();
        glBegin(GL_POINTS);
        glColor3ub(89, 89, 89);
        glVertex2f(-1.6f, -0.4f);
        glEnd();
    }

    // right-up
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.4f, 0.4f);
    glVertex2f(1.5f, 0.4f);

    glVertex2f(1.5f, 0.4f);
    glVertex2f(1.5f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(1.5f, 0.1f);
    glVertex2f(1.45f, 0.1f);
    glVertex2f(1.45f, 0.25f);
    glVertex2f(1.5f, 0.25f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(1.4f, 0.4f);
    glEnd();

    // right-down
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.7f, -0.4f);
    glVertex2f(1.8f, -0.4f);

    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.8f, -0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(1.8f, -0.1f);
    glVertex2f(1.75f, -0.1f);
    glVertex2f(1.75f, -0.25f);
    glVertex2f(1.8f, -0.25f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(1.7f, -0.4f);
    glEnd();

    // bottom-left
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.5f, -0.6f);

    glVertex2f(0.5f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.65f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.65f, -0.6f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(0.5f, -0.7f);
    glEnd();

    // bottom-right
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.3f, -1.0f);
    glVertex2f(1.3f, -0.9f);

    glVertex2f(1.3f, -0.9f);
    glVertex2f(1.0f, -0.9f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.95f);
    glVertex2f(1.15f, -0.95f);
    glVertex2f(1.15f, -0.9f);
    glEnd();

    // top-left
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.5f, 0.9f);

    glVertex2f(0.5f, 0.9f);
    glVertex2f(0.8f, 0.9f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(0.8f, 0.9f);
    glVertex2f(0.8f, 0.85f);
    glVertex2f(0.65f, 0.85f);
    glVertex2f(0.65f, 0.9f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(0.5f, 0.8f);
    glEnd();

    // top-right
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.3f, 0.5f);
    glVertex2f(1.3f, 0.6f);

    glVertex2f(1.3f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(191, 191, 191);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 0.55f);
    glVertex2f(1.15f, 0.55f);
    glVertex2f(1.15f, 0.6f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(1.3f, 0.5f);
    glEnd();
}



void car1()
{
    glPushMatrix();
    glTranslatef(position_c1, 0.0f, 0.0f);
    glBegin(GL_POLYGON); // body
    glColor3ub(230, 0, 0);
    glVertex2f(-0.2f, 0.25f);
    glVertex2f(0.07f, 0.25f);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.07f, 0.05f);
    glVertex2f(-0.2f, 0.05f);
    glVertex2f(-0.22f, 0.07f);
    glVertex2f(-0.22f, 0.23f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3ub(0, 0, 0);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.07f, 0.06f);
    glVertex2f(-0.18f, 0.06f);
    glVertex2f(-0.18f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(230, 0, 0);
    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.03f, 0.21f);
    glVertex2f(-0.15f, 0.21f);
    glVertex2f(-0.15f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.14f, 0.2f);
    glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.14f, 0.1f);
    glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0)
    {
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.23f);
        glVertex2f(0.45f, 0.3f);
        glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.07f);
        glVertex2f(0.45f, 0.0f);
        glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_LINES);
    glColor3ub(230, 0, 0);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.03f, 0.21f);

    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.07f, 0.06f);

    glVertex2f(-0.18f, 0.06f);
    glVertex2f(-0.15f, 0.09f);

    glVertex2f(-0.15f, 0.21f);
    glVertex2f(-0.18f, 0.24f);

    glVertex2f(-0.06f, 0.24f);
    glVertex2f(-0.06f, 0.21f);

    glVertex2f(-0.06f, 0.09f);
    glVertex2f(-0.06f, 0.06f);
    glEnd();

    glPopMatrix();
}

void car2()
{
    glPushMatrix();
    glTranslatef(position_c2, 0.0f, 0.0f);
    glRotatef(180, 0.0f, 0.0f, 0.0f);
    glBegin(GL_POLYGON); // body
    glColor3ub(255, 204, 0);
    glVertex2f(-0.04f, 0.25f);
    glVertex2f(0.07f, 0.25f);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.07f, 0.05f);
    glVertex2f(-0.04f, 0.05f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3ub(0, 0, 0);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.07f, 0.06f);
    glVertex2f(-0.03f, 0.06f);
    glVertex2f(-0.03f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(255, 204, 0);
    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.03f, 0.21f);
    glVertex2f(-0.07f, 0.21f);
    glVertex2f(-0.07f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.14f, 0.2f);
    glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.14f, 0.1f);
    glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0)
    {
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.23f);
        glVertex2f(0.45f, 0.3f);
        glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.07f);
        glVertex2f(0.45f, 0.0f);
        glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_POLYGON); // lorry
    glColor3ub(242, 242, 242);
    glVertex2f(-0.06f, 0.25f);
    glVertex2f(-0.06f, 0.05f);
    glVertex2f(-0.5f, 0.05f);
    glVertex2f(-0.5f, 0.25f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 204, 0);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.03f, 0.21f);

    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.07f, 0.06f);

    glVertex2f(-0.03f, 0.24f);
    glVertex2f(-0.03f, 0.21f);

    glVertex2f(-0.03f, 0.09f);
    glVertex2f(-0.03f, 0.06f);

    glColor3ub(217, 217, 217);
    glVertex2f(-0.06f, 0.25f);
    glVertex2f(-0.06f, 0.05f);

    glVertex2f(-0.06f, 0.05f);
    glVertex2f(-0.5f, 0.05f);

    glVertex2f(-0.5f, 0.05f);
    glVertex2f(-0.5f, 0.25f);

    glVertex2f(-0.5f, 0.25f);
    glVertex2f(-0.06f, 0.25f);
    glEnd();

    glPopMatrix();
}

void car3()
{
    glPushMatrix();
    glTranslatef(0.9, position_c3, 0.0f);
    glRotatef(90, 0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON); // body
    glColor3ub(255, 255, 255);
    glVertex2f(-0.13f, 0.25f);
    glVertex2f(0.07f, 0.25f);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.07f, 0.05f);
    glVertex2f(-0.13f, 0.05f);
    glVertex2f(-0.15f, 0.07f);
    glVertex2f(-0.15f, 0.23f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3ub(0, 0, 0);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.07f, 0.06f);
    glVertex2f(-0.13f, 0.06f);
    glVertex2f(-0.13f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(255, 255, 255);
    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.03f, 0.21f);
    glVertex2f(-0.1f, 0.21f);
    glVertex2f(-0.1f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.14f, 0.2f);
    glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.14f, 0.1f);
    glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0)
    {
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.23f);
        glVertex2f(0.45f, 0.3f);
        glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.07f);
        glVertex2f(0.45f, 0.0f);
        glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.03f, 0.21f);

    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.07f, 0.06f);

    glVertex2f(-0.13f, 0.06f);
    glVertex2f(-0.1f, 0.09f);

    glVertex2f(-0.1f, 0.21f);
    glVertex2f(-0.13f, 0.24f);

    glVertex2f(-0.03f, 0.24f);
    glVertex2f(-0.03f, 0.21f);

    glVertex2f(-0.03f, 0.09f);
    glVertex2f(-0.03f, 0.06f);
    glEnd();

    glPopMatrix();
}

void car4()
{
    glPushMatrix();
    glTranslatef(0.9f, position_c4, 0.0f);
    glRotatef(270,0.0f, 0.0f, 1.0f);
    glBegin(GL_POLYGON); // body
    glColor3ub(51, 102, 255);
    glVertex2f(-0.13f, 0.25f);
    glVertex2f(0.07f, 0.25f);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.07f, 0.05f);
    glVertex2f(-0.13f, 0.05f);
    glVertex2f(-0.15f, 0.07f);
    glVertex2f(-0.15f, 0.23f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3ub(0, 0, 0);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.07f, 0.06f);
    glVertex2f(-0.13f, 0.06f);
    glVertex2f(-0.13f, 0.24f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(51, 102, 255);
    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.03f, 0.21f);
    glVertex2f(-0.1f, 0.21f);
    glVertex2f(-0.1f, 0.09f);
    glEnd();

    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.23f);
    glVertex2f(0.17f, 0.2f);
    glVertex2f(0.14f, 0.2f);
    glVertex2f(0.14f, 0.23f);
    glEnd();
    glBegin(GL_POLYGON); // light
    glColor3ub(242, 242, 242);
    glVertex2f(0.15f, 0.07f);
    glVertex2f(0.17f, 0.1f);
    glVertex2f(0.14f, 0.1f);
    glVertex2f(0.14f, 0.07f);
    glEnd();

    if(flag != 0)
    {
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.2f);
        glVertex2f(0.14f, 0.23f);
        glVertex2f(0.45f, 0.3f);
        glVertex2f(0.45f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON); // head-light
        glColor3ub(255, 255, 204);
        glVertex2f(0.17f, 0.1f);
        glVertex2f(0.14f, 0.07f);
        glVertex2f(0.45f, 0.0f);
        glVertex2f(0.45f, 0.2f);
        glEnd();
    }

    glBegin(GL_LINES);
    glColor3ub(51, 102, 255);
    glVertex2f(0.07f, 0.24f);
    glVertex2f(0.03f, 0.21f);

    glVertex2f(0.03f, 0.09f);
    glVertex2f(0.07f, 0.06f);

    glVertex2f(-0.13f, 0.06f);
    glVertex2f(-0.1f, 0.09f);

    glVertex2f(-0.1f, 0.21f);
    glVertex2f(-0.13f, 0.24f);

    glVertex2f(-0.03f, 0.24f);
    glVertex2f(-0.03f, 0.21f);

    glVertex2f(-0.03f, 0.09f);
    glVertex2f(-0.03f, 0.06f);
    glEnd();

    glPopMatrix();
}


void redgreen1 ()
{
    x=0.7f;
    y=0.1f;
    radius =.02f; // red
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(255, 51, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.95f;
    y=-0.25f;
    radius =.02f; // green
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 255, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void redgreen2 ()
{
    x=0.7f;
    y=0.0f;
    radius =.02f; // green
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 255, 0);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    x=0.95f;
    y=-0.15f;
    radius =.02f; // red
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(255, 51, 51);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y); // center of circle
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
}

void rain()
{
    glPushMatrix();
    glTranslatef(position_rain2, position_rain, 0.0f);
    glLineWidth(2.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.9f);
    glVertex2f(0.05f, 0.85f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.7f);
    glVertex2f(0.05f, 0.65f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.5f);
    glVertex2f(0.05f, 0.45f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.3f);
    glVertex2f(0.05f, 0.25f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.0f, 0.1f);
    glVertex2f(0.05f, 0.05f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.05f, -0.9f);
    glVertex2f(0.0f, -0.85f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.05f, -0.7f);
    glVertex2f(0.0f, -0.65f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.05f, -0.5f);
    glVertex2f(0.0f, -0.45f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.05f, -0.3f);
    glVertex2f(0.0f, -0.25f);
    glEnd();
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.05f, -0.1f);
    glVertex2f(0.0f, -0.05f);
    glEnd();

    for(int i = 0; i < 100; i++)
    {
        glTranslatef(-0.2, 0.0, 0.0f);
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.05f, 0.85f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.05f, 0.65f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.05f, 0.45f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.3f);
        glVertex2f(0.05f, 0.25f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(0.05f, 0.05f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.9f);
        glVertex2f(0.0f, -0.85f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.7f);
        glVertex2f(0.0f, -0.65f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.5f);
        glVertex2f(0.0f, -0.45f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.3f);
        glVertex2f(0.0f, -0.25f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.1f);
        glVertex2f(0.0f, -0.05f);
        glEnd();
    }

    for(int i = 0; i < 100; i++)
    {
        glTranslatef(0.2, 0.0, 0.0f);
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.9f);
        glVertex2f(0.05f, 0.85f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.7f);
        glVertex2f(0.05f, 0.65f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.5f);
        glVertex2f(0.05f, 0.45f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.3f);
        glVertex2f(0.05f, 0.25f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.0f, 0.1f);
        glVertex2f(0.05f, 0.05f);
        glEnd();

        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.9f);
        glVertex2f(0.0f, -0.85f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.7f);
        glVertex2f(0.0f, -0.65f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.5f);
        glVertex2f(0.0f, -0.45f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.3f);
        glVertex2f(0.0f, -0.25f);
        glEnd();
        glBegin(GL_LINES);
        glColor3ub(255, 255, 255);
        glVertex2f(0.05f, -0.1f);
        glVertex2f(0.0f, -0.05f);
        glEnd();
    }
    glPopMatrix();
}

///day view
void day()
{
    glClear(GL_COLOR_BUFFER_BIT);// Clear the color buffer (background)

    // Background (Sand Color)
    glBegin(GL_POLYGON);
    glColor3ub(210, 180, 140);  // Sand Color
    glVertex2f(2.0f, 1.0f);
    glVertex2f(2.0f, -1.0f);
    glVertex2f(-2.0f, -1.0f);
    glVertex2f(-2.0f, 1.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(210, 180, 140);  // Sand Color
    glVertex2f(0.35f, -0.5f);
    glVertex2f(1.9f, -0.5f);
    glVertex2f(1.9f, -1.0f);
    glVertex2f(0.35f, -1.0f);
    glEnd();


    /// Objects-->
    tree();
    road_footpath();
    IUBAT();
    car1();
    car2();
    car3();
    car4();
    traffic_light1();
    traffic_light2();
    road_light();


    shop();

    // shop open
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 204);
    glVertex2f(-1.72f, 0.57f);
    glVertex2f(-1.72f, 0.6f);
    glVertex2f(-1.65f, 0.6f);
    glVertex2f(-1.65f, 0.57f);
    glEnd();

    glColor3ub(255, 51, 0);
    c="open";
    glRasterPos2f(-1.715, 0.58);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, c[i]);
    // shop open

    if(cnt == 0)
        redgreen2();
    else
        redgreen1();

    if(r != 0)
        rain();

    glFlush();
}

/// Night View
void night()
{
    glClear(GL_COLOR_BUFFER_BIT);   // Clear the color buffer (background)

    // Background(Sand color)
    glBegin(GL_POLYGON);
    glColor3ub(210, 180, 140);  // Sand Color
    glVertex2f(2.0f, 1.0f);
    glVertex2f(2.0f, -1.0f);
    glVertex2f(-2.0f, -1.0f);
    glVertex2f(-2.0f, 1.0f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(210, 180, 140);  // Sand Color
    glVertex2f(0.35f, -0.5f);
    glVertex2f(1.9f, -0.5f);
    glVertex2f(1.9f, -1.0f);
    glVertex2f(0.35f, -1.0f);
    glEnd();


    /// Objects -->

    /// tree start
    // circle tree 1
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 51);
    glVertex2f(-1.5f, 0.8f);
    glVertex2f(-1.5f, 0.55f);
    glEnd();
    x=-1.45f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 102, 34);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-1.5f;
    y=0.85f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 102, 34);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-1.55f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 102, 34);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    glPointSize(5.0);
    glBegin(GL_POINTS); // fruits
    glColor3f(1.0f, 0.0f, 0.0f);
    glVertex2f(-1.53f, 0.85f);
    glVertex2f(-1.47f, 0.8f);
    glEnd();

    /// circle tree 2
    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(153, 51, 51);
    glVertex2f(-0.8f, 0.8f);
    glVertex2f(-0.8f, 0.57f);
    glEnd();
    x=-0.85f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 102, 34);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-0.8f;
    y=0.85f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 102, 34);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();
    x=-0.75f;
    y=0.82f;
    radius =0.08f;
    triangleAmount = 50;
    twicePi = 2.0f * PI;
    glColor3ub(0, 102, 34);
    glBegin(GL_TRIANGLE_FAN);
    glVertex2f(x, y);
    for(int i = 0; i <= triangleAmount; i++)
    {
        glVertex2f(
            x + (radius * cos(i *  twicePi / triangleAmount)),
            y + (radius * sin(i * twicePi / triangleAmount))
        );
    }
    glEnd();

    /// road start
    glBegin(GL_POLYGON);
    glColor3ub(77, 77, 77);
    glVertex2f(-2.0f, 0.5f);
    glVertex2f(2.0f, 0.5f);
    glVertex2f(2.0f, -0.5f);
    glVertex2f(-2.0f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(77, 77, 77);
    glVertex2f(0.4f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, -1.0f);
    glVertex2f(0.4f, -1.0f);
    glEnd();

    // footpath
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(-2.0f, 0.5f);
    glVertex2f(-2.0f, 0.3f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.6f, 0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(-2.0f, -0.5f);
    glVertex2f(-2.0f, -0.3f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.6f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(2.0f, -0.5f);
    glVertex2f(2.0f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -0.5f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(2.0f, 0.5f);
    glVertex2f(2.0f, 0.3f);
    glVertex2f(1.2f, 0.3f);
    glVertex2f(1.2f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(0.4f, -1.0f);
    glVertex2f(0.6f, -1.0f);
    glVertex2f(0.6f, -0.3f);
    glVertex2f(0.4f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(1.2f, -1.0f);
    glVertex2f(1.4f, -1.0f);
    glVertex2f(1.4f, -0.3f);
    glVertex2f(1.2f, -0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(1.2f, 1.0f);
    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, 0.3f);
    glVertex2f(1.2f, 0.3f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(0.4f, 1.0f);
    glVertex2f(0.6f, 1.0f);
    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.4f, 0.3f);
    glEnd();

    // divider
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(-2.0f, 0.0f);
    glVertex2f(-1.8f, 0.0f);

    glVertex2f(-1.7f, 0.0f);
    glVertex2f(-1.5f, 0.0f);

    glVertex2f(-1.4f, 0.0f);
    glVertex2f(-1.2f, 0.0f);

    glVertex2f(-1.1f, 0.0f);
    glVertex2f(-0.9f, 0.0f);

    glVertex2f(-0.8f, 0.0f);
    glVertex2f(-0.6f, 0.0f);

    glVertex2f(-0.5f, 0.0f);
    glVertex2f(-0.3f, 0.0f);

    glVertex2f(-0.2f, 0.0f);
    glVertex2f(0.0f, 0.0f);

    glVertex2f(1.7f, 0.0f);
    glVertex2f(1.9f, 0.0f);

    glVertex2f(0.9f, 0.8f);
    glVertex2f(0.9f, 0.97f);

    glVertex2f(0.9f, -0.97f);
    glVertex2f(0.9f, -0.8f);
    glEnd();

    // zebra-crossing start
    glLineWidth(5.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    glVertex2f(0.2f, 0.3f);
    glVertex2f(0.2f, -0.3f);

    glVertex2f(0.4f, -0.3f);
    glVertex2f(0.4f, 0.3f);

    glVertex2f(0.6f, 0.5f);
    glVertex2f(1.2f, 0.5f);

    glVertex2f(0.6f, 0.7f);
    glVertex2f(1.2f, 0.7f);

    glVertex2f(1.4f, 0.3f);
    glVertex2f(1.4f, -0.3f);

    glVertex2f(1.6f, 0.3f);
    glVertex2f(1.6f, -0.3f);

    glVertex2f(0.6f, -0.5f);
    glVertex2f(1.2f, -0.5f);

    glVertex2f(0.6f, -0.7f);
    glVertex2f(1.2f, -0.7f);
    glEnd();

    glLineWidth(10.0f);
    glBegin(GL_LINES);
    glColor3ub(255, 255, 255);
    // left cross
    glVertex2f(0.2f, 0.2f);
    glVertex2f(0.4f, 0.2f);

    glVertex2f(0.2f, 0.1f);
    glVertex2f(0.4f, 0.1f);

    glVertex2f(0.2f, 0.0f);
    glVertex2f(0.4f, 0.0f);

    glVertex2f(0.2f, -0.1f);
    glVertex2f(0.4f, -0.1f);

    glVertex2f(0.2f, -0.2f);
    glVertex2f(0.4f, -0.2f);

    // right cross
    glVertex2f(1.4f, 0.2f);
    glVertex2f(1.6f, 0.2f);

    glVertex2f(1.4f, 0.1f);
    glVertex2f(1.6f, 0.1f);

    glVertex2f(1.4f, 0.0f);
    glVertex2f(1.6f, 0.0f);

    glVertex2f(1.4f, -0.1f);
    glVertex2f(1.6f, -0.1f);

    glVertex2f(1.4f, -0.2f);
    glVertex2f(1.6f, -0.2f);

    // bottom cross
    glVertex2f(0.7f, -0.5f);
    glVertex2f(0.7f, -0.7f);

    glVertex2f(0.8f, -0.5f);
    glVertex2f(0.8f, -0.7f);

    glVertex2f(0.9f, -0.5f);
    glVertex2f(0.9f, -0.7f);

    glVertex2f(1.0f, -0.5f);
    glVertex2f(1.0f, -0.7f);

    glVertex2f(1.1f, -0.5f);
    glVertex2f(1.1f, -0.7f);

    // top cross
    glVertex2f(0.7f, 0.5f);
    glVertex2f(0.7f, 0.7f);

    glVertex2f(0.8f, 0.5f);
    glVertex2f(0.8f, 0.7f);

    glVertex2f(0.9f, 0.5f);
    glVertex2f(0.9f, 0.7f);

    glVertex2f(1.0f, 0.5f);
    glVertex2f(1.0f, 0.7f);

    glVertex2f(1.1f, 0.5f);
    glVertex2f(1.1f, 0.7f);
    glEnd();
    // zebra-crossing end


    //human movement start
    if (moveCircle)
    {
        if (circlePosY < 0.4f)
        {
            circlePosY += 0.01f; // Move circle to the right
        }
        else
        {
            moveCircle = false; // Stop movement once it crosses the road
        }
    }

    // Draw the circle (human representation) at the current position
    drawCircle(0.3f,circlePosY, 0.05f);  // Adjust y-position and radius as needed
    //human movement end

    // road border
    glLineWidth(3.0f);
    glBegin(GL_LINES);
    glColor3ub(102, 102, 102);
    glVertex2f(-2.0f, 0.5f);
    glVertex2f(0.4f, 0.5f);

    glVertex2f(0.4f, 0.5f);
    glVertex2f(0.4f, 1.0f);

    glVertex2f(1.4f, 1.0f);
    glVertex2f(1.4f, 0.5f);

    glVertex2f(1.4f, 0.5f);
    glVertex2f(2.0f, 0.5f);

    glVertex2f(2.0f, -0.5f);
    glVertex2f(1.4f, -0.5f);

    glVertex2f(1.4f, -0.5f);
    glVertex2f(1.4f, -1.0f);

    glVertex2f(0.4f, -1.0f);
    glVertex2f(0.4f, -0.5f);

    glVertex2f(0.4f, -0.5f);
    glVertex2f(-2.0f, -0.5f);

    glColor3ub(230, 230, 230);
    glVertex2f(-2.0f, 0.3f);
    glVertex2f(0.6f, 0.3f);

    glVertex2f(0.6f, 0.3f);
    glVertex2f(0.6f, 1.0f);

    glVertex2f(1.2f, 1.0f);
    glVertex2f(1.2f, 0.3f);

    glVertex2f(1.2f, 0.3f);
    glVertex2f(2.0f, 0.3f);

    glVertex2f(2.0f, -0.3f);
    glVertex2f(1.2f, -0.3f);

    glVertex2f(1.2f, -0.3f);
    glVertex2f(1.2f, -1.0f);

    glVertex2f(0.6f, -1.0f);
    glVertex2f(0.6f, -0.3f);

    glVertex2f(0.6f, -0.3f);
    glVertex2f(-2.0f, -0.3f);
    glEnd();
    /// road end

    car1();
    car2();
    car3();
    car4();
    traffic_light1();
    traffic_light2();

    /// road-light start
    glLineWidth(3.0f);
    // left-up
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-1.9f, 0.4f);
    glVertex2f(-1.8f, 0.4f);

    glVertex2f(-1.8f, 0.4f);
    glVertex2f(-1.8f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.85f, 0.25f);
    glVertex2f(-1.8f, 0.25f);
    glVertex2f(-1.8f, 0.1f);
    glVertex2f(-1.85f, 0.1f);
    glEnd();
    glPointSize(10.0); //
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(-1.9f, 0.4f);
    glEnd();

    for(int i = 0; i < 3; i++)
    {
        glTranslated(0.6, 0.0, 0.0);
        glBegin(GL_LINES);
        glColor3ub(128, 128, 128);
        glVertex2f(-1.9f, 0.4f);
        glVertex2f(-1.8f, 0.4f);

        glVertex2f(-1.8f, 0.4f);
        glVertex2f(-1.8f, 0.1f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.85f, 0.25f);
        glVertex2f(-1.8f, 0.25f);
        glVertex2f(-1.8f, 0.1f);
        glVertex2f(-1.85f, 0.1f);
        glEnd();
        glBegin(GL_POINTS);
        glColor3ub(89, 89, 89);
        glVertex2f(-1.9f, 0.4f);
        glEnd();
    }

    // left-down
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(-1.6f, -0.4f);
    glVertex2f(-1.5f, -0.4f);

    glVertex2f(-1.5f, -0.4f);
    glVertex2f(-1.5f, -0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(-1.5f, -0.1f);
    glVertex2f(-1.55f, -0.1f);
    glVertex2f(-1.55f, -0.25f);
    glVertex2f(-1.5f, -0.25f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(-1.6f, -0.4f);
    glEnd();

    for(int i = 0; i < 3; i++)
    {
        glTranslated(-0.6, 0.0, 0.0);
        glBegin(GL_LINES);
        glColor3ub(128, 128, 128);
        glVertex2f(-1.6f, -0.4f);
        glVertex2f(-1.5f, -0.4f);

        glVertex2f(-1.5f, -0.4f);
        glVertex2f(-1.5f, -0.1f);
        glEnd();
        glBegin(GL_POLYGON);
        glColor3ub(255, 255, 0);
        glVertex2f(-1.5f, -0.1f);
        glVertex2f(-1.55f, -0.1f);
        glVertex2f(-1.55f, -0.25f);
        glVertex2f(-1.5f, -0.25f);
        glEnd();
        glBegin(GL_POINTS);
        glColor3ub(89, 89, 89);
        glVertex2f(-1.6f, -0.4f);
        glEnd();
    }

    // right-up
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.4f, 0.4f);
    glVertex2f(1.5f, 0.4f);

    glVertex2f(1.5f, 0.4f);
    glVertex2f(1.5f, 0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(1.5f, 0.1f);
    glVertex2f(1.45f, 0.1f);
    glVertex2f(1.45f, 0.25f);
    glVertex2f(1.5f, 0.25f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(1.4f, 0.4f);
    glEnd();

    // right-down
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.7f, -0.4f);
    glVertex2f(1.8f, -0.4f);

    glVertex2f(1.8f, -0.4f);
    glVertex2f(1.8f, -0.1f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(1.8f, -0.1f);
    glVertex2f(1.75f, -0.1f);
    glVertex2f(1.75f, -0.25f);
    glVertex2f(1.8f, -0.25f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(1.7f, -0.4f);
    glEnd();

    // bottom-left
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(0.5f, -0.7f);
    glVertex2f(0.5f, -0.6f);

    glVertex2f(0.5f, -0.6f);
    glVertex2f(0.8f, -0.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(0.8f, -0.6f);
    glVertex2f(0.8f, -0.65f);
    glVertex2f(0.65f, -0.65f);
    glVertex2f(0.65f, -0.6f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(0.5f, -0.7f);
    glEnd();

    // bottom-right
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.3f, -1.0f);
    glVertex2f(1.3f, -0.9f);

    glVertex2f(1.3f, -0.9f);
    glVertex2f(1.0f, -0.9f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(1.0f, -0.9f);
    glVertex2f(1.0f, -0.95f);
    glVertex2f(1.15f, -0.95f);
    glVertex2f(1.15f, -0.9f);
    glEnd();

    // top-left
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(0.5f, 0.8f);
    glVertex2f(0.5f, 0.9f);

    glVertex2f(0.5f, 0.9f);
    glVertex2f(0.8f, 0.9f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(0.8f, 0.9f);
    glVertex2f(0.8f, 0.85f);
    glVertex2f(0.65f, 0.85f);
    glVertex2f(0.65f, 0.9f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(0.5f, 0.8f);
    glEnd();

    // top-right
    glBegin(GL_LINES);
    glColor3ub(128, 128, 128);
    glVertex2f(1.3f, 0.5f);
    glVertex2f(1.3f, 0.6f);

    glVertex2f(1.3f, 0.6f);
    glVertex2f(1.0f, 0.6f);
    glEnd();
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 0);
    glVertex2f(1.0f, 0.6f);
    glVertex2f(1.0f, 0.55f);
    glVertex2f(1.15f, 0.55f);
    glVertex2f(1.15f, 0.6f);
    glEnd();
    glBegin(GL_POINTS);
    glColor3ub(89, 89, 89);
    glVertex2f(1.3f, 0.5f);
    glEnd();
    /// road-light end


    /// shop start
    // left shop start
    glBegin(GL_POLYGON); // body
    glColor3ub(255, 255, 255);
    glVertex2f(-1.95f, 0.5f);
    glVertex2f(-1.95f, 0.75f);
    glVertex2f(-1.55f, 0.75f);
    glVertex2f(-1.55f, 0.5f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(128, 0, 0);
    glVertex2f(-1.95f, 0.75f);
    glVertex2f(-1.95f, 0.85f);
    glVertex2f(-1.55f, 0.85f);
    glVertex2f(-1.55f, 0.75f);
    glEnd();

    glBegin(GL_POLYGON); // shelter
    glColor3ub(255, 0, 0);
    glVertex2f(-2.0f, 0.65f);
    glVertex2f(-1.5f, 0.65f);
    glVertex2f(-1.5f, 0.7f);
    glVertex2f(-1.55f, 0.75f);
    glVertex2f(-1.95f, 0.75f);
    glVertex2f(-2.0f, 0.7f);
    glEnd();

    glBegin(GL_POLYGON); // door
    glColor3ub(255, 153, 51);
    glVertex2f(-1.9f, 0.5f);
    glVertex2f(-1.9f, 0.62f);
    glColor3ub(179, 119, 0);
    glVertex2f(-1.82f, 0.62f);
    glVertex2f(-1.82f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON); // window
    glColor3ub(255, 153, 51);
    glVertex2f(-1.77f, 0.55f);
    glVertex2f(-1.77f, 0.62f);
    glColor3ub(179, 119, 0);
    glVertex2f(-1.6f, 0.62f);
    glVertex2f(-1.6f, 0.55f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 0, 0);
    glVertex2f(-1.52f, 0.5f);
    glVertex2f(-1.98f, 0.5f);

    glVertex2f(-1.524f, 0.504f);
    glVertex2f(-1.98f, 0.504f);

    glVertex2f(-1.9f, 0.5f); // door
    glVertex2f(-1.9f, 0.62f);

    glVertex2f(-1.9f, 0.62f);
    glVertex2f(-1.82f, 0.62f);

    glVertex2f(-1.82f, 0.62f);
    glVertex2f(-1.82f, 0.5f);

    glVertex2f(-1.82f, 0.5f);
    glVertex2f(-1.9f, 0.5f);

    glVertex2f(-1.82f, 0.55f);
    glVertex2f(-1.9f, 0.55f);

    glVertex2f(-1.77f, 0.55f); // window
    glVertex2f(-1.77f, 0.62f);

    glVertex2f(-1.77f, 0.62f);
    glVertex2f(-1.6f, 0.62f);

    glVertex2f(-1.6f, 0.62f);
    glVertex2f(-1.6f, 0.55f);

    glVertex2f(-1.6f, 0.55f);
    glVertex2f(-1.77f, 0.55f);
    glEnd();
    glColor3f(1.0, 1.0, 1.0);
    c ="BFC";
    glRasterPos2f(-1.8, 0.78);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18, c[i]);
    // left shop end

    // right shop start
    glBegin(GL_POLYGON); // body
    glColor3ub(255, 204, 102);
    glVertex2f(-0.75f, 0.5f);
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON); // roof
    glColor3ub(179, 89, 0);
    glVertex2f(-0.75f, 0.85f);
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.2f, 0.85f);
    glEnd();
    glBegin(GL_POLYGON); // roof
    glColor3ub(179, 89, 0);
    glVertex2f(-0.3f, 0.85f);
    glVertex2f(-0.35f, 0.9f);
    glVertex2f(-0.6f, 0.9f);
    glVertex2f(-0.66f, 0.85f);
    glEnd();

    glBegin(GL_POLYGON); // shutter
    glColor3ub(102, 82, 0);
    glVertex2f(-0.73f, 0.5f);
    glVertex2f(-0.73f, 0.8);
    glVertex2f(-0.22f, 0.8);
    glVertex2f(-0.22f, 0.5f);
    glEnd();

    glBegin(GL_POLYGON); // shelter
    glColor3ub(230, 115, 0);
    glVertex2f(-0.8f, 0.7f);
    glVertex2f(-0.15f, 0.7f);
    glVertex2f(-0.15f, 0.75f);
    glVertex2f(-0.2f, 0.8f);
    glVertex2f(-0.75f, 0.8f);
    glVertex2f(-0.8f, 0.75f);
    glEnd();

    glBegin(GL_LINES);
    glColor3ub(128, 0, 0);
    glVertex2f(-0.17f, 0.5f);
    glVertex2f(-0.77f, 0.5f);

    glVertex2f(-0.17f, 0.504f);
    glVertex2f(-0.77f, 0.504f);

    glColor3ub(255, 153, 51);
    glVertex2f(-0.73f, 0.53f);
    glVertex2f(-0.22f, 0.53f);

    glVertex2f(-0.73f, 0.56f);
    glVertex2f(-0.22f, 0.56f);

    glVertex2f(-0.73f, 0.59f);
    glVertex2f(-0.22f, 0.59f);

    glVertex2f(-0.73f, 0.62f);
    glVertex2f(-0.22f, 0.62f);

    glVertex2f(-0.73f, 0.65f);
    glVertex2f(-0.22f, 0.65f);

    glVertex2f(-0.73f, 0.68f);
    glVertex2f(-0.22f, 0.68f);
    glEnd();

    glBegin(GL_POLYGON); // shutter
    glColor3ub(255, 235, 153);
    glVertex2f(-0.4f, 0.58f);
    glVertex2f(-0.4f, 0.65f);
    glVertex2f(-0.25f, 0.65f);
    glVertex2f(-0.25f, 0.58f);
    glEnd();

    glColor3ub(102, 51, 0);
    c="closed";
    glRasterPos2f(-0.39, 0.6);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_8_BY_13, c[i]);

    glColor3ub(255, 255, 0);
    c="Candy Shop";
    glRasterPos2f(-0.6, 0.84);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, c[i]);
    // right shop end
    /// shop end

    /// night IUBAT start
    float yOffset = -1.5f;  // Shift the iubat downward

    //body
    glBegin(GL_POLYGON);
    glColor3ub(180, 0, 0);
    glVertex2f(-1.4f, 0.5f + yOffset);
    glVertex2f(-1.4f, 1.0f + yOffset);
    glVertex2f(-0.9f, 1.0f + yOffset);
    glVertex2f(-0.9f, 0.5f + yOffset);
    glEnd();

    // Bottom window 1
    glBegin(GL_POLYGON);
    glColor3ub(204, 255, 153);
    glVertex2f(-1.35f, 0.55f + yOffset);
    glVertex2f(-1.35f, 0.65f + yOffset);
    glColor3ub(128, 255, 0);
    glVertex2f(-1.25f, 0.65f + yOffset);
    glVertex2f(-1.25f, 0.55f + yOffset);
    glEnd();

    // Bottom window 2
    glBegin(GL_POLYGON);
    glColor3ub(204, 255, 153);
    glVertex2f(-1.05f, 0.55f + yOffset);
    glVertex2f(-1.05f, 0.65f + yOffset);
    glColor3ub(0, 230, 230);
    glVertex2f(-0.95f, 0.65f + yOffset);
    glVertex2f(-0.95f, 0.55f + yOffset);
    glEnd();

    // Top windows
    for (float i = -1.35f; i <= -0.95f; i += 0.15f)
    {
        glBegin(GL_POLYGON);
        glColor3ub(204, 255, 153);
        glVertex2f(i, 0.85f + yOffset);
        glVertex2f(i, 0.95f + yOffset);
        glColor3ub(0, 230, 230);
        glVertex2f(i + 0.1f, 0.95f + yOffset);
        glVertex2f(i + 0.1f, 0.85f + yOffset);
        glEnd();
    }

    // Nameplate Background for "IUBAT"
    glBegin(GL_POLYGON);
    glColor3ub(153, 102, 51);  // Dark brown background for the nameplate
    glVertex2f(-1.28f, 0.73f + yOffset);
    glVertex2f(-1.28f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.73f + yOffset);
    glEnd();

    // Nameplate Border
    glLineWidth(2.0f);
    glBegin(GL_LINE_LOOP);
    glColor3ub(0, 0, 0);  // Black border
    glVertex2f(-1.28f, 0.73f + yOffset);
    glVertex2f(-1.28f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.79f + yOffset);
    glVertex2f(-1.02f, 0.73f + yOffset);
    glEnd();

    // Display "IUBAT" in the middle of the building
    glColor3ub(0, 255, 255);  // Black color for text
    const char* c = "IUBAT";
    glRasterPos2f(-1.23f, 0.75f + yOffset);  // Centered in the iubat
    for (int i = 0; c[i] != '\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, c[i]);
    }

    // Door
    glBegin(GL_POLYGON);
    glColor3ub(153, 153, 153);
    glVertex2f(-1.2f, 0.5f + yOffset);
    glVertex2f(-1.2f, 0.65f + yOffset);
    glVertex2f(-1.1f, 0.65f + yOffset);
    glVertex2f(-1.1f, 0.5f + yOffset);
    glEnd();

    // Door handle
    glPointSize(5.0);
    glBegin(GL_POINTS);
    glColor3f(1.0f, 1.0f, 1.0f);
    glVertex2f(-1.17f, 0.58f + yOffset);
    glEnd();

    // Updated Roof (Shelter) aligned with the iubat
    glBegin(GL_POLYGON);
    glColor3ub(130, 50, 50);
    glVertex2f(-1.4f, 1.0f + yOffset);   // Adjusted to sit on top of the iubat
    glVertex2f(-1.45f, 0.95f + yOffset);
    glVertex2f(-1.45f, 0.9f + yOffset);
    glVertex2f(-0.85f, 0.9f + yOffset);
    glVertex2f(-0.85f, 0.95f + yOffset);
    glVertex2f(-0.9f, 1.0f + yOffset);
    glEnd();

    /// iubat end

    // shop open
    glBegin(GL_POLYGON);
    glColor3ub(255, 255, 204);
    glVertex2f(-1.72f, 0.57f);
    glVertex2f(-1.72f, 0.6f);
    glVertex2f(-1.65f, 0.6f);
    glVertex2f(-1.65f, 0.57f);
    glEnd();

    glColor3ub(255, 51, 0);
    c="close";
    glRasterPos2f(-1.715, 0.58);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_HELVETICA_10, c[i]);
    // shop open

    if(cnt == 0)
        redgreen2();
    else
        redgreen1();

    if(r != 0)
        rain();

    glFlush();
}

void update_car1(int value)
{
    if(cnt == 0)
    {
        speed_c1 = 0.01f;
        if(position_c1 > 2.7)
            position_c1 = -2.7f;

        position_c1 += speed_c1;
    }

    else
    {
        if(position_c1 > 0.0)
        {
            speed_c1 = 0.0f;
            position_c1 = 0.0;
        }
        position_c1 += speed_c1;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update_car1, 0);
}

void update_car2(int value)
{
    if(cnt == 0)
    {
        speed_c2 = 0.01f;
        if(position_c2 < -2.7)
            position_c2 = 2.7f;

        position_c2 -= speed_c2;
    }
    else
    {
        if(position_c2 < 1.8)
        {
            speed_c2 = 0.0f;
            position_c2 = 1.8;
        }
        position_c2 -= speed_c2;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update_car2, 0);
}

void update_car3(int value)
{
    if(cnt == 0)
    {
        if(position_c3 > -0.9)
        {
            speed_c3 = 0.0f;
            position_c3 = -0.9;
        }
        position_c3 += speed_c3;
    }

    else
    {
        speed_c3 = 0.01f;
        if(position_c3 > 1.7)
            position_c3 = -1.7f;

        position_c3 += speed_c3;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update_car3, 0);
}

void update_car4(int value)
{
    if(cnt == 0)
    {
        if(position_c4 < 0.9)
        {
            speed_c4 = 0.0f;
            position_c4 = 0.9;
        }
        position_c4 -= speed_c4;
    }

    else
    {
        speed_c4 = 0.01f;
        if(position_c4 < -1.7)
            position_c4 = 1.7f;

        position_c4 -= speed_c4;
    }

    glutPostRedisplay();
    glutTimerFunc(10, update_car4, 0);
}

void update_rain(int value)
{
    if(position_rain < -0.1)
        position_rain = 0.3f;

    position_rain -= speed_rain;

    if(position_rain2 > 2.0)
        position_rain2 = 1.8f;

    position_rain2 += speed_rain2;

    glutPostRedisplay();
    glutTimerFunc(100, update_rain, 0);
}

void button(unsigned char key, int x, int y)
{

    switch (key)
    {
    case 'f':
        glutDisplayFunc(day);
        break;

    case 'r':
        cnt++;
        moveCircle = true;
        break;

    case 'g':
        cnt = 0;
        circlePosY = -0.4f;
        moveCircle = false;
        break;

    case 'n':
        flag++;
        glutDisplayFunc(night);
        glutPostRedisplay();
        break;

    case 'd':
        flag = 0;
        glutDisplayFunc(day);
        glutPostRedisplay();
        break;
    }
}

void rain_button(int button, int state, int x, int y)
{
    if(button == GLUT_LEFT_BUTTON)
    {
        r++;
        PlaySound("rain.wav", NULL, SND_ASYNC|SND_FILENAME|SND_LOOP);
    }
    if(button == GLUT_RIGHT_BUTTON)
    {
        r = 0;
        PlaySound(NULL, NULL, SND_ASYNC|SND_FILENAME);
    }
}

///start position
void start()
{
    glClear(GL_COLOR_BUFFER_BIT);         // Clear the color buffer (background)
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque

    glBegin(GL_POLYGON);
    glColor3ub(255,255,0);
    glVertex2f(-2.0f, 2.0f);
    glColor3ub(147,112,219);
    glVertex2f(2.0f, 2.0f);
    glColor3ub(30,144,255);
    glVertex2f(2.0f, -2.0f);
    glColor3ub(70,130,180);
    glVertex2f(-2.0f, -2.0f);
    glEnd();

    glColor3ub(255, 255, 255);
    c="Traffic  Signal  Simulation for younger childrens";
    glRasterPos2f(-0.3, 0.7);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);

    glColor3ub(0, 0, 0);
    c="Feature: \n-> Press 'R' = Turn on RED signal for HORIZONTAL road and Turn on GREEN signal for VERTICAL road. \n-> Press 'G' = Turn on GREEN signal for HORIZONTAL road and Turn on RED signal for VERTICAL road.";
    float x = 0.3f;
    glRasterPos2f(-1.5, 0.3);
    for(int i = 0; c[i] !='\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);
        if(c[i] == '\n')
            glRasterPos2f(-1.5, x = x-0.1);
    }

    glColor3ub(0, 0, 0);
    c="-> Press 'D' = Switch to DAY view. \n-> Press 'N' = Switch to NIGHT view. \n-> Press 'LMB' = Start RAIN. \n-> Press 'RMB' = Stop RAIN.";
    glRasterPos2f(-1.5, x = x-0.1);
    for(int i = 0; c[i] !='\0'; i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);
        if(c[i] == '\n')
            glRasterPos2f(-1.5, x = x-0.1);
    }

    glColor3ub(255, 0, 0);
    c="Press F to START the project";
    glRasterPos2f(-0.3, -0.7);
    for(int i = 0; c[i] !='\0'; i++)
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, c[i]);

    glFlush();
}

void inigl()
{
    glClearColor(1.0f, 1.0f, 1.0f, 1.0f); // Set background color to black and opaque
    gluOrtho2D(-2, 2, -1, 1); // Set range of axis of display (left, right, bottom, top)
}

// Main function: GLUT runs as a console application starting at main()
int main(int argc, char** argv)
{
    glutInit(&argc, argv); // Initialize GLUT
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(1430, 800); // Set the window's initial width & height
    glutInitWindowPosition(0, 0); // Set the window position
    glutCreateWindow("Interactive Traffic Signal Simulation for children"); // Create a window with the given title

    cout << "Project Title: Interactive Traffic Signal Simulation for children\n" << endl;

    glutDisplayFunc(start);
    inigl();

    glutTimerFunc(10, update_car1, 0);
    glutTimerFunc(10, update_car2, 0);
    glutTimerFunc(10, update_car3, 0);
    glutTimerFunc(10, update_car4, 0);
    glutTimerFunc(100, update_rain, 0);

    glutKeyboardFunc(button);
    glutMouseFunc(rain_button);

    glutMainLoop();
    return 0;
}
