#include "Matrix3.h"
#include "Vector3.h"
#include "mathLib.h"




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
	return m[iRow][iCol];
}
float Matrix3::operator()(int iRow, int iCol) const
{
	return m[iRow][iCol];
}
//\===================================================
//\ Cols and Rows Access
//\===================================================
void Matrix3::SetCol(int iCol, const Vector3 vCol)
{
	m[0][iCol] = vCol.x;
	m[1][iCol] = vCol.y;
	m[2][iCol] = vCol.z;
}
void Matrix3::SetRow(int iRow, const Vector3& vRow)
{
	m[0][iRow] = vRow.x;
	m[1][iRow] = vRow.y;
	m[2][iRow] = vRow.z;
}
Vector3	Matrix3::GetCol(int iCol) const
{
	return Vector3(m[0][iCol], m[1][iCol], m[2][iCol]);
}
Vector3 Matrix3::GetRow(int iRow) const
{
	return Vector3(m[0][iRow], m[1][iRow], m[2][iRow]);
}
void Matrix3::GetCol(int iCol, Vector3& vCol) const
{
	vCol.Set(m[0][iCol], m[1][iCol], m[2][iCol]);
}
void Matrix3::GetRow(int iRow, Vector3& vRow) const
{
	vRow.Set(m[0][iRow], m[1][iRow], m[2][iRow]);
}
//\===================================================
//\ Equivalence Operators
//\===================================================
bool Matrix3::operator == (const Matrix3& a_m3) const
{
	return ((m_11 == a_m3.m_11) && (m_12 == a_m3.m_12) && (m_13 == a_m3.m_13) &&
			(m_21 == a_m3.m_21) && (m_22 == a_m3.m_22) && (m_23 == a_m3.m_23) &&
			(m_31 == a_m3.m_31) && (m_32 == a_m3.m_32) && (m_33 == a_m3.m_33));
}
bool Matrix3::operator != (const Matrix3& a_m3) const
{
	return ((m_11 != a_m3.m_11) || (m_12 != a_m3.m_12) || (m_13 != a_m3.m_13) ||
			(m_21 != a_m3.m_21) || (m_22 != a_m3.m_22) || (m_23 != a_m3.m_23) ||
			(m_31 != a_m3.m_31) || (m_32 != a_m3.m_32) || (m_33 != a_m3.m_33));
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
	return Matrix3( m_11 + a_m3.m_11,
					m_12 + a_m3.m_12,
					m_13 + a_m3.m_13,
					m_21 + a_m3.m_21,
					m_22 + a_m3.m_22,
					m_23 + a_m3.m_23,
					m_31 + a_m3.m_31,
					m_32 + a_m3.m_32,
					m_33 + a_m3.m_33);
}
const Matrix3 Matrix3::operator += (const Matrix3& a_m3)
{
					m_11 += a_m3.m_11;
					m_12 += a_m3.m_12;
					m_13 += a_m3.m_13;
					m_21 += a_m3.m_21;
					m_22 += a_m3.m_22;
					m_23 += a_m3.m_23;
					m_31 += a_m3.m_31;
					m_32 += a_m3.m_32;
					m_33 += a_m3.m_33;
					return *this;
}
//\===================================================
//\ Operator Overloads for Subtraction
//\===================================================
const Matrix3 Matrix3::operator - (const Matrix3& a_m3) const
{
	return Matrix3( m_11 - a_m3.m_11,
					m_12 - a_m3.m_12,
					m_13 - a_m3.m_13,
					m_21 - a_m3.m_21,
					m_22 - a_m3.m_22,
					m_23 - a_m3.m_23,
					m_31 - a_m3.m_31,
					m_32 - a_m3.m_32,
					m_33 - a_m3.m_33);
}
const Matrix3 Matrix3::operator -= (const Matrix3& a_m3)
{
					m_11 += a_m3.m_11;
					m_12 += a_m3.m_12;
					m_13 += a_m3.m_13;
					m_21 += a_m3.m_21;
					m_22 += a_m3.m_22;
					m_23 += a_m3.m_23;
					m_31 += a_m3.m_31;
					m_32 += a_m3.m_32;
					m_33 += a_m3.m_33;
					return *this;
}
//\===================================================
//\ Operator Overloads for Multiplication
//\===================================================
const Matrix3 Matrix3::operator * (const float a_fScalar) const
{
	return Matrix3( m_11 * a_fScalar, m_12 * a_fScalar, m_13 * a_fScalar,
					m_21 * a_fScalar, m_22 * a_fScalar, m_23 * a_fScalar,
					m_31 * a_fScalar, m_32 * a_fScalar, m_33 * a_fScalar);
}
const Matrix3 operator * (const float a_fScalar, const Matrix3& a_m3)
{
					
}
const Matrix3& Matrix3::operator *= (const float a_fScalar)
{
					m_11 *= a_fScalar;
					m_12 *= a_fScalar;
					m_13 *= a_fScalar;
					m_21 *= a_fScalar;
					m_22 *= a_fScalar;
					m_23 *= a_fScalar;
					m_31 *= a_fScalar;
					m_32 *= a_fScalar;
					m_33 *= a_fScalar;
					return *this;
}
const Vector3 Matrix3::operator * (const Vector3& a_v3) const
{
	return Vector3( a_v3.x * m[0][0] + a_v3.y * m[0][1] + a_v3.z * m[0][2],
					a_v3.x * m[1][0] + a_v3.y * m[1][1] + a_v3.z * m[1][2], 
					a_v3.x * m[2][0] + a_v3.y * m[2][1] + a_v3.z * m[2][2]);
}
const Vector3 operator * (const Vector3& a_v3, const Matrix3& a_m3)
{
	return;
}

