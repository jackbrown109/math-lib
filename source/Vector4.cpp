#include "Vector4.h"


//\===================================================
//\ Constructors
//\===================================================
Vector4::Vector4()
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
void Vector4::Get(float& a_x, float& a_y, float& a_t) const
{

}
void Vector4::Set(const float& a_x, const float& a_y, float& a_t)
{

}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Vector4::operator ==		(const Vector4& a_v4) const
{

}
bool Vector4::operator !=		(const Vector4& a_v4) const
{

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
	return;
}
const Vector4 Vector4::operator + (const Vector4& a_v4) const
{
	return;
}
const Vector4& Vector4::operator += (float a_fScalar)
{
	return;
}
const Vector4& Vector4::operator += (const Vector4& a_v4)
{
	return;
}
//\===================================================
//\ Overload Operators for Vector4 Subtraction
//\===================================================
const Vector4 Vector4::operator - (float a_fScalar) const
{								
	return;
}								
const Vector4 Vector4::operator - (const Vector4& a_v4) const
{
	return;
}
const Vector4& Vector4::operator -= (float a_fScalar)
{
	return;
}
const Vector4& Vector4::operator -= (const Vector4& a_v4)
{
	return;
}
//\===================================================
//\ Overload Operators for Vector4 Multiplication
//\===================================================
const Vector4 Vector4::operator * (float a_fScalar) const
{
	return;
}
const Vector4 Vector4::operator * (const Vector4& a_v4) const
{
	return;
}
const Vector4 operator * (float a_fScalar, const Vector4& a_v4)
{
	return;
}
const Vector4& Vector4::operator *= (float a_fScalar)
{
	return;
}
const Vector4& Vector4::operator *= (const Vector4& a_v4)
{
	return;
}
//\===================================================
//\ Overload Operators for Vector4 Division
//\===================================================
const Vector4 Vector4::operator / (float a_fScalar) const
{
	return;
}
const Vector4 Vector4::operator / (const Vector4& a_v4) const
{
	return;
}
const Vector4& Vector4::operator /= (float a_fScalar)
{
	return;
}
const Vector4& Vector4::operator /= (const Vector4& a_v4)
{
	return;
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