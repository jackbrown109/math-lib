#include "Vector3.h"

//\===================================================
//\ Constructors
//\===================================================
Vector3::Vector3()
{

}
Vector3::Vector3(const Vector3& a_v3)
{

}
Vector3::Vector3(const float a_fVal)
{

}
Vector3::Vector3(float a_x, float a_y, float a_z)
{

}
Vector3::Vector3(const Vector2& a_xy, float a_z = 1.f)
{

}
Vector3::explicit Vector3(const float* a_v3fp)
{

}
//\===================================================
//\ Destructor
//\===================================================
Vector3::~Vector3()
{

}
//\===================================================
//\ Casting Operators
//\===================================================
Vector3::operator float*()
{

}
Vector3::operator const	float*() const
{

}
//\===================================================
//\ Accessor Operators
//\===================================================
void Vector3::Get(float& a_x, float& a_y, float& a_z) const
{

}
void Vector3::Set(const float& a_x, const float& a_y, const float& a_z)
{

}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Vector3::operator == (const Vector3& a_v3) const
{
	return (x == a_v3.x && y == a_v3.y && z == a_v3.z);
}

bool Vector3::operator != (const Vector3 a_v3) const
{
	return (x != a_v3.x || y != a_v3.y || z != a_v3.z);
}
//\===================================================
//\ Neg Operator
//\===================================================
Vector3 Vector3::operator - () const
{

}
//\===================================================
//\ Overload Operators for Vector3 Addition
//\===================================================
Vector3 Vector3::operator +(float a_fScalar) const
{
	return Vector3(x + a_fScalar.x, y + a_fScalar.y, z + a_fScalar.z);
}
Vector3 Vector3::operator +(const Vector3& a_v3) const
{
	return Vector3(x + a_v3.x, y + a_v3.y, z + a_v3.z);
}
Vector3& Vector3::operator +=(float a_fScalar)
{
	x += a_fScalar.x;
	y += a_fScalar.y;
	z += a_fScalar.z;
	return *this;
}
Vector3& Vector3::operator += (const Vector3& a_v3)
{
	x += a_v3.x;
	y += a_v3.y;
	z += a_v3.z;
	return *this;
	//\===================================================
	//\ Overload Operators for Vector3 Subtraction
	//\===================================================
	Vector3 Vector3::operator -(float a_fScalar) const
	{
		return Vector3(x - a_fScalar.x, y - a_fScalar.y, z - a_fScalar.z);
	}
	Vector3 Vector3::operator -(const Vector3& a_v3) const
	{
		return Vector3(x - a_v3.x, y - a_v3.y, z - a_v3.z);
	}
	Vector3& Vector3::operator -=(float a_fScalar)
	{
		x -= a_fScalar.x;
		y -= a_fScalar.y;
		z -= a_fScalar.z
		return *this;
	}
	Vector3& Vector3::operator -=(const Vector3& a_v3)
	{
		x -= a_v3.x;
		y -= a_v3.y;
		z -= a_v3.z;
		return *this;
	}