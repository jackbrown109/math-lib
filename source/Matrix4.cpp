#include "mathLib.h"

const Matrix4 Matrix4::ONE = Matrix4(1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f, 1.f);
const Matrix4 Matrix4::ZERO = Matrix4(0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f, 0.f);
const Matrix4 Matrix4::IDENTITY = Matrix4(1.f, 0.f, 0.f, 0.f, 0.f, 1.f, 0.f, 0.f, 0.f, 0.f, 1.f, 0.f, 0.f, 0.f, 0.f, 1.f);

//\=============================================================================
//\ Constructors
//\=============================================================================
Matrix4::Matrix4() : 
	m_11(1.f), m_12(0.f), m_13(0.f), m_14(0.f),
	m_21(0.f), m_22(1.f), m_23(0.f), m_24(0.f),
	m_31(0.f), m_32(0.f), m_33(1.f), m_34(0.f),
	m_41(0.f), m_42(0.f), m_43(0.f), m_44(1.f)
{
	
}

Matrix4::Matrix4(const float* mat) :

	m_11(mat[0]), m_12(mat[1]), m_13(mat[2]), m_14(mat[3]),
	m_21(mat[4]), m_22(mat[5]), m_23(mat[6]), m_24(mat[7]),
	m_31(mat[8]), m_32(mat[9]), m_33(mat[10]), m_34(mat[11]),
	m_41(mat[12]), m_42(mat[13]), m_43(mat[14]), m_44(mat[15])
{
	
}

Matrix4::Matrix4(float a_11, float a_12, float a_13, float a_14,
				float a_21, float a_22, float a_23, float a_24,
				float a_31, float a_32, float a_33, float a_34,
				float a_41, float a_42, float a_43, float a_44) :

	m_11(a_11), m_12(a_12), m_13(a_13), m_14(a_14),
	m_21(a_21), m_22(a_22), m_23(a_23), m_24(a_24),
	m_31(a_31), m_32(a_32), m_33(a_33), m_34(a_34),
	m_41(a_41), m_42(a_42), m_43(a_43), m_44(a_44)
{

}
Matrix4::Matrix4(const Matrix3 & a_m3) :
	m_11(a_m3.m_11), m_12(a_m3.m_12), m_13(a_m3.m_13), m_14(0.f),
	m_21(a_m3.m_21), m_22(a_m3.m_22), m_23(a_m3.m_23), m_24(0.f),
	m_31(a_m3.m_31), m_32(a_m3.m_32), m_33(a_m3.m_33), m_34(0.f),
	m_41(0.f),		 m_42(0.f),		  m_43(0.f),	   m_44(1.f)
{
	
}
Matrix4::Matrix4(const Matrix4& a_m4) :
	m_11(a_m4.m_11), m_12(a_m4.m_12), m_13(a_m4.m_13), m_14(a_m4.m_14),
	m_21(a_m4.m_21), m_22(a_m4.m_22), m_23(a_m4.m_23), m_24(a_m4.m_24),
	m_31(a_m4.m_31), m_32(a_m4.m_32), m_33(a_m4.m_33), m_34(a_m4.m_34),
	m_41(a_m4.m_41), m_42(a_m4.m_42), m_43(a_m4.m_43), m_44(a_m4.m_44)
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
	return static_cast<float*>(&m_11);

}
Matrix4::operator const float* () const
{
	return static_cast<const float*>(&m_11);
}
//\=============================================================================
//\ Component Access Operators
//\=============================================================================
float& Matrix4::operator()(int iRow, int iCol)
{
	return m[iRow][iCol];
}
float Matrix4::operator()(int iRow, int iCol) const
{
	return m[iRow][iCol];
}
//\=============================================================================
//\ Component Access
//\=============================================================================

/*
Vector4& Matrix4::x(void)
{
	
}
Vector4& Matrix4::y(void)
{

}
Vector4& Matrix4::z(void)
{

}
Vector4& Matrix4::t(void)
{

}

const Vector4& Matrix4::x(void) const
{

}
const Vector4& Matrix4::y(void) const
{

}
const Vector4& Matrix4::z(void) const
{

}
const Vector4& Matrix4::t(void) const
{

}
*/

