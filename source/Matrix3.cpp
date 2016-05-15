#include "Matrix3.h"
#include "Vector3.h"




//\===================================================
//\ Constructors
//\===================================================
Matrix3::Matrix3()
{
	x = 0.f;
	y = 0.f;
	z = 0.f;
}

Matrix3::Matrix3(const float* mat)
{
	x = mat[0];
	y = mat[1];
	z = mat[2];
}

Matrix3::Matrix3(float m_11, float m_12, float m_13, float m_21, float m_22, float m_23, float m_31, float m_32, float m_33)
{

}
Matrix3::Matrix3(Matrix3& a_m3)
{
	x = a_m3.x;
	y = a_m3.y;
	z = a_m3.z;
}
//\===================================================
//\ Destructor
//\===================================================
Matrix3::~Matrix3()
{

}
//\===================================================
//\ Casting Operators
//\===================================================
Matrix3::operator float*()
{

}
Matrix3::operator const float*() const
{

}
//\===================================================
//\ Component Access Operators
//\===================================================
float& Matrix3::operator()(int iRow, int iCol)
{

}
float Matrix3::operator()(int iRow, int iCol) const
{

}
//\===================================================
//\ Cols and Rows Access
//\===================================================
void Matrix3::SetCol(int iCol, const Vector3 vCol)
{

}
void Matrix3::SetRow(int iRow, const Vector3& vRow)
{

}
Vector3	Matrix3::GetCol(int iCol) const
{

}
Vector3 Matrix3::GetRow(int iRow) const
{

}
void Matrix3::GetCol(int iCol, Vector3& vCol) const
{

}
void Matrix3::GetRow(int iRow, Vector3& vRow) const
{

}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Matrix3::operator == (const Matrix3& a_m3) const
{
	return (x == a_m3.x && y == a_m3.y && z == a_m3.z);
}
bool Matrix3::operator != (const Matrix3& a_m3) const
{
	return (x != a_m3.x || y != a_m3.y || z != a_m3.z);
}
//\===================================================
//\ Negative Operator
//\===================================================
const Matrix3 Matrix3::operator - () const
{

}
//\===================================================
//\ Operator Overloads for Addition
//\===================================================
const Matrix3 Matrix3::operator + (const Matrix3& a_m3) const
{
	return;
}
const Matrix3 Matrix3::operator += (const Matrix3& a_m3)
{
	return;
}
//\===================================================
//\ Operator Overloads for Subtraction
//\===================================================
const Matrix3 Matrix3::operator - (const Matrix3& a_m3) const
{
	return;
}
const Matrix3 Matrix3::operator -= (const Matrix3& a_m3)
{
	return;
}
//\===================================================
//\ Operator Overloads for Multiplication
//\===================================================
const Matrix3 Matrix3::operator * (const float a_fScalar) const
{
	return;
}
const Matrix3 operator * (const float a_fScalar, const Matrix3& a_m3)
{
	return;
}
const Matrix3& Matrix3::operator *= (const float a_fScalar)
{
	return;
}
const Vector3 Matrix3::operator * (const Vector3& a_v3) const
{
	return;
}
const Vector3 operator * (const Vector3& a_v3, const Matrix3& a_m3)
{
	return;
}

const Matrix3 Matrix3::operator * (const Matrix3& a_m3) const
{
	return;
}
const Matrix3& Matrix3::operator *= (const Matrix3& a_m3)
{
	return;
}
//\===================================================
//\ Transpose Matrix- Transform from Row to Column
//\===================================================
void Matrix3::Transpose()
{
	
}

void Matrix3::GetTranspose(Matrix3 &a_m3) const
{

}

//\===================================================
//\ Inverse- Get Inverse of the Matrix
//\===================================================
float Matrix3::Determinant() const
{
	return (m_11 * (m_22 * m_33 - m_23 * m_32) +
		m_12 * (m_23 * m_31 - m_21 * m_33) +
		m_13 * (m_21 * m_32 - m_22 * m_31));
}

bool Matrix3::Inverse() const
{
	float fDeterminant = Determinant();
	if (fDeterminant != 0.0f)
	{
		const float fInvDet = Recipf(fDeterminant);

		Matrix3 mat = *this;
		mat.m_11 = (mat.m_22 * mat.m_33 - mat.m_23 * mat.m_32) * fInvDet;
		mat.m_12 = (mat.m_13 * mat.m_32 - mat.m_12 * mat.m_33) * fInvDet;
		mat.m_13 = (mat.m_12 * mat.m_23 - mat.m_13 * mat.m_22) * fInvDet;

		mat.m_21 = (mat.m_23 * mat.m_31 - mat.m_21 * mat.m_33) * fInvDet;
		mat.m_22 = (mat.m_11 * mat.m_33 - mat.m_13 * mat.m_31) * fInvDet;
		mat.m_23 = (mat.m_13 * mat.m_21 - mat.m_11 * mat.m_23) * fInvDet;

		mat.m_31 = (mat.m_21 * mat.m_32 - mat.m_22 * mat.m_31) * fInvDet;
		mat.m_32 = (mat.m_12 * mat.m_31 - mat.m_11 * mat.m_32) * fInvDet;
		mat.m_33 = (mat.m_11 * mat.m_22 - mat.m_12 * mat.m_21) * fInvDet;
		
		return true;
	}
	return false;
}

bool Matrix3::GetInverse(Matrix3 &a_m3) const
{
	{

		return true;
	}
	return false;
}
//\===================================================
//\ Rotation Functions
//\===================================================
void Matrix3::RotateX(float fAngle)
{

}
void Matrix3::RotateY(float fAngle)
{

}
void Matrix3::RotateZ(float fAngle)
{

}
//\===================================================
//\ Orthonormalisation Functions
//\===================================================
void Matrix3::OrthoNormalise()
{

}
void Matrix3::GramSchmidtOrtho()
{

}
//\===================================================
//\ Scale Functionality
//\===================================================
void Matrix3::Scale(const Vector3& a_v3)
{

}
void Matrix3::Scale(float a_fScalar)
{

}
//\===================================================
//\ General Matrix Functions
//\===================================================
void Matrix3::Identity()
{

}
void Matrix3::Zero()
{

}