#include "mathLib.h"

//\===================================================
//\ Constructors
//\===================================================
Vector2::Vector2() :
	x(0.f), y (0.f)
{
	
}

Vector2::Vector2(float a_x, float a_y) :
	x(a_x), y(a_y)
{
	
}
Vector2::Vector2(const float* a_i)
{
	x = *a_i;
	y = *a_i;
}
Vector2::Vector2(const Vector2& a_v2) :
	x(a_v2.x), y(a_v2.y)
{
	
}
//\===================================================
//\ Destructor
//\===================================================
Vector2::~Vector2()
{

}
//\===================================================
//\ Casting Operators
//\===================================================
Vector2::operator float*()
{
	return static_cast<float*>(&i[0]);
}
Vector2::operator const float*() const
{
	return static_cast<const float*>(&i[0]);
}
//\===================================================
//\ Accessor Operators
//\===================================================
void Vector2::Get(float& a_x, float& a_y) const
{
	a_x = x;
	a_y = y;
}
void Vector2::Set(const float& a_x, const float& a_y)
{
	x = a_x;
	y = a_y;
}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Vector2::operator ==(const Vector2& a_v2) const
{
	return (x == a_v2.x && y == a_v2.y);
}

bool Vector2::operator !=(const Vector2 a_v2) const
{
	return (x != a_v2.x || y != a_v2.y);
}
//\===================================================
//\ Neg Operator
//\===================================================
const Vector2 Vector2::operator -() const
{
	return Vector2(x* -1, y* -1);
}
//\===================================================
//\ Overload Operators for Vector2 Addition
//\===================================================
const Vector2 Vector2::operator + (float a_fScalar) const
{
	return Vector2(x + a_fScalar, y + a_fScalar);
}
const Vector2 Vector2::operator +(const Vector2& a_v2) const
{
	return Vector2(x + a_v2.x, y + a_v2.y);
}
const Vector2& Vector2::operator +=(float a_fScalar)
{
	x += a_fScalar;
	y += a_fScalar;
	return *this;
}
const Vector2& Vector2::operator +=(const Vector2& a_v2)
{
	x += a_v2.x;
	y += a_v2.y;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector2 Subtraction
//\===================================================
const Vector2 Vector2::operator -(float a_fScalar) const
{
	return Vector2(x - a_fScalar, y - a_fScalar);
}
const Vector2 Vector2::operator -(const Vector2& a_v2) const
{
	return Vector2(x - a_v2.x, y - a_v2.y);
}
const Vector2& Vector2::operator -=(float a_fScalar)
{
	x -= a_fScalar;
	y -= a_fScalar;
	return *this;
}
const Vector2& Vector2::operator -=(const Vector2& a_v2)
{
	x -= a_v2.x;
	y -= a_v2.y;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector2 Multiplication
//\===================================================
const Vector2 Vector2::operator *(float a_fScalar) const
{
	return Vector2(x * a_fScalar, y * a_fScalar);
}
const Vector2 Vector2::operator *(const Vector2& a_v2) const
{
	return Vector2(x * a_v2.x, y * a_v2.y);
}

const Vector2 operator*(float a_fScalar, const Vector2 & a_v2)
{
	return Vector2(a_fScalar * a_v2.x, a_fScalar * a_v2.y);
}

const Vector2& Vector2::operator *=(float a_fScalar)
{
	x *= a_fScalar;
	y *= a_fScalar;
	return *this;
}
const Vector2& Vector2::operator *=(const Vector2& a_v2)
{
	x *= a_v2.x;
	y *= a_v2.y;
	return *this;
}

//\===================================================
//\ Overload Operators for Vector2 Division
//\===================================================
const Vector2 Vector2::operator /(float a_fScalar) const
{
	return Vector2(x / a_fScalar, y / a_fScalar);
}
const Vector2 Vector2::operator /(const Vector2& a_v2) const
{
	return Vector2(x / a_v2.x, y / a_v2.y);
}
const Vector2& Vector2::operator /=(float a_fScalar)
{
	x /= a_fScalar;
	y /= a_fScalar;
	return *this;
}
const Vector2& Vector2::operator /=(const Vector2& a_v2)
{
	x /= a_v2.x;
	y /= a_v2.y;
	return *this;
}
//\===================================================
//\ Magnitude
//\===================================================
float Vector2::Length() const
{
	return x*x + y*y;
}
float Vector2::Magnitude() const
{
	float m = (x*x) + (y*y);
	return sqrtf(m);
}
float Vector2::LengthSquared() const
{
	return (x*x + y*y) + (x*x + y*y);
}
float Vector2::MagnitudeSquared() const
{
	return (x*x) + (y*y);
}
//\===================================================
//\ Distance
//\===================================================
float Distance(const Vector2& a_v2A, const Vector2& a_v2B)
{
	Vector2 v2 = a_v2A - a_v2B;
	return v2.Magnitude();
}
float DistanceSquared(const Vector2& a_v2A, const Vector2& a_v2B)
{
	Vector2 v2 = a_v2A - a_v2B;
	return v2.MagnitudeSquared();
}
//\===================================================
//\ Dot Product
//\===================================================
float Vector2::Dot(const Vector2& a_v2A, const Vector2& a_v2B)
{
	return (x * a_v2A.x + y * a_v2B.y);
}
float Dot(const Vector2& a_v2A, const Vector2& a_v2B)
{
	return a_v2A.x * a_v2B.x + a_v2A.y * a_v2B.y;
}
//\===================================================
//\ Normalisation
//\===================================================
bool Vector2::IsUnit()const
{
	float m = Magnitude();
	if (m > 1.5f)
	{
		return false;
	}
	return true;
}
Vector2 Vector2::Normalise()
{
	float m = Magnitude();
	float Nx = x / m;
	float Ny = y / m;
	return Vector2(Nx, Ny);
}
const Vector2 Vector2::GetUnit() const
{
	Vector2 v2(x, y);
	v2.Normalise();
	return v2;
}
//\===================================================
//\ Get Perpendicular
//\===================================================
Vector2 Vector2::GetPerpendicular() const
{
	Vector2 PVect;
	PVect.x = y;
	PVect.y = -x;
	return PVect;
}
//\===================================================
//\ Transformation Functions
//\===================================================
void Vector2::Rotate(float fAngle)
{
	const float cos = cosf(fAngle);
	const float sin = sinf(fAngle);
	float TempX = x*cos - y* sin;
	float TempY = x*sin + y* cos;
	x = TempX;
	y = TempY;
}

/*
void Vector2::Project(float fAngle, float fDistance)
{

}
*/

//\===================================================
//\ Linear Interpolation and Bilinear Interpolation
//\===================================================
Vector2 Lerp(const Vector2& vecA, const Vector2& vecB, float t)
{
	return t * vecB + (1 - t) * vecA;
}

/*
Vector2 biLerp(const Vector2 vec[4], float fU, float fV)
{

}
*/

Vector2 QuadBezier(Vector2 vecA, Vector2 vecB, Vector2 vecC, float t)
{
	//lerp from the first point to the second
	Vector2 mid1 = Lerp(vecA, vecB, t);
	//lerp from the second point to the third
	Vector2 mid2 = Lerp(vecB, vecC, t);

	//return the lerp from the two intermediate points
	return Lerp(mid1, mid2, t);
}

Vector2 HermiteSpline(Vector2 point0, Vector2 point1, Vector2 tangent0, Vector2 tangent1, float t)
{
	float tsq = t * t;
	float tcub = tsq * t;

	float h00 = 2 * tcub - 3 * tsq + 1;
	float h01 = -2 * tcub + 3 * tsq;
	float h10 = tcub - 2 * tsq + t;
	float h11 = tcub - tsq;

	Vector2 point = h00 * point0 + h10 * tangent0 + h01 * point1 + h11 * tangent1;

	return point;

}

Vector2 CardinalSpline(Vector2 point0, Vector2 point1, Vector2 point2, float a, float t)
{
	Vector2 tangent0 = (point1 - point0) * a;
	Vector2 tangent1 = (point2 - point1) * a;

	float tsq = t * t;
	float tcub = tsq * t;

	float h00 = 2 * tcub - 3 * tsq + 1;
	float h01 = -2 * tcub + 3 * tsq;
	float h10 = tcub - 2 * tsq + t;
	float h11 = tcub - tsq;

	Vector2 point = h00 * point0 + h10 * tangent0 + h01 * point1 + h11 * tangent1;
	return point;
}
//\===================================================
//\ Other useful functions
//\===================================================
void Vector2::Zero()
{
	x = 0;
	y = 0;
}
void Vector2::One()
{
	x = 1;
	y = 1;
}
float Vector2::Min() const
{
	if (x < y)
	{
		return x;
	}
	else
	{
		return y;
	}
}
float Vector2::Max() const
{
	if (x > y)
	{
		return x;
	}
	else
	{
		return y;
	}
}

