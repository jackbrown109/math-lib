#include "Matrix4.h"


//\=============================================================================
//\ Constructors
//\=============================================================================
Matrix4::Matrix4()
{

}

Matrix4::Matrix4(const float* mat)
{

}

Matrix4::Matrix4(float m_11, float m_12, float m_13, float m_14,
	float m_21, float m_22, float m_23, float m_24,
	float m_31, float m_32, float m_33, float m_34,
	float m_41, float m_42, float m_43, float m_44)
{

}
Matrix4::Matrix4(const Matrix3 & a_m3)
{

}
Matrix4::Matrix4(const Matrix4& a_m4)
{

}
//\=============================================================================
//\ Destructor
//\=============================================================================
Matrix4::~Matrix4()
{

}
//\=============================================================================
//\ Casting Operators
//\=============================================================================
Matrix4::operator float* ()
{

}
Matrix4::operator const float* () const
{

}
//\=============================================================================
//\ Component Access Operators
//\=============================================================================
float& Matrix4::operator()(int iRow, int iCol)
{

}
float Matrix4::operator()(int iRow, int iCol) const
{
	
}
//\=============================================================================
//\ Component Access/ Retrieval as Vector4
//\=============================================================================
void Matrix4::SetX(const Vector4& a_v4)
{

}
void Matrix4::SetY(const Vector4& a_v4)
{

}
void Matrix4::SetZ(const Vector4& a_v4)
{

}
void Matrix4::SetT(const Vector4& a_v4)
{

}

void Matrix4::GetX(Vector4& a_v4) const
{

}
void Matrix4::GetY(Vector4& a_v4) const
{

}
void Matrix4::GetZ(Vector4& a_v4) const
{

}
void Matrix4::GetT(Vector4& a_v4) const
{

}
//\=============================================================================
//\ Component Access/ Retrieval as Vector3
//\=============================================================================
void Matrix4::SetX(const Vector3& a_v3)
{

}
void Matrix4::SetY(const Vector3& a_v3)
{

}
void Matrix4::SetZ(const Vector3& a_v3)
{

}
void Matrix4::SetT(const Vector3& a_v3)
{

}

void Matrix4::GetX(Vector3& a_v3) const
{

}
void Matrix4::GetY(Vector3& a_v3) const
{

}
void Matrix4::GetZ(Vector3& a_v3) const
{

}
void Matrix4::GetT(Vector3& a_v3) const
{

}
//\=============================================================================
//\ Component Row/Column Access Operators
//\=============================================================================
void Matrix4::SetCol(int iCol, const Vector3& vCol)
{

}
void Matrix4::SetCol(int iCol, const Vector4& vCol)
{

}

void Matrix4::GetCol(int iCol, Vector3& vCol) const
{

}
void Matrix4::GetCol(int iCol, Vector4& vCol) const
{

}

void Matrix4::SetRow(int iRow, const Vector3& vRow)
{

}
void Matrix4::SetRow(int iRow, const Vector4& vRow)
{

}

void Matrix4::GetRow(int iRow, Vector3& vRow) const
{

}
void Matrix4::GetRow(int iRow, Vector4& vRow) const
{

}
//\=============================================================================
//\ Equivalence Operators
//\=============================================================================
bool Matrix4::operator == (const Matrix4& a_m4) const
{
	return (x == a_m4.x && y == a_m4.y && z == a_m4.z && t == a_m4.t);
}
bool Matrix4::operator != (const Matrix4& a_m4) const
{
	return (x != a_m4.x || y != a_m4.y || z != a_m4.z || t != a_m4.t);
}
//\=============================================================================
//\ Neg Operator
//\=============================================================================
const Matrix4 Matrix4::operator - () const
{

}
//\=============================================================================
//\ Operator Overloads for Addition
//\=============================================================================
const Matrix4 Matrix4::operator + (const Matrix4& a_m4) const
{

}
const Matrix4 Matrix4::operator += (const Matrix4& a_m4)
{

}
//\=============================================================================
//\ Operator Overloads for Subtraction
//\=============================================================================
const Matrix4 Matrix4:: operator - (const Matrix4& a_m4) const
{

}
const Matrix4 Matrix4::operator -= (const Matrix4& a_m4)
{

}
//\=============================================================================
//\ Operator Overloads for Multiplication
//\=============================================================================
const Matrix4 Matrix4::operator * (const float a_fScalar) const
{

}
const Matrix4 operator * (const float a_fScalar, const Matrix4& a_m4)
{

}
const Matrix4& Matrix4::operator *= (const float a_fScalar)
{

}

const Vector3 Matrix4::operator * (const Vector3& a_v3) const
{

}
const Vector3 operator * (const Vector3& a_v3, const Matrix4& a_m4)
{

}

const Vector4 Matrix4::operator * (const Vector4& a_v4) const
{

}
const Vector4 operator * (const Vector4& a_v4, const Matrix4& a_m4)
{

}

const Matrix4 Matrix4::operator * (const Matrix4& a_m4) const
{

}
const Matrix4& Matrix4::operator *= (const Matrix4& a_m4)
{

}
//\=============================================================================
//\ Transpose Matrix
//\=============================================================================
void Matrix4::Transpose()
{

}
void Matrix4::GetTranspose(Matrix4 &mat) const
{

}
//\=============================================================================
//\ General Matrix Functions
//\=============================================================================
void Matrix4::Scale(const Vector3& vec) 
{

}
void Matrix4::Scale(float k)
{

}
//\=============================================================================
//\ Orthonormalise
//\=============================================================================
void Matrix4::OrthoNormalise()
{

}
//\=============================================================================
//\ Inverse Matrix Functions
//\=============================================================================
float Matrix4::Determinant() const
{

}
float Matrix4::Determinant3() const
{

}
bool Matrix4::Inverse()
{

}
bool Matrix4::GetInverse(Matrix4 &mat) const
{

}
//\=============================================================================
//\ Matrix Rotation Functions
//\=============================================================================
void Matrix4::RotateX(float fAngle)
{

}
void Matrix4::RotateY(float fAngle)
{

}
void Matrix4::RotateZ(float fAngle)
{

}
//\=============================================================================
//\ General Matrix Functions
//\=============================================================================
void Matrix4::Identity()
{

}
void Matrix4::Zero()
{

}