//\=============================================================================
//\ Component Access/ Retrieval as Vector4
//\=============================================================================
void Matrix4::SetX(const Vector4& a_v4)
{
	a_v4.Get(m[0][0], m[0][1], m[0][2], m[0][3]);
}

void Matrix4::SetY(const Vector4& a_v4)
{
	a_v4.Get(m[1][0], m[1][1], m[1][2], m[1][3]);
}
void Matrix4::SetZ(const Vector4& a_v4)
{
	a_v4.Get(m[2][0], m[2][1], m[2][2], m[2][3]);
}
void Matrix4::SetT(const Vector4& a_v4)
{
	a_v4.Get(m[3][0], m[3][1], m[3][2], m[3][3]);
}

void Matrix4::GetX(Vector4& a_v4) const
{
	a_v4.Set(m[0][0], m[0][1], m[0][2], m[0][3]);
}
void Matrix4::GetY(Vector4& a_v4) const
{
	a_v4.Set(m[1][0], m[1][1], m[1][2], m[1][3]);
}
void Matrix4::GetZ(Vector4& a_v4) const
{
	a_v4.Set(m[2][0], m[2][1], m[2][2], m[2][3]);
}
void Matrix4::GetT(Vector4& a_v4) const
{
	a_v4.Set(m[3][0], m[3][1], m[3][2], m[3][3]);
}
//\=============================================================================
//\ Component Access/ Retrieval as Vector3
//\=============================================================================
void Matrix4::SetX(const Vector3& a_v3)
{
	SetRow(0, a_v3);
}
void Matrix4::SetY(const Vector3& a_v3)
{
	SetRow(1, a_v3);
}
void Matrix4::SetZ(const Vector3& a_v3)
{
	SetRow(2, a_v3);
}
void Matrix4::SetT(const Vector3& a_v3)
{
	SetRow(3, a_v3);
}

void Matrix4::GetX(Vector3& a_v3) const
{
	GetRow(0, a_v3);
}
void Matrix4::GetY(Vector3& a_v3) const
{
	GetRow(1, a_v3);
}
void Matrix4::GetZ(Vector3& a_v3) const
{
	GetRow(2, a_v3);
}
void Matrix4::GetT(Vector3& a_v3) const
{
	GetRow(3, a_v3);
}
//\=============================================================================
//\ Component Row/Column Access Operators
//\=============================================================================
void Matrix4::SetCol(int iCol, const Vector3& vCol)
{
	m[0][iCol] = vCol.x;
	m[1][iCol] = vCol.y;
	m[2][iCol] = vCol.z;
	m[3][iCol] = 0.f;
}
void Matrix4::SetCol(int iCol, const Vector4& vCol)
{
	m[0][iCol] = vCol.x;
	m[1][iCol] = vCol.y;
	m[2][iCol] = vCol.z;
	m[3][iCol] = vCol.t;
}

void Matrix4::GetCol(int iCol, Vector3& vCol) const
{
	vCol.Set(m[0][iCol], m[1][iCol], m[2][iCol]);
}
void Matrix4::GetCol(int iCol, Vector4& vCol) const
{
	vCol.Set(m[0][iCol], m[1][iCol], m[2][iCol], m[3][iCol]);
}

void Matrix4::SetRow(int iRow, const Vector3& vRow)
{
	m[iRow][0] = vRow.x;
	m[iRow][1] = vRow.y;
	m[iRow][2] = vRow.z;
	m[iRow][3] = 0.f;
}
void Matrix4::SetRow(int iRow, const Vector4& vRow)
{
	m[iRow][0] = vRow.x;
	m[iRow][1] = vRow.y;
	m[iRow][2] = vRow.z;
	m[iRow][3] = vRow.t;
}

