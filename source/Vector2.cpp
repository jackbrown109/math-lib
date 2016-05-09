
#include "Vector2.h"
//\===================================================
//\ Constructors
//\===================================================
Vector2::Vector2()
{
	x = 0.f;
	y = 0.f;
}

Vector2::Vector2(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

Vector2::Vector2(const Vector2& a_v2)
{
	x = a_v2.x;
	y = a_v2.y;
}
//\===================================================
//\ Destructor
//\===================================================
Vector2::~Vector2()
{

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
//\ Overload Operators for Vector2 Addition
//\===================================================
Vector2 Vector2::operator +(float a_fScalar) const
{
	return Vector2(x + a_fScalar.x, y + a_fScalar.y);
}
Vector2 Vector2::operator +(const Vector2& a_v2) const
{
	return Vector2(x + a_v2.x, y + a_v2.y);
}
Vector2& Vector2::operator +=(float a_fScalar)
{
	x += a_fScalar.x;
	y += a_fScalar.y;
	return *this;
}
Vector2& Vector2::operator +=(const Vector2& a_v2)
{
	x += a_v2.x;
	y += a_v2.y;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector2 Subtraction
//\===================================================
Vector2 Vector2::operator -(float a_fScalar) const
{
	return Vector2(x - a_fScalar.x, y - a_fScalar.y);
}
Vector2 Vector2::operator -(const Vector2& a_v2) const
{
	return Vector2(x - a_v2.x, y - a_v2.y);
}
Vector2& Vector2::operator -=(float a_fScalar)
{
	x -= a_fScalar.x;
	y -= a_fScalar.y;
	return *this;
}
Vector2& Vector2::operator -=(const Vector2& a_v2)
{
	x -= a_v2.x;
	y -= a_v2.y;
	return *this;
}
//\===================================================
//\ Overload Operators for Vector2 Multiplication
//\===================================================
Vector2 Vector2::operator *(float a_fScalar) const
{
	return Vector2(x * a_fScalar.x, y * a_fScalar.y);
}
Vector2 Vector2::operator *(const Vector2& a_v2) const
{
	return Vector2(x * a_v2.x, y * a_v2.y);
}




Vector2& Vector2::operator *=(float a_fScalar)
{
	x *= a_fScalar.x;
	y *= a_fScalar.y;
	return *this;
}
Vector2& Vector2::operator *=(const Vector2& a_v2)
{
	x *= a_v2.x;
	y *= a_v2.y;
	return *this;
}

//\===================================================
//\ Overload Operators for Vector2 Division
//\===================================================
Vector2 Vector2::operator /(float a_fScalar) const
{
	return Vector2(x / a_fScalar.x, y / a_fScalar.y);
}
Vector2 Vector2::operator /(const Vector2& a_v2) const
{
	return Vector2(x / a_v2.x, y / a_v2.y);
}
Vector2& Vector2::operator /=(float a_fScalar)
{
	x /= a_fScalar.x;
	y /= a_fScalar.y;
	return *this;
}
Vector2& Vector2::operator /=(const Vector2& a_v2)
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

}
float Vector2::Magnitude() const
{

}
float Vector2::LengthSquared() const
{

}
float Vector2::MagnitudeSquared() const
{
	
}


Vector2 Vector2::Lerp(Vector2 a_A, Vector2 a_B, float a_t)
{
	return a_t * a_B + (1 - a_t) * a_A;
}

Vector2 QuadBezier(Vector2 a_A, Vector2 a_B, Vector2 a_C, float a_t)
{
	//lerp from the first point to the second
	Vector2 mid1 = lerp(a_A, a_B, a_t);
	//lerp from the second point to the third
	Vector2 mid2 = lerp(a_B, a_C, a_t);

	//return the lerp from the two intermediate points
	return lerp(mid1, mid2, a_t);
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

