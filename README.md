# UnitTest
Lodis Perkins
s188043
Math for Games
Math Library
I. Requirements
1. Description of Problem
Name: Math Library
Problem Statement:
Create a redistributable maths library for real-time applications.
Problem Specifications:
The library must implement the required classes and functions listed. To ensure that the
library functions correctly a Unit Test Application will be given to test the accuracy of its
mathematical methods.
II. Design
1. System Architecture
The library has several classes; each responsible for handling mathematical operations for
either a vector or a matrix.
2. Object Information
o File Name: vector2.h
▪ Name: xpos(float)
▪ Description: Holds the vector's x value
▪ Visibility: Private
▪ Name: ypos(float)
▪ Description: Holds the vector's y value
▪ Visibility: Private
▪ Name: vals(float[])
▪ Description: Holds both the x and the y value
▪ Visibility: Private
▪ Name: data(float*)
▪ Description: Pointer that returns the first value in the vals array
▪ Visibility: Private
▪ Name: getX()(float)
▪ Description: Returns the vectors x value
▪ Visibility: Public
▪ Name: getY()(float)
▪ Description: Returns the vectors y value
▪ Visibility: Public
▪ Name: operator +(Vector2)
▪ Description: Returns the value of two vectors added together
▪ Visibility: Public
▪ Arguments: Vector2
▪ Name: operator -(Vector2)
▪ Description: Returns the value of two vectors subtracted from each
other
▪ Visibility: Public
▪ Arguments: Vector2
▪ Name: operator ==(bool)
▪ Description: Returns true if two vectors have the same x and y values
▪ Visibility: Public
▪ Arguments: Vector2
▪ Name: operator !=(bool)
▪ Description: Returns true if two vectors don't have the same x and y
values
▪ Visibility: Public
▪ Arguments: Vector2
▪ Name: magnitude(float)
▪ Description: Calculates and returns the magnitude of the vector
▪ Visibility: Public
▪ Name: operator *(Vector2)
▪ Description: Returns the vector scaled by the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: normalise(Vecotr2)
▪ Description: Returns a vector who values are between 0 and 1
▪ Visibility: Public
▪ Name: dot(float)
▪ Description: Returns the dot product of two vectors
▪ Visibility: Public
▪ Arguments: Vector2
▪ Name: distance(float)
▪ Description: Returns the distance between two vectors
▪ Visibility: Public
▪ Arguments: Vector2
▪ Name: operator float *
▪ Description: Returns the data pointer
o File Name: vector3.h
▪ Name: xpos(float)
▪ Description: Holds the vector's x value
▪ Visibility: Private
▪ Name: ypos(float)
▪ Description: Holds the vector's y value
▪ Visibility: Private
▪ Name: zpos(float)
▪ Description: Holds the vector's z value
▪ Visibility: Private
▪ Name: vals(float[])
▪ Description: Holds the x,y and the z value
▪ Visibility: Private
▪ Name: data(float*)
▪ Description: Pointer that returns the first value in the vals array
▪ Visibility: Private
▪ Name: getX()(float)
▪ Description: Returns the vectors x value
▪ Visibility: Public
▪ Name: getY()(float)
▪ Description: Returns the vectors y value
▪ Visibility: Public
▪ Name: getZ()(float)
▪ Description: Returns the vectors z value
▪ Visibility: Public
▪ Name: operator +(Vector3)
▪ Description: Returns the value of two vectors added together
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: operator -(Vector3)
▪ Description: Returns the value of two vectors subtracted from each
other
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: operator ==(bool)
▪ Description: Returns true if two vectors have the same x and y values
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: operator !=(bool)
▪ Description: Returns true if two vectors don't have the same x,y and z
values
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: magnitude(float)
▪ Description: Calculates and returns the magnitude of the vector
▪ Visibility: Public
▪ Name: operator *(Vector3)
▪ Description: Returns the vector scaled by the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: normalise(Vector3)
▪ Description: Returns a vector who values are between 0 and 1
▪ Visibility: Public
▪ Name: dot(float)
▪ Description: Returns the dot product of two vectors
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: cross(float)
▪ Description: Returns the cross product of two vectors
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: distance(float)
▪ Description: Returns the distance between two vectors
▪ Visibility: Public
▪ Arguments: Vector3
▪ Name: operator float *
▪ Description: Returns the data pointer
o File Name: vector4.h
▪ Name: xpos(float)
▪ Description: Holds the vector's x value
▪ Visibility: Private
▪ Name: ypos(float)
▪ Description: Holds the vector's y value
▪ Visibility: Private
▪ Name: zpos(float)
▪ Description: Holds the vector's z value
▪ Visibility: Private
▪ Name: trans(float)
▪ Description: Holds the vector's value that represents translation
▪ Visibility: Private
▪ Name: vals(float[])
▪ Description: Holds the x,y,z and the translation value
▪ Visibility: Private
▪ Name: data(float*)
▪ Description: Pointer that returns the first value in the vals array
▪ Visibility: Private
▪ Name: getX()(float)
▪ Description: Returns the vectors x value
▪ Visibility: Public
▪ Name: getY()(float)
▪ Description: Returns the vectors y value
▪ Visibility: Public
▪ Name: getZ()(float)
▪ Description: Returns the vectors z value
▪ Visibility: Public
▪ Name: getT()(float)
▪ Description: Returns the vectors translation value
▪ Visibility: Public
▪ Name: operator +(Vector4)
▪ Description: Returns the value of two vectors added together
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: operator -(Vector4)
▪ Description: Returns the value of two vectors subtracted from each
other
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: operator ==(bool)
▪ Description: Returns true if two vectors have the same x,y,z,and
translation values
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: operator !=(bool)
▪ Description: Returns true if two vectors don't have the x,y,z,and
translation values
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: magnitude(float)
▪ Description: Calculates and returns the magnitude of the vector
▪ Visibility: Public
▪ Name: operator *(Vector4)
▪ Description: Returns the vector scaled by the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: normalise(Vector4)
▪ Description: Returns a vector who values are between 0 and 1
▪ Visibility: Public
▪ Name: dot(float)
▪ Description: Returns the dot product of two vectors
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: cross(float)
▪ Description: Returns the cross product of two vectors
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: distance(float)
▪ Description: Returns the distance between two vectors
▪ Visibility: Public
▪ Arguments: Vector4
▪ Name: operator float *
▪ Description: Returns the data pointer
o File Name: matrix3.h
▪ Name: grid
▪ Description: Array that holds all of the matrix values
▪ Visibility: Private
▪ Name: setRotateY(void)
▪ Description: Rotates the matrix on the y axis based on the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: setRotateX(void)
▪ Description: Rotates the matrix on the x axis based on the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: setRotateZ(void)
▪ Description: Rotates the matrix on the z axis based on the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: operator *(matrix3)
▪ Description: Combines two matrices and returns the result
▪ Visibility: Public
▪ Arguments: matrix3
▪ Name: operator
▪ Description: Returns a vector representing a column in the matrix
depending on the value entered
▪ Visibility: Public
▪ Arguments: int 0-2
▪ Name: operator float *
▪ Description: Converts the 2d grid array intoa one dimensional array
and returns a poointer to the first index
o File Name: matrix4.h
▪ Name: grid
▪ Description: Array that holds all of the matrix values
▪ Visibility: Private
▪ Name: setRotateY(void)
▪ Description: Rotates the matrix on the y axis based on the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: setRotateX(void)
▪ Description: Rotates the matrix on the x axis based on the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: setRotateZ(void)
▪ Description: Rotates the matrix on the z axis based on the value given
▪ Visibility: Public
▪ Arguments: float
▪ Name: operator *(matrix4)
▪ Description: Combines two matrices and returns the result
▪ Visibility: Public
▪ Arguments: matrix4
▪ Name: operator
▪ Description: Returns a vector representing a column in the matrix
depending on the value entered
▪ Visibility: Public
▪ Arguments: int 0-3
▪ Name: operator float *
▪ Description: Converts the 2d grid array into a one dimensional array
and returns a poointer to the first index
III Implementation Documentation
Filename: Vector2.cpp
#include "vector2.h"
#include<cmath>
Vector2::Vector2()
{
}
Vector2::Vector2(float newX, float newY)
{
xpos = newX;
ypos = newY;
}
float Vector2::getX()
{
return xpos;
}
float Vector2::getY()
{
return ypos;
}
Vector2 Vector2::operator+(Vector2 & rhs)
{
return Vector2(xpos + rhs.getX(), ypos + rhs.getY());
}
Vector2 Vector2::operator-(Vector2 & rhs)
{
return Vector2(xpos - rhs.getX(), ypos - rhs.getY());
}
bool Vector2::operator==(Vector2 & rhs)
{
return (xpos == rhs.getX() && ypos == rhs.getY());
}
bool Vector2::operator!=(Vector2 & rhs)
{
return (xpos != rhs.getX() || ypos != rhs.getY());
}
float Vector2::magnitude()
{
return sqrt(pow(xpos, 2) + pow(ypos, 2));
}
Vector2 Vector2::operator*(float scalar)
{
return Vector2(xpos*scalar,ypos *scalar);
}
Vector2 Vector2::normalise()
{
return Vector2(xpos/magnitude(),ypos/magnitude());
}
float Vector2::dot(Vector2 & rhs)
{
return (xpos*rhs.getX()) + (ypos*rhs.getY());
}
float Vector2::distance(Vector2& rhs)
{
Vector2 newvec(xpos - rhs.getX(), ypos - rhs.getY());
return newvec.magnitude();
}
Vector2::operator float*()
{
return mData;
}
Vector2 operator*(float scalar, Vector2 rhs)
{
return Vector2(rhs.getX() * scalar, rhs.getY()*scalar);
}
Filename: Vector3.cpp
#include "vector3.h"
#include <cmath>
Vector3::Vector3()
{
}
Vector3::Vector3(float newX, float newY, float newZ)
{
xpos = newX;
ypos = newY;
zpos = newZ;
}
float Vector3::getX()
{
return xpos;
}
float Vector3::getY()
{
return ypos;
}
float Vector3::getZ()
{
return zpos;
}
Vector3 Vector3::operator+(Vector3 & rhs)
{
return Vector3(xpos + rhs.getX(), ypos + rhs.getY(),zpos +rhs.getZ());
}
Vector3 Vector3::operator-(Vector3 & rhs)
{
return Vector3(xpos - rhs.getX(), ypos - rhs.getY(),zpos-rhs.getZ());
}
bool Vector3::operator==(Vector3 & rhs)
{
return (xpos == rhs.getX() && ypos == rhs.getY()&& zpos == rhs.getZ());
}
bool Vector3::operator!=(Vector3 & rhs)
{
return (xpos != rhs.getX() || ypos != rhs.getY() || zpos != rhs.getZ());
}
float Vector3::magnitude()
{
//pow(x,y) and sqrt(x)
return sqrt(pow(xpos, 2) + pow(ypos, 2)+pow(zpos,2));
}
Vector3 Vector3::operator*(float scalar)
{
return Vector3(xpos*scalar, ypos *scalar,zpos*scalar);
}
Vector3 Vector3::normalise()
{
return Vector3(xpos / magnitude(), ypos / magnitude(),zpos/magnitude());
}
float Vector3::dot(Vector3 & rhs)
{
return (xpos*rhs.getX())+(ypos*rhs.getY())+(zpos*rhs.getZ());
}
Vector3 Vector3::cross(Vector3 & rhs)
{
return Vector3((ypos*rhs.getZ())-(zpos*rhs.getY()),(zpos*rhs.getX())-
(xpos*rhs.getZ()),(xpos*rhs.getY())-(ypos*rhs.getX()));
}
float Vector3::distance(Vector3& rhs)
{
Vector3 newvec(xpos - rhs.getX(), ypos - rhs.getY(),zpos- rhs.getZ());
return newvec.magnitude();
}
Vector3::operator float*()
{
return mData;
}
Vector3 operator*(float scalar, Vector3 rhs)
{
return Vector3(scalar * rhs.getX(),scalar*rhs.getY(),scalar*rhs.getZ());
}
Filename: Vector4.cpp
#include "Vector4.h"
#include <cmath>
Vector4::Vector4()
{
}
Vector4::Vector4(float newX, float newY, float newZ,float newT)
{
xpos = newX;
ypos = newY;
zpos = newZ;
trans = newT;
}
float Vector4::getX()
{
return xpos;
}
float Vector4::getY()
{
return ypos;
}
float Vector4::getZ()
{
return zpos;
}
float Vector4::getT()
{
return trans;
}
Vector4 Vector4::operator+(Vector4 & rhs)
{
return Vector4(xpos + rhs.getX(), ypos + rhs.getY(), zpos + rhs.getZ(),
trans+rhs.getT());
}
Vector4 Vector4::operator-(Vector4 & rhs)
{
return Vector4(xpos - rhs.getX(), ypos - rhs.getY(), zpos -
rhs.getZ(),trans - rhs.getT());
}
bool Vector4::operator==(Vector4 & rhs)
{
return (xpos == rhs.getX() && ypos == rhs.getY() && zpos == rhs.getZ()&&
trans == rhs.getT());
}
bool Vector4::operator!=(Vector4 & rhs)
{
return (xpos != rhs.getX() || ypos != rhs.getY() || zpos != rhs.getZ()||
trans != rhs.getT());
}
float Vector4::magnitude()
{
//pow(x,y) and sqrt(x)
return sqrt(pow(xpos, 2) + pow(ypos, 2) + pow(zpos, 2) + pow(trans, 2));
}
Vector4 Vector4::operator*(float scalar)
{
return Vector4(xpos*scalar, ypos *scalar, zpos*scalar, trans *scalar);
}
Vector4 Vector4::cross(Vector4 & rhs)
{
return Vector4((ypos*rhs.getZ()) - (zpos*rhs.getY()), (zpos*rhs.getX()) -
(xpos*rhs.getZ()), (xpos*rhs.getY()) - (ypos*rhs.getX()),0);
}
Vector4 Vector4::normalise()
{
return Vector4(xpos / magnitude(), ypos / magnitude(), zpos /
magnitude(), trans / magnitude());
}
float Vector4::dot(Vector4 & rhs)
{
return (xpos*rhs.getX()) + (ypos*rhs.getY()) + (zpos*rhs.getZ()) +
(trans*rhs.getT());
}
float Vector4::distance(Vector4& rhs)
{
Vector4 newvec(xpos - rhs.getX(), ypos - rhs.getY(), zpos - rhs.getZ(),
trans);
return newvec.magnitude();
}
Vector4::operator float*()
{
return mData;
}
Vector4 operator*(float scalar, Vector4 rhs)
{
return Vector4(scalar*rhs.getX(),scalar*rhs.getY(),scalar*rhs.getZ(),0);
}
Filename: matrix3.cpp
#include "Matrix3.h"
#include <cstring>
#include <cmath>
Matrix3::Matrix3()
{
float newgrid[3][3] = { {0,0,0},{0,0,0},{0,0,0} };
memcpy(grid, newgrid,sizeof(newgrid));
}
Matrix3::Matrix3(float a,float b,float c, float d, float e,float f, float g,float
h, float i)
{
float newgrid[3][3] = { {a,b,c},{d,e,f},{g,h,i} };
memcpy(grid, newgrid, sizeof(newgrid));
}
void Matrix3::setRotateX(float value)
{
grid[1][1] = cos(value);
grid[2][1] = sin(value);
grid[1][2] = -sin(value);
grid[2][2] = cos(value);
}
void Matrix3::setRotateY(float value)
{
grid[0][0] = cos(value);
grid[2][0] = sin(value);
grid[0][2] = -sin(value);
grid[2][2] = cos(value);
}
void Matrix3::setRotateZ(float value)
{
grid[0][0] = cos(value);
grid[1][0] = sin(value);
grid[0][1] = -sin(value);
grid[1][1] = cos(value);
}
Matrix3 Matrix3::operator*(Matrix3 other)
{
int h = 0;
float newgrid[3][3];
float newValue=0;
Matrix3 answer;
for (int i=0; i <= 2; i++)
{
for (int j=0; j <= 2; j++)
{
for (int h = 0; h <= 2; h++)
{
newValue = newValue +(grid[i][h] *
other.grid[h][j]);
}
answer.grid[i][j] = newValue;
newValue = 0;
}
}
return answer;
}
Vector3 Matrix3::operator[](int choice)
{
return Vector3(grid[0][choice],grid[1][choice],grid[2][choice]);
}
Vector3 Matrix3::operator*(Vector3 vec)
{
float newValue = 0;
float vecValues[3] = { vec.getX(),vec.getY(),vec.getZ() };
float answerVal[3];
for (int j = 0; j <= 2; j++)
{
for (int h = 0; h <= 2; h++)
{
newValue = newValue + (grid[j][h] * vecValues[h]);
}
answerVal[j] = newValue;
newValue = 0;
}
return Vector3(answerVal[0], answerVal[1], answerVal[2]);
}
Vector3 Matrix3::operator[](int index)
{
Vector3 result;
float newgrid[9];
for (int i = 0; i <= 8;)
{
for (int j = 0; j <= 2; j++)
{
for (int h = 0; h <= 2; h++)
{
newgrid[i]=grid[h][j];
i++;
}
}
}
Vector3 sum(newgrid[index * 3], newgrid[(index * 3) + 1], newgrid[(index
* 3) + 2]);
result = sum;
return result;
}
Matrix3::operator float*()
{
float * data;
float newgrid[9];
for (int i = 0; i <= 8;)
{
for (int j = 0; j <= 2; j++)
{
for (int h = 0; h <= 2; h++)
{
newgrid[i] = grid[h][j];
i++;
}
}
}
return data = newgrid;
}
Filename: matrix4.cpp
#include "Matrix4.h"
#include <cmath>
#include <cstring>
Matrix4::Matrix4()
{
float newgrid[4][4] = { { 0,0,0,0 },{ 0,0,0,0 },{ 0,0,0,0 },{0,0,0,0} };
memcpy(grid, newgrid, sizeof(newgrid));
}
Matrix4::Matrix4(float a, float b, float c, float d, float e, float f, float g,
float h, float i,float j, float k,float l,float m,float n, float o, float p)
{
float newgrid[4][4] = { { a,b,c,d },{ e,f,g,h },{ i,j,k,l },{m,n,o,p} };
memcpy(grid, newgrid, sizeof(newgrid));
}
void Matrix4::setRotateX(float value)
{
grid[1][1] = cos(value);
grid[2][1] = sin(value);
grid[1][2] = -sin(value);
grid[2][2] = cos(value);
}
void Matrix4::setRotateY(float value)
{
grid[0][0] = cos(value);
grid[2][0] = sin(value);
grid[0][2] = -sin(value);
grid[2][2] = cos(value);
}
void Matrix4::setRotateZ(float value)
{
grid[0][0] = cos(value);
grid[1][0] = sin(value);
grid[0][1] = -sin(value);
grid[1][1] = cos(value);
}
Matrix4 Matrix4::operator*(Matrix4 other)
{
int h = 0;
float newgrid[3][3];
float newValue = 0;
Matrix4 answer;
for (int i = 0; i <= 3; i++)
{
for (int j = 0; j <= 3; j++)
{
for (int h = 0; h <= 3; h++)
{
newValue = newValue + (grid[i][h] *
other.grid[h][j]);
}
answer.grid[i][j] = newValue;
newValue = 0;
}
}
return answer;
}
Vector4 Matrix4::operator*(Vector4 vec)
{
float newValue = 0;
float vecValues[3] = { vec.getX(),vec.getY(),vec.getZ() };
float answerVal[3];
for (int j = 0; j <= 2; j++)
{
for (int h = 0; h <= 2; h++)
{
newValue = newValue + (grid[j][h] * vecValues[h]);
}
answerVal[j] = newValue;
newValue = 0;
}
return Vector4(answerVal[0], answerVal[1], answerVal[2],answerVal[3]);
}
Vector4 Matrix4::operator[](int index)
{
Vector4 result;
float newgrid[16];
for (int i = 0; i <= 15;)
{
for (int j = 0; j <= 3; j++)
{
for (int h = 0; h <= 3; h++)
{
newgrid[i] = grid[h][j];
i++;
}
}
}
Vector4 sum(newgrid[index * 4],
newgrid[(index * 4) + 1],
newgrid[(index * 4) + 2],
newgrid[(index*4+3)]);
result = sum;
return result;
}
Matrix4::operator float*()
{
float * data;
float newgrid[16];
for (int i = 0; i <= 15;)
{
for (int j = 0; j <= 3; j++)
{
for (int h = 0; h <= 3; h++)
{
newgrid[i] = grid[h][j];
i++;
}
}
}
return data = newgrid;
}
