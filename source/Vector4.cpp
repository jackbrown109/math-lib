#include "Vector4.h"


//\===================================================
//\ Constructors
//\===================================================
Vector4::Vector4()
{

}
Vector4::Vector4(const Vector4& a_v4)
{

}
Vector4::Vector4(const float a_fVal)
{

}
Vector4::Vector4(float a_x, float a_y, float a_z, float a_t)
{

}
//\===================================================
//\ Destructor
//\===================================================
Vector4::~Vector4()
{

}
//\===================================================
//\ Casting Operators
//\===================================================
Vector4::operator float*()
{

}
Vector4::operator const float* ()const
{

}
//\===================================================
//\ Accessor Operators
//\===================================================
void Vector4::Get(float& a_x, float& a_y, float& a_z, float& a_t) const
{
	a_x = x;
	a_y = y;
	a_z = z;
	a_t = t;
}
void Vector4::Set(const float& a_x, const float& a_y, const float& a_z, const float& a_t)
{
	x = a_x;
	y = a_y;
	z = a_z;
	t = a_t;
}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Vector4::operator == (const Vector4& a_v4) const
{
	return (x == a_v4.x && y == a_v4.y && z == a_v4.z && t == a_v4.t);
}
bool Vector4::operator != (const Vector4& a_v4) const
{
	return (x != a_v4.x || y != a_v4.y || z != a_v4.z || t != a_v4.t);
}
//\===================================================
//\ Neg Operator
//\===================================================
const Vector4 Vector4::operator - () const
{

}
//\===================================================
//\ Overload Operators for Vector4 Addition
//\===================================================
const Vector4 Vector4::operator + (float a_fScalar) const
{
	return Vector4(x + a_fScalar, y + a_fScalar, z + a_fScalar, t + a_fScalar);
}
const Vector4 Vector4::operator + (const Vector4& a_v4) const
{
	return Vector4(x + a_v4.x, y + a_v4.y, z + a_v4.z, t + a_v4.t);
}
const Vector4& Vector4::operator += (float a_fScalar)
{
	x += a_fScalar;
	y += a_fScalar;
	z += a_fScalar;
	t += a_fScalar;
	return *this;
}
const Vector4& Vector4::operator += (const Vector4& a_v4)
{
	x += a_v4.x;
	y += a_v4.y;
	z += a_v4.z;
	t += a_v4.t;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector4 Subtraction
//\===================================================
const Vector4 Vector4::operator - (float a_fScalar) const
{								
	return Vector4(x - a_fScalar, y - a_fScalar, z - a_fScalar, t - a_fScalar);
}								
const Vector4 Vector4::operator - (const Vector4& a_v4) const
{
	return Vector4(x - a_v4.x, y - a_v4.y, z - a_v4.z, t - a_v4.t);
}
const Vector4& Vector4::operator -= (float a_fScalar)
{
	x -= a_fScalar;
	y -= a_fScalar;
	z -= a_fScalar;
	t -= a_fScalar;
	return *this;
}
const Vector4& Vector4::operator -= (const Vector4& a_v4)
{
	x -= a_v4.x;
	y -= a_v4.y;
	z -= a_v4.z;
	t -= a_v4.t;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector4 Multiplication
//\===================================================
const Vector4 Vector4::operator * (float a_fScalar) const
{
	return Vector4(x * a_fScalar, y * a_fScalar, z * a_fScalar, t * a_fScalar);
}
const Vector4 Vector4::operator * (const Vector4& a_v4) const
{
	return Vector4(x * a_v4.x, y * a_v4.y, z * a_v4.z, t * a_v4.t);
}
const Vector4 operator * (float a_fScalar, const Vector4& a_v4)
{
	return;
}
const Vector4& Vector4::operator *= (float a_fScalar)
{
	x *= a_fScalar;
	y *= a_fScalar;
	z *= a_fScalar;
	t *= a_fScalar;
	return *this;
}
const Vector4& Vector4::operator *= (const Vector4& a_v4)
{
	x *= a_v4.x;
	y *= a_v4.y;
	z *= a_v4.z;
	t *= a_v4.t;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector4 Division
//\===================================================
const Vector4 Vector4::operator / (float a_fScalar) const
{
	return Vector4(x / a_fScalar, y / a_fScalar, z / a_fScalar, t / a_fScalar);
}
const Vector4 Vector4::operator / (const Vector4& a_v4) const
{
	return Vector4(x / a_v4.x, y / a_v4.y, z / a_v4.z, t / a_v4.t);
}
const Vector4& Vector4::operator /= (float a_fScalar)
{
	x /= a_fScalar;
	y /= a_fScalar;
	z /= a_fScalar;
	return *this;
}
const Vector4& Vector4::operator /= (const Vector4& a_v4)
{
	x /= a_v4.x;
	y /= a_v4.y;
	z /= a_v4.z;
	return *this;
}
//\===================================================
//\ Magnitude
//\===================================================
float Vector4::Length() const
{			
			
}			
float Vector4::Magnitude() const
{			
			
}			
float Vector4::LengthSquared() const
{			
			
}			
float Vector4::MagnitudeSquared() const
{

}
//\===================================================
//\ A function to quickly shorten a vector to a desired
//\ length. This function is good with camera controls
//\===================================================
void Vector4::Truncate(float a_fMaxLength)
{

}
//\===================================================
//\ Distance
//\===================================================
float Distance(const Vector4& a_v4A, const Vector4& a_v4B)
{

}
float DistanceSquared(const Vector4& a_v4A, const Vector4& a_v4B)
{

}
//\===================================================
//\ Dot Product
//\===================================================
float Vector4::Dot(const Vector4& a_v4A, const Vector4& a_v4B)
{

}
float Dot(const Vector4& a_v4A, const Vector4& a_v4B)
{

}
//\===================================================
//\ Normalisation
//\===================================================
bool Vector4::IsUnit()const
{
	{
		return true;
	}
	return false;
}
float Vector4::Normalise()
{

}
const Vector4 Vector4::GetUnit() const
{

}
//\===================================================
//\ Cross Product
//\===================================================
const Vector4 Vector4::Cross(const Vector4& a_v4) const
{

}
const Vector4 Cross(const Vector4& a_v4A, const Vector4& a_v4B)
{

}
//\===================================================
//\ Rotation Functions
//\===================================================
void Vector4::RotateX(float a_fAngle)
{

}
void Vector4::RotateY(float a_fAngle)
{

}
void Vector4::RotateZ(float a_fAngle)
{

}
//\===================================================
//\ Other Useful Functions
//\===================================================
void Vector4::Zero()
{

}
void Vector4::One()
{

}
void Vector4::Sum()
{

}
void Vector4::Min()
{

}
float Vector4::Max()
{

}