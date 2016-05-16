#include "mathLib.h"


//\===================================================
//\ Constructors
//\===================================================
Vector4::Vector4() :
	x(0.f), y(0.f), z(0.f), t(1.f)
{

}
Vector4::Vector4(const Vector4& a_v4) :
	x(a_v4.x), y(a_v4.y), z( a_v4.z), t(a_v4.t)
{

}
Vector4::Vector4(const float a_fVal):
	x(a_fVal), y(a_fVal), z(a_fVal), t(a_fVal)
{

}
Vector4::Vector4(float a_x, float a_y, float a_z, float a_t):
	x(a_x), y(a_y), z(a_z), t(a_t)
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
	return static_cast<float*>(&i[0]);
}
Vector4::operator const float* ()const
{
	return static_cast<const float*>(&i[0]);
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
	return Vector4( -x, -y, -z, -t);
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
	return Vector4(a_fScalar * a_v4.x, a_fScalar * a_v4.y, a_fScalar * a_v4.z, a_fScalar * a_v4.t);
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
	return Magnitude();
}			
float Vector4::Magnitude() const
{			
	float m = (x*x) + (y*y) + (z*z) + (t*t);
	return sqrtf(m);
}			
float Vector4::LengthSquared() const
{			
	return (x*x + y*y + z*z + t*t) + (x*x + y*y + z*z + t*t);
}			
float Vector4::MagnitudeSquared() const
{
	return (x*x) + (y*y) + (z*z) + (t*t);
}
//\===================================================
//\ A function to quickly shorten a vector to a desired
//\ length. This function is good with camera controls
//\===================================================
void Vector4::Truncate(float a_fMaxLength)
{
	Normalise();
	x *= a_fMaxLength;
	y *= a_fMaxLength;
	z *= a_fMaxLength;
	
}
//\===================================================
//\ Distance
//\===================================================
float Distance(const Vector4& a_v4A, const Vector4& a_v4B)
{
	Vector4 v4 = a_v4A - a_v4B;
	return v4.Magnitude();

}
float DistanceSquared(const Vector4& a_v4A, const Vector4& a_v4B)
{
	Vector4 v4 = a_v4A - a_v4B;
	return v4.MagnitudeSquared();
}
//\===================================================
//\ Dot Product
//\===================================================
float Vector4::Dot(const Vector4& a_v4)
{
	return (x * a_v4.x + y * a_v4.y + z * a_v4.z, t * a_v4.t);
}

float Dot(const Vector4& a_v4A, const Vector4& a_v4B)
{
	return a_v4A.x * a_v4B.x + a_v4A.y * a_v4B.y + a_v4A.z * a_v4B.z + a_v4A.t * a_v4B.t;
}
//\===================================================
//\ Normalisation
//\===================================================
bool Vector4::IsUnit()const
{
	float m = Magnitude();
	if (m > 1.5f)
	{
		return false;
	}
	return true;
}
void Vector4::Normalise()
{
	float m = Magnitude();
	float Nx = x / m;
	float Ny = y / m;
	float Nz = z / m;
	float Nt = t / m;
	x = Nx, y = Ny, z = Nz, t = Nt;
}
const Vector4 Vector4::GetUnit() const
{
	Vector4 v4(x, y, z, t);
	v4.Normalise();
	return v4;
}
//\===================================================
//\ Cross Product
//\===================================================
const Vector4 Vector4::Cross(const Vector4& a_v4) const
{
	return Vector4(y * a_v4.z - z - a_v4.y, z * a_v4.x - x * a_v4.z, x * a_v4.y - y * a_v4.x, t * a_v4.t - t - a_v4.t);
}
const Vector4 Cross(const Vector4& a_v4A, const Vector4& a_v4B)
{
	return Vector4(a_v4B * a_v4A);
}
//\===================================================
//\ Rotation Functions
//\===================================================
void Vector4::RotateX(float a_fAngle)
{
	float Cos = cosf(a_fAngle);
	float Sin = sinf(a_fAngle);

	Matrix4 TempM(  1, 0, 0, 0,
					0, Cos, -Sin, 0,
					0, Sin, Cos, 0,
					0, 0, 0, 1);

	Vector4 TempV;
	TempV = TempM * *this;
	*this = TempV;
}
void Vector4::RotateY(float a_fAngle)
{
	float Cos = cosf(a_fAngle);
	float Sin = sinf(a_fAngle);

	Matrix4 TempM(  Cos, 0, Sin, 0,
					0, 1, 0, 0, 
					-Sin, 0, Cos, 0,
					0, 0, 0, 1);

	Vector4 TempV;
	TempV = TempM * *this;
	*this = TempV;
}
void Vector4::RotateZ(float a_fAngle)
{
	float Cos = cosf(a_fAngle);
	float Sin = sinf(a_fAngle);

	Matrix4 TempM(  Cos, -Sin, 0, 0,
					Sin, Cos, 0, 0,
					0, 0, 1, 0,
					0, 0, 0, 1);
	Vector4 TempV;
	TempV = TempM * *this;
	*this = TempV;
}
//\===================================================
//\ Other Useful Functions
//\===================================================
void Vector4::Zero()
{
	x = 0;
	y = 0;
	z = 0;
	t = 0;
}
void Vector4::One()
{
	x = 1;
	y = 1;
	z = 1;
	t = 1;
}
float Vector4::Min() const
{
	if (x < y && x < z && x < t)
	{
		return x;
	}
	else if (y < x && y < z && y < t)
	{
		return y;
	}
	else if (z < x && z < y && z < t)
	{
		return z;
	}
	else
	{
		return t;
	}
}
float Vector4::Max() const
{
	if (x > y && x > z && x > t)
	{
		return x;
	}
	else if (y > x && y > z && y > t)
	{
		return y;
	}
	else if (z > x && z > y && z > t)
	{
		return z;
	}
	else
	{
		return t;
	}
}