const Matrix3 Matrix3::operator * (const Matrix3& a_m3) const
{
	return Matrix3(	m_11 * a_m3.m_11 + m_12 * a_m3.m_21 + m_13 * a_m3.m_31,
					m_11 * a_m3.m_12 + m_12 * a_m3.m_22 + m_13 * a_m3.m_32,
					m_11 * a_m3.m_13 + m_12 * a_m3.m_23 + m_13 * a_m3.m_33,

					m_21 * a_m3.m_11 + m_22 * a_m3.m_21 + m_23 * a_m3.m_31,
					m_21 * a_m3.m_12 + m_22 * a_m3.m_22 + m_23 * a_m3.m_32,
					m_21 * a_m3.m_13 + m_22 * a_m3.m_23 + m_23 * a_m3.m_33,

					m_31 * a_m3.m_11 + m_32 * a_m3.m_21 + m_33 * a_m3.m_31,
					m_31 * a_m3.m_12 + m_32 * a_m3.m_22 + m_33 * a_m3.m_32,
					m_31 * a_m3.m_13 + m_32 * a_m3.m_23 + m_33 * a_m3.m_33);
}
const Matrix3& Matrix3::operator *= (const Matrix3& a_m3)
{
		m_11 *= a_m3.m_11;
		m_12 *= a_m3.m_12;
		m_13 *= a_m3.m_13;
		m_21 *= a_m3.m_21;
		m_22 *= a_m3.m_22;
		m_23 *= a_m3.m_23;
		m_31 *= a_m3.m_31;
		m_32 *= a_m3.m_32;
		m_33 *= a_m3.m_33;
}
//\===================================================
//\ Transpose Matrix- Transform from Row to Column
//\===================================================
void Matrix3::Transpose()
{
	float   h = m_12;
			m_12 = m_21;
			m_21 = h;

	float   k = m_31;
			m_13 = m_31;
			m_31 = k;

	float   f = m_23;
			m_32 = m_23;
			m_23 = f;
}

void Matrix3::GetTranspose(Matrix3 &a_m3)
{
	Transpose();

		a_m3.m_11 = m_11;
		a_m3.m_12 = m_12;
		a_m3.m_13 = m_13;
		a_m3.m_21 = m_21;
		a_m3.m_22 = m_22;
		a_m3.m_23 = m_23;
		a_m3.m_31 = m_31;
		a_m3.m_32 = m_32;
		a_m3.m_33 = m_33;
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
		const float fInvDet = powf(fDeterminant, -1.f);

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
	Matrix3 mm = a_m3;
	return false;
}
//\===================================================
//\ Rotation Functions
//\===================================================
void Matrix3::RotateX(float fAngle)
{
	m_11 = 1.0f,			 m_12 = 0.f,					 m_13 = 0.f;
	m_21 = 0.f,				 m_22 = cosf(fAngle),			 m_23 = sinf(fAngle);
	m_31 = 0.f,				 m_32 = -sinf(fAngle),			 m_33 = cosf(fAngle);
}
void Matrix3::RotateY(float fAngle)
{
	m_11 = cosf(fAngle),	 m_12 = 0.f,					 m_13 = -sinf(fAngle);
	m_21 = 0.f,				 m_22 = 1.0f,					 m_23 = 0.f;
	m_31 = sinf(fAngle),	 m_32 = 0.f,					 m_33 = cosf(fAngle);
}
void Matrix3::RotateZ(float fAngle)
{
	m_11 = cosf(fAngle),	 m_12 = sinf(fAngle),			 m_13 = 0.f;
	m_21 = -sinf(fAngle),	 m_22 = cosf(fAngle),			 m_23 = 0.f;
	m_31 = 0.f,				 m_32 = 0.f,					 m_33 = 1.0f;
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
	  ( m_11 * a_v3.x, m_12 * a_v3.x, m_13 * a_v3.x,
		m_21 * a_v3.y, m_22 * a_v3.y, m_23 * a_v3.y,
		m_31 * a_v3.z, m_32 * a_v3.z, m_33 * a_v3.z);
}
void Matrix3::Scale(float a_fScalar)
{
	m_11 = a_fScalar,	 m_12 = 0.f,			 m_13 = 0.f;
	m_21 = 0.f,			 m_22 = a_fScalar,		 m_23 = 0.f;
	m_31 = 0.f,			 m_32 = 0.f,			 m_33 = a_fScalar;
}
//\===================================================
//\ General Matrix Functions
//\===================================================
void Matrix3::Identity()
{
	Matrix3(1.f, 0.f, 0.f,
			0.f, 1.f, 0.f,
			0.f, 0.f, 1.f);
}
void Matrix3::Zero()
{
	Matrix3(0.f, 0.f, 0.f,
		0.f, 0.f, 0.f,
		0.f, 0.f, 0.f);
}