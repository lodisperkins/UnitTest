#pragma once

class Vector3
{
private:
	float xpos;
	float ypos;
	float zpos;
	float vals[3] = { xpos,ypos,zpos };
	float * mData = &vals[0];
public:
	Vector3();
	Vector3(float newX, float newY,float newZ);
	float getX();
	float getY();
	float getZ();
	Vector3 operator +(Vector3& rhs);
	Vector3 operator - (Vector3& rhs);
	bool operator == (Vector3& rhs);
	bool operator != (Vector3& rhs);
	float magnitude();
	Vector3 operator* (float);
	friend Vector3 operator *(float, Vector3);
	Vector3 normalise();
	float dot(Vector3&rhs);
	Vector3 cross(Vector3&rhs);
	float distance(Vector3& rhs);
	operator float*();
};