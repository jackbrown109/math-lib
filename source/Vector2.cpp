
#include "Vector2.h"

CVector2::Vector2()
{
	x = 0.f;
	y = 0.f;
}

CVector2::Vector2(float a_x, float a_y)
{
	x = a_x;
	y = a_y;
}

CVector2::Vector2(const CVector2& a_v2)
{
	x = a_v2.x;
	y = a_v2.y;
}

CVector2::~CVector2()
{

}

CVector2 Vector2::operator +(const CVector2& a_v2) const
{
	return Vector2(x + a_v2.x, y + a_v2.y);
}

CVector2& Vector2::operator +=(const CVector2& a_v2)
{
	x += a_v2.x;
	y += a_v2.y;
	return *this;
}

bool CVector2::operator ==(const CVector2& a_v2) const
{
	return (x == a_v2.x && y == a_v2.y);
}

bool CVector2::operator !=(const CVector2& a_v2) const
{
	return (x != a_v2.x || y != a_v2.y);
}

CVector2 lerp(CVector2 a_A, CVector2 a_B, float a_t)
{
	return a_t * a_B + (1 - a_t) * a_A;
}

CVector2 QuadBezier(CVector2 a_A, CVector2 a_B, CVector2 a_C, float a_t)
{
	//lerp from the first point to the second
	CVector2 mid1 = lerp(a_A, a_B, a_t);
	//lerp from the second point to the third
	CVector2 mid2 = lerp(a_B, a_C, a_t);

	//return the lerp from the two intermediate points
	return lerp(mid1, mid2, a_t);
}

CVector2 HermiteSpline(Vector2 point0, Vector2 point1, Vector2 tangent0, Vector2 tangent1, float t)
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

CVector2 CardinalSpline(Vector2 point0, Vector2 point1, Vector2 point2, float a, float t)
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