void Matrix4::GetRow(int iRow, Vector3& vRow) const
{
	vRow.Set(m[iRow][0],
		m[iRow][1],
		m[iRow][2]);
}
void Matrix4::GetRow(int iRow, Vector4& vRow) const
{
	vRow.Set(m[iRow][0], 
		m[iRow][1], 
		m[iRow][2],
		m[iRow][3]);
}
//\=============================================================================
//\ Equivalence Operators
//\=============================================================================
bool Matrix4::operator == (const Matrix4& a_m4) const
{
	return  (m_11 == a_m4.m_11) && (m_12 == a_m4.m_12) && (m_13 == a_m4.m_13) && (m_14 == a_m4.m_14) &&
			(m_21 == a_m4.m_21) && (m_22 == a_m4.m_22) && (m_23 == a_m4.m_23) && (m_24 == a_m4.m_24) &&
			(m_31 == a_m4.m_31) && (m_32 == a_m4.m_32) && (m_33 == a_m4.m_33) && (m_34 == a_m4.m_34) &&
			(m_41 == a_m4.m_41) && (m_42 == a_m4.m_42) && (m_43 == a_m4.m_43) && (m_44 == a_m4.m_44);
}
bool Matrix4::operator != (const Matrix4& a_m4) const
{
	return  (m_11 != a_m4.m_11) || (m_12 != a_m4.m_12) || (m_13 != a_m4.m_13) || (m_14 != a_m4.m_14) ||
			(m_21 != a_m4.m_21) || (m_22 != a_m4.m_22) || (m_23 != a_m4.m_23) || (m_24 != a_m4.m_24) ||
			(m_31 != a_m4.m_31) || (m_32 != a_m4.m_32) || (m_33 != a_m4.m_33) || (m_34 != a_m4.m_34) ||
			(m_41 != a_m4.m_41) || (m_42 != a_m4.m_42) || (m_43 != a_m4.m_43) || (m_44 != a_m4.m_44);
}
//\=============================================================================
//\ Operator Overloads for Addition
//\=============================================================================
const Matrix4 Matrix4::operator + (const Matrix4& a_m4) const
{
	return Matrix4( m_11 + a_m4.m_11,
					m_12 + a_m4.m_12,
					m_13 + a_m4.m_13,
					m_14 + a_m4.m_14,
					m_21 + a_m4.m_21,
					m_22 + a_m4.m_22,
					m_23 + a_m4.m_23,
					m_24 + a_m4.m_24,
					m_31 + a_m4.m_31,
					m_32 + a_m4.m_32,
					m_33 + a_m4.m_33,
					m_34 + a_m4.m_34,
					m_41 + a_m4.m_41,
					m_42 + a_m4.m_42,
					m_43 + a_m4.m_43,
					m_44 + a_m4.m_44);
}
const Matrix4 Matrix4::operator += (const Matrix4& a_m4)
{
					m_11 += a_m4.m_11;
					m_12 += a_m4.m_12;
					m_13 += a_m4.m_13;
					m_14 += a_m4.m_14;
					m_21 += a_m4.m_21;
					m_22 += a_m4.m_22;
					m_23 += a_m4.m_23;
					m_24 += a_m4.m_24;
					m_31 += a_m4.m_31;
					m_32 += a_m4.m_32;
					m_33 += a_m4.m_33;
					m_34 += a_m4.m_34;
					m_41 += a_m4.m_41;
					m_42 += a_m4.m_42;
					m_43 += a_m4.m_43;
					m_44 += a_m4.m_44;
					return *this;
}
//\=============================================================================
//\ Operator Overloads for Subtraction
//\=============================================================================
const Matrix4 Matrix4:: operator - (const Matrix4& a_m4) const
{
	return Matrix4( m_11 - a_m4.m_11,
					m_12 - a_m4.m_12,
					m_13 - a_m4.m_13,
					m_14 - a_m4.m_14,
					m_21 - a_m4.m_21,
					m_22 - a_m4.m_22,
					m_23 - a_m4.m_23,
					m_24 - a_m4.m_24,
					m_31 - a_m4.m_31,
					m_32 - a_m4.m_32,
					m_33 - a_m4.m_33,
					m_34 - a_m4.m_34,
					m_41 - a_m4.m_41,
					m_42 - a_m4.m_42,
					m_43 - a_m4.m_43,
					m_44 - a_m4.m_44);
}
const Matrix4 Matrix4::operator -= (const Matrix4& a_m4)
{
					m_11 -= a_m4.m_11;
					m_12 -= a_m4.m_12;
					m_13 -= a_m4.m_13;
					m_14 -= a_m4.m_14;
					m_21 -= a_m4.m_21;
					m_22 -= a_m4.m_22;
					m_23 -= a_m4.m_23;
					m_24 -= a_m4.m_24;
					m_31 -= a_m4.m_31;
					m_32 -= a_m4.m_32;
					m_33 -= a_m4.m_33;
					m_34 -= a_m4.m_34;
					m_41 -= a_m4.m_41;
					m_42 -= a_m4.m_42;
					m_43 -= a_m4.m_43;
					m_44 -= a_m4.m_44;
					return *this;
}
//\=============================================================================
//\ Operator Overloads for Multiplication
//\=============================================================================
const Matrix4 Matrix4::operator * (const float a_fScalar) const
{
	return Matrix4( m_11 * a_fScalar, m_12 * a_fScalar, m_13 * a_fScalar, m_14 * a_fScalar,
					m_21 * a_fScalar, m_22 * a_fScalar, m_23 * a_fScalar, m_24 * a_fScalar,
					m_31 * a_fScalar, m_32 * a_fScalar, m_33 * a_fScalar, m_34 * a_fScalar,
					m_41 * a_fScalar, m_42 * a_fScalar, m_43 * a_fScalar, m_44 * a_fScalar);
}
const Matrix4 operator * (const float a_fScalar, const Matrix4& a_m4)
{
	return Matrix4(a_m4 * a_fScalar);
}
const Matrix4& Matrix4::operator *= (const float a_fScalar)
{
					m_11 *= a_fScalar;
					m_12 *= a_fScalar;
					m_13 *= a_fScalar;
					m_14 *= a_fScalar;
					m_21 *= a_fScalar;
					m_22 *= a_fScalar;
					m_23 *= a_fScalar;
					m_24 *= a_fScalar;
					m_31 *= a_fScalar;
					m_32 *= a_fScalar;
					m_33 *= a_fScalar;
					m_34 *= a_fScalar;
					m_41 *= a_fScalar;
					m_42 *= a_fScalar;
					m_43 *= a_fScalar;
					m_44 *= a_fScalar;
					return *this;
}


