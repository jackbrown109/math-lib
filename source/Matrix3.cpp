#include "Matrix3.h"

// Inverse- Get the inverse of the matrix

Matrix3::Matrix3()
{
	x = 0.f;
	y = 0.f;
}

Matrix3::Matrix3(float a_x, float a_y, float a_z)
{
	x = a_x;
	y = a_y;
}

Matrix3::Matrix3(const Matrix3& a_m3)
{
	x = a_m3.x;
	y = a_m3.y;
}

Matrix3::~Matrix3()
{

}

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
		m_11 = (mat.m_22 * mat.m_33 - mat.m_23 * mat.m_32) * fInvDet;
		m_12 = (mat.m_13 * mat.m_32 - mat.m_12 * mat.m_33) * fInvDet;
		m_13 = (mat.m_12 * mat.m_23 - mat.m_13 * mat.m_22) * fInvDet;

		m_21 = (mat.m_23 * mat.m_31 - mat.m_21 * mat.m_33) * fInvDet;
		m_22 = (mat.m_11 * mat.m_33 - mat.m_13 * mat.m_31) * fInvDet;
		m_23 = (mat.m_13 * mat.m_21 - mat.m_11 * mat.m_23) * fInvDet;

		m_31 = (mat.m_21 * mat.m_32 - mat.m_22 * mat.m_31) * fInvDet;
		m_32 = (mat.m_12 * mat.m_31 - mat.m_11 * mat.m_32) * fInvDet;
		m_33 = (mat.m_11 * mat.m_22 - mat.m_12 * mat.m_21) * fInvDet;
		
		return true;
	}
	return false;
}