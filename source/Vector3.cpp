#include "mathLib.h"

const Vector3 Vector3::ONE = Vector3(1.f);
			  		 
const Vector3 Vector3::ZERO = Vector3(0.f);
			  		
const Vector3 Vector3::AXIS_X = Vector3(1.f, 0.f, 0.f);
			  		 
const Vector3 Vector3::AXIS_Y = Vector3(0.f, 1.f, 0.f);
			  		 
const Vector3 Vector3::AXIS_Z = Vector3(0.f, 0.f, 1.f);


//\===================================================
//\ Constructors
//\===================================================
Vector3::Vector3() :
	x(0.f), y(0.f), z(0.f)
{
	
}
Vector3::Vector3(const Vector3& a_v3) :
	x(a_v3.x), y(a_v3.y), z(a_v3.z)
{
	
}
Vector3::Vector3(const float a_fVal) :
	x(a_fVal), y(a_fVal), z(a_fVal)
{

}
Vector3::Vector3(float a_x, float a_y, float a_z) :
	x(a_x), y(a_y), z(a_z)
{
	
}


Vector3::Vector3(const Vector2& a_v2, float a_z) :
	x(a_v2.x), y(a_v2.y), z(a_z)
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
	return static_cast<float*>(&i[0]);
}
Vector3::operator const	float*() const
{
	return static_cast<const float*>(&i[0]);
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
	return Vector3(a_fScalar * a_v3.x, a_fScalar * a_v3.y, a_fScalar * a_v3.z);
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
	return Magnitude();
}
float Vector3::Magnitude() const
{
	float m = (x*x) + (y*y) + (z*z);
	return sqrtf(m);
}
float Vector3::LengthSquared() const
{
	return (x*x + y*y + z*z) + (x*x + y*y + z*z);
}
float Vector3::MagnitudeSquared() const
{
	return (x*x) + (y*y) + (z*z);
}
//\===================================================
//\ A function to quickly shorten a vector to a desired
//\ length. This function is good with camera controls
//\===================================================
void Vector3::Truncate(float a_fMaxLength)
{
	Normalise();
	x *= a_fMaxLength;
	y *= a_fMaxLength;
	z *= a_fMaxLength;
}
//\===================================================
//\ Distance
//\===================================================
float Distance(const Vector3& a_v3A, const Vector3& a_v3B)
{
	Vector3 v3 = a_v3A - a_v3B;
	return v3.Magnitude();
}
float DistanceSquared(const Vector3& a_v3A, const Vector3& a_v3B)
{
	Vector3 v3 = a_v3A - a_v3B;
	return v3.MagnitudeSquared();
}
//\===================================================
//\ Dot Product
//\===================================================
float Vector3::Dot(const Vector3& a_v3)
{
	return (x * a_v3.x + y * a_v3.y + z * a_v3.z);
}
float Dot(const Vector3& a_v3A, const Vector3& a_v3B)
{
	return a_v3A.x * a_v3B.x + a_v3A.y * a_v3B.y + a_v3A.z * a_v3B.z;
}
//\===================================================
//\ Normalisation
//\===================================================
bool Vector3::IsUnit()const
{
	float m = Magnitude();
	if (m > 1.5f)
	{
		return false;
	}
	return true;
}
void Vector3::Normalise()
{
	float m = Magnitude();
	float Nx = x / m;
	float Ny = y / m;
	float Nz = z / m;
	x = Nx, y = Ny, z = Nz;
}
const Vector3 Vector3::GetUnit() const
{
	Vector3 v3(x, y, z);
	v3.Normalise();
	return v3;
}
//\===================================================
//\ Cross Product
//\===================================================
const Vector3 Vector3::Cross(const Vector3& a_v3) const
{
	return Vector3(y * a_v3.z - z - a_v3.y, z * a_v3.x - x * a_v3.z, x * a_v3.y - y * a_v3.x);
}
const Vector3 Cross(const Vector3& a_v3A, const Vector3& a_v3B)
{
	return Vector3(a_v3B * a_v3A);
}
//\===================================================
//\ Rotation Functions
//\===================================================
void Vector3::RotateX(float a_fAngle)
{
	float Cos = cosf(a_fAngle);
	float Sin = sinf(a_fAngle);

	Matrix3 TempM(  1, 0, 0,
					0, Cos, -Sin,
					0, Sin, Cos);

	Vector3 TempV;
	TempV = TempM * *this;
	*this = TempV;
}
void Vector3::RotateY(float a_fAngle)
{
	float Cos = cosf(a_fAngle);
	float Sin = sinf(a_fAngle);

	Matrix3 TempM(  Cos, 0, Sin,
					0, 1, 0,
					-Sin, 0, Cos);

	Vector3 TempV;
	TempV = TempM * *this;
	*this = TempV;
}
void Vector3::RotateZ(float a_fAngle)
{
	float Cos = cosf(a_fAngle);
	float Sin = sinf(a_fAngle);

	Matrix3 TempM(  Cos, -Sin, 0,
					Sin, Cos, 0,
					0, 0, 1);
	Vector3 TempV;
	TempV = TempM * *this;
	*this = TempV;
}
//\===================================================
//\ Other Useful Functions
//\===================================================
void Vector3::Zero()
{
	x = 0;
	y = 0;
	z = 0;
}
void Vector3::One()
{
	x = 1;
	y = 1;
	z = 1;
}

float Vector3::Min() const
{
	if (x < y && x < z)
	{
		return x;
	}
	else if (y < x && y < z)
	{
		return y;
	}
	else
	{
		return z;
	}
}
float Vector3::Max() const
{
	if (x > y && x > z)
	{
		return x;
	}
	else if (y > x && y > z)
	{
		return y;
	}
	else
	{
		return z;
	}
}