const Vector4 Matrix4::operator * (const Vector4& a_v4) const
{
	return Vector4( a_v4.x * m[0][0] + a_v4.y * m[0][1] + a_v4.z * m[0][2] + a_v4.t * m[0][3],
					a_v4.x * m[1][0] + a_v4.y * m[1][1] + a_v4.z * m[1][2] + a_v4.t * m[1][3],
					a_v4.x * m[2][0] + a_v4.y * m[2][1] + a_v4.z * m[2][2] + a_v4.t * m[2][3],
					a_v4.x * m[3][0] + a_v4.y * m[3][1] + a_v4.z * m[3][2] + a_v4.t * m[3][3]);
}
const Vector4 operator * (const Vector4& a_v4, const Matrix4& a_m4)
{
	return Vector4(a_m4 * a_v4);
}

const Matrix4 Matrix4::operator * (const Matrix4& a_m4) const
{
	return Matrix4( m_11 * a_m4.m_11 + m_12 * a_m4.m_21 + m_13 * a_m4.m_31 + m_14 * a_m4.m_41,
					m_11 * a_m4.m_12 + m_12 * a_m4.m_22 + m_13 * a_m4.m_32 + m_14 * a_m4.m_42,
					m_11 * a_m4.m_13 + m_12 * a_m4.m_23 + m_13 * a_m4.m_33 + m_14 * a_m4.m_43,
					m_11 * a_m4.m_14 + m_12 * a_m4.m_24 + m_13 * a_m4.m_34 + m_14 * a_m4.m_44,

					m_21 * a_m4.m_11 + m_22 * a_m4.m_21 + m_23 * a_m4.m_31 + m_24 * a_m4.m_41,
					m_21 * a_m4.m_12 + m_22 * a_m4.m_22 + m_23 * a_m4.m_32 + m_24 * a_m4.m_42,
					m_21 * a_m4.m_13 + m_22 * a_m4.m_23 + m_23 * a_m4.m_33 + m_24 * a_m4.m_43,
					m_21 * a_m4.m_14 + m_22 * a_m4.m_24 + m_23 * a_m4.m_34 + m_24 * a_m4.m_44,

					m_31 * a_m4.m_11 + m_32 * a_m4.m_21 + m_33 * a_m4.m_31 + m_24 * a_m4.m_41,
					m_31 * a_m4.m_12 + m_32 * a_m4.m_22 + m_33 * a_m4.m_32 + m_24 * a_m4.m_42,
					m_31 * a_m4.m_13 + m_32 * a_m4.m_23 + m_33 * a_m4.m_33 + m_24 * a_m4.m_43,
					m_31 * a_m4.m_14 + m_32 * a_m4.m_24 + m_33 * a_m4.m_34 + m_24 * a_m4.m_44,

					m_41 * a_m4.m_11 + m_42 * a_m4.m_21 + m_43 * a_m4.m_31 + m_44 * a_m4.m_41,
					m_41 * a_m4.m_12 + m_42 * a_m4.m_22 + m_43 * a_m4.m_32 + m_44 * a_m4.m_42,
					m_41 * a_m4.m_13 + m_42 * a_m4.m_23 + m_43 * a_m4.m_33 + m_44 * a_m4.m_43,
					m_41 * a_m4.m_14 + m_42 * a_m4.m_24 + m_43 * a_m4.m_34 + m_44 * a_m4.m_44);
}
const Matrix4& Matrix4::operator *= (const Matrix4& a_m4)
{
					m_11 *= a_m4.m_11;
					m_12 *= a_m4.m_12;
					m_13 *= a_m4.m_13;
					m_14 *= a_m4.m_14;
					m_21 *= a_m4.m_21;
					m_22 *= a_m4.m_22;
					m_23 *= a_m4.m_23;
					m_24 *= a_m4.m_24;
					m_31 *= a_m4.m_31;
					m_32 *= a_m4.m_32;
					m_33 *= a_m4.m_33;
					m_34 *= a_m4.m_34;
					m_41 *= a_m4.m_41;
					m_42 *= a_m4.m_42;
					m_43 *= a_m4.m_43;
					m_44 *= a_m4.m_44;
					return *this;
}
//\=============================================================================
//\ Transpose Matrix
//\=============================================================================
void Matrix4::Transpose()
{
	float   k = 0.f;
	k = m_12;
	m_12 = m_21;
	m_21 = k;

	k = m_13;
	m_13 = m_31;
	m_31 = k;

	k = m_14;
	m_14 = m_41;
	m_41 = k;
	
	k = m_32;
	m_32 = m_23;
	m_23 = k;

	k = m_24;
	m_24 = m_42;
	m_42 = k;

	k = m_34;
	m_34 = m_43;
	m_43 = k;


}
void Matrix4::GetTranspose(Matrix4 &mat) const
{
	mat.Transpose();
}
//\=============================================================================
//\ General Matrix Functions
//\=============================================================================
void Matrix4::Scale(const Vector3& a_v3) 
{
		(m_11 * a_v3.x,		m_12 * a_v3.x,	m_13 * a_v3.x ,		m_14,
		 m_21 * a_v3.y,		m_22 * a_v3.y,	m_23 * a_v3.y ,		m_24,
		 m_31 * a_v3.z,		m_32 * a_v3.z,	m_33 * a_v3.z ,		m_34,
		 m_41 * 1.f,		m_42 * 1.f,		m_43 * 1.f ,		m_44);
}
void Matrix4::Scale(float a_fScalar)
{
	m_11 = a_fScalar, m_12 = 0.f, m_13 = 0.f, m_14 = 0.f;
	m_21 = 0.f, m_22 = a_fScalar, m_23 = 0.f, m_24 = 0.f;
	m_31 = 0.f, m_32 = 0.f, m_33 = a_fScalar, m_34 = 0.f;
	m_41 = 0.f, m_42 = 0.f, m_43 = 0.f, m_44 = a_fScalar;
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
float Matrix4::Determinant3() const
{
	return (m_11 * (m_22 * m_33 - m_23 * m_32) +
		m_12 * (m_23 * m_31 - m_21 * m_33) +
		m_13 * (m_21 * m_32 - m_22 * m_31));
}
bool Matrix4::Inverse()
{
	float fDeterminant = Determinant3();
	if (fDeterminant != 0.0f)
	{
		const float fInvDet = powf(fDeterminant, -1.f);

		Matrix4 mat = *this;
		m_11 = (mat.m_22 * mat.m_33 - mat.m_23 * mat.m_32) * fInvDet;
		m_12 = (mat.m_13 * mat.m_32 - mat.m_12 * mat.m_33) * fInvDet;
		m_13 = (mat.m_12 * mat.m_23 - mat.m_13 * mat.m_22) * fInvDet;
		m_14 = 0.f;

		m_21 = (mat.m_23 * mat.m_31 - mat.m_21 * mat.m_33) * fInvDet;
		m_22 = (mat.m_11 * mat.m_33 - mat.m_13 * mat.m_31) * fInvDet;
		m_23 = (mat.m_13 * mat.m_21 - mat.m_11 * mat.m_23) * fInvDet;
		m_24 = 0.f;

		m_31 = (mat.m_21 * mat.m_32 - mat.m_22 * mat.m_31) * fInvDet;
		m_32 = (mat.m_12 * mat.m_31 - mat.m_11 * mat.m_32) * fInvDet;
		m_33 = (mat.m_11 * mat.m_22 - mat.m_12 * mat.m_21) * fInvDet;
		m_34 = 0.f;

		m_41 = (mat.m_21 * (mat.m_33 * mat.m_42 - mat.m_32 * mat.m_43) +
				mat.m_22 * (mat.m_31 * mat.m_43 - mat.m_33 * mat.m_41) +
				mat.m_23 * (mat.m_32 * mat.m_41 - mat.m_31 * mat.m_42)) * fInvDet;
		m_42 = (mat.m_11 * (mat.m_32 * mat.m_43 - mat.m_33 * mat.m_42) +
				mat.m_12 * (mat.m_33 * mat.m_41 - mat.m_31 * mat.m_43) +
				mat.m_13 * (mat.m_31 * mat.m_42 - mat.m_32 * mat.m_41)) * fInvDet;
		m_43 = (mat.m_11 * (mat.m_23 * mat.m_42 - mat.m_22 * mat.m_43) +
				mat.m_12 * (mat.m_21 * mat.m_43 - mat.m_23 * mat.m_41) +
				mat.m_13 * (mat.m_22 * mat.m_41 - mat.m_21 * mat.m_42)) * fInvDet;

		m_44 = 1.0f;
		return true;
	}
	return false;
}
bool Matrix4::GetInverse(Matrix4 &mat) const
{
	Matrix4 mm = mat;
	return false;
}
//\=============================================================================
//\ Matrix Rotation Functions
//\=============================================================================
void Matrix4::RotateX(float fAngle)
{
	m_11 = 1.0f,				m_12 = 0.f,				m_13 = 0.f,					 m_14 =0.f;
	m_21 = 0.f,					m_22 = cosf(fAngle),	m_23 = sinf(fAngle),		 m_24 =0.f;
	m_31 = 0.f,					m_32 = -sinf(fAngle),	m_33 = cosf(fAngle),		 m_34 =0.f;
	m_41 =0.f,					m_42 =0.f,				m_43 =0.f,					 m_44 =1.f;
}
void Matrix4::RotateY(float fAngle)
{
	m_11 = cosf(fAngle),		m_12 = 0.f,				m_13 = -sinf(fAngle),		 m_14 =0.f;
	m_21 = 0.f,					m_22 = 1.0f,			m_23 = 0.f,					 m_24 =0.f;
	m_31 = sinf(fAngle),		m_32 = 0.f,				m_33 = cosf(fAngle),			m_34 =0.f;
	m_41 =0.f,						m_42 =0.f,					m_43 =0.f,			 m_44 =1.f;
}
void Matrix4::RotateZ(float fAngle)
{
	m_11 = cosf(fAngle),		 m_12 = sinf(fAngle),	 m_13 = 0.f;				m_14 = 0.f;
	m_21 = -sinf(fAngle),		 m_22 = cosf(fAngle),	m_23 = 0.f;					m_24 = 0.f;
	m_31 = 0.f,					m_32 = 0.f,				 m_33 = 1.0f;				 m_34 = 0.f;
	m_41 =0.f,					 m_42 =0.f,				 m_43 =0.f,					m_44 = 1.f;
}
//\=============================================================================
//\ General Matrix Functions
//\=============================================================================
void Matrix4::Identity()
{
	Matrix4(1.f, 0.f, 0.f, 0.f,
			0.f, 1.f, 0.f, 0.f,
			0.f, 0.f, 1.f, 0.f,
			0.f, 0.f, 0.f, 1.f);
}
void Matrix4::Zero()
{
	Matrix4(0.f, 0.f, 0.f, 0.f,
			0.f, 0.f, 0.f, 0.f,
			0.f, 0.f, 0.f, 0.f,
			0.f, 0.f, 0.f, 0.f);
}