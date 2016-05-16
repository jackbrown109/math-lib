#include "Vector3.h"
#include "Vector2.h"


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
Vector3::Vector3(const float* a_v3fp)
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
	a_x = x;
	a_y = y;
	a_z = z;
}
void Vector3::Set(const float& a_x, const float& a_y, const float& a_z)
{
	x = a_x;
	y = a_y;
	z = a_z;
}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Vector3::operator == (const Vector3& a_v3) const
{
	return (x == a_v3.x && y == a_v3.y && z == a_v3.z);
}
bool Vector3::operator!= (const Vector3& a_v3) const
{
	return (x != a_v3.x || y != a_v3.y || z != a_v3.z);
}
//\===================================================
//\ Neg Operator
//\===================================================
const Vector3 Vector3::operator - () const
{
	return Vector3(x* -1, y* -1, z* -1);
}
//\===================================================
//\ Overload Operators for Vector3 Addition
//\===================================================
const Vector3 Vector3::operator + (float a_fScalar) const
{
	return Vector3(x + a_fScalar, y + a_fScalar, z + a_fScalar);
}
const Vector3 Vector3::operator +(const Vector3& a_v3) const
{
	return Vector3(x + a_v3.x, y + a_v3.y, z + a_v3.z);
}
const Vector3& Vector3::operator +=(float a_fScalar)
{
	x += a_fScalar;
	y += a_fScalar;
	z += a_fScalar;
	return *this;
}
const Vector3& Vector3::operator += (const Vector3& a_v3)
{
	x += a_v3.x;
	y += a_v3.y;
	z += a_v3.z;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector3 Subtraction
//\===================================================
const Vector3 Vector3::operator -(float a_fScalar) const
{
	return Vector3(x - a_fScalar, y - a_fScalar, z - a_fScalar);
}
const Vector3 Vector3::operator -(const Vector3& a_v3) const
{
	return Vector3(x - a_v3.x, y - a_v3.y, z - a_v3.z);
}
const Vector3& Vector3::operator -=(float a_fScalar)
{
	x -= a_fScalar;
	y -= a_fScalar;
	z -= a_fScalar;
	return *this;
}
const Vector3& Vector3::operator -=(const Vector3& a_v3)
{
	x -= a_v3.x;
	y -= a_v3.y;
	z -= a_v3.z;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector3 Multiplication
//\===================================================
const Vector3 Vector3::operator * (float a_fScalar) const
{
	return Vector3(x * a_fScalar, y * a_fScalar, z * a_fScalar);
}
const Vector3 Vector3::operator * (const Vector3& a_v3) const
{
	return Vector3(x * a_v3.x, y * a_v3.y, z * a_v3.z);
}
const Vector3 operator * (float a_fScalar, const Vector3& a_v3)
{
	return;
}
const Vector3& Vector3::operator *=(float a_fScalar)
{
	x *= a_fScalar;
	y *= a_fScalar;
	z *= a_fScalar;
		return *this;
}
const Vector3& Vector3::operator *=(const Vector3& a_v3)
{
	x *= a_v3.x;
	y *= a_v3.y;
	z *= a_v3.z;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector3 Division
//\===================================================
const Vector3 Vector3::operator /(float a_fScalar) const
{
	return Vector3(x / a_fScalar, y / a_fScalar, z / a_fScalar);
}
const Vector3 Vector3::operator /(const Vector3& a_v3) const
{
	return Vector3(x / a_v3.x, y / a_v3.y, z / a_v3.z);
}
const Vector3& Vector3::operator /=(float a_fScalar)
{
	x /= a_fScalar;
	y /= a_fScalar;
	z /= a_fScalar;
		return *this;
}
const Vector3& Vector3::operator /=(const Vector3& a_v3)
{
	x /= a_v3.x;
	y /= a_v3.y;
	z /= a_v3.z;
	return *this;
}
//\===================================================
//\ Magnitude
//\===================================================
float Vector3::Length() const
{

}
float Vector3::Magnitude() const
{

}
float Vector3::LengthSquared() const
{

}
float Vector3::MagnitudeSquared() const
{

}
//\===================================================
//\ A function to quickly shorten a vector to a desired
//\ length. This function is good with camera controls
//\===================================================
void Vector3::Truncate(float a_fMaxLength)
{

}
//\===================================================
//\ Distance
//\===================================================
float Distance(const Vector3& a_v3A, const Vector3& a_v3B)
{

}
float DistanceSquared(const Vector3& a_v3A, const Vector3& a_v3B)
{

}
//\===================================================
//\ Dot Product
//\===================================================
float Vector3::Dot(const Vector3& a_v3A, const Vector3& a_v3B)
{

}
float Dot(const Vector3& a_v3A, const Vector3& a_v3B)
{

}
//\===================================================
//\ Normalisation
//\===================================================
bool Vector3::IsUnit()const
{
	{
		return true;
	}
	return false;
}
float Vector3::Normalise()
{

}
const Vector3 Vector3::GetUnit() const
{

}
//\===================================================
//\ Cross Product
//\===================================================
const Vector3 Vector3::Cross(const Vector3& a_v3) const
{

}
const Vector3 Cross(const Vector3& a_v3A, const Vector3& a_v3B)
{

}
//\===================================================
//\ Rotation Functions
//\===================================================
void Vector3::RotateX(float a_fAngle)
{

}
void Vector3::RotateY(float a_fAngle)
{

}
void Vector3::RotateZ(float a_fAngle)
{

}
//\===================================================
//\ Other Useful Functions
//\===================================================
void Vector3::Zero()
{

}
void Vector3::One()
{

}
void Vector3::Sum()
{

}
void Vector3::Min()
{

}
float Vector3::Max()
{

}