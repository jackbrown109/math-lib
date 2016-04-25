#include "mathLib.h"

#pragma once

#ifndef __MATRIX4_H__
#define __MATRIX4_H__


class ML_API CMatrix4
{
public:
	//\=============================================================================
	//\ Member Variables held in unnamed union for accessibility
	//\=============================================================================
	union
	{
		struct
		{
			float			m[4][4];
		};

		struct
		{
			float			f[16];
		};

		struct
		{
			float			m_11, m_12, m_13, m_14;
			float			m_21, m_22, m_23, m_24;
			float			m_31, m_32, m_33, m_34;
			float			m_41, m_42, m_43, m_44;
		};
	};
	//\=============================================================================
	//\ Constants
	//\=============================================================================
	static const CMatrix4 ZERO;
	static const CMatrix4 ONE;
	static const CMatrix4 IDENTITY;
	//\=============================================================================
	//\ Constructors
	//\=============================================================================
	CMatrix4();
	explicit CMatrix4(const float* mat);
	CMatrix4(	float m_11, float m_12, float m_13, float m_14,
				float m_21, float m_22, float m_23, float m_24,
				float m_31, float m_32, float m_33, float m_34,
				float m_41, float m_42, float m_43, float m_44);
	CMatrix4(const CMatrix3& a_m3);
	CMatrix4(const CMatrix4& a_m4);
	//\=============================================================================
	//\ Casting Operators
	//\=============================================================================
	operator float* ();
	operator const float* () const;
	//\=============================================================================
	//\ Component Access Operators
	//\=============================================================================
	float&				operator ()(int iRow, int iCol);
	float				operator ()(int iRow, int iCol) const;
	//\=============================================================================
	//\ Component Access/ Retrieval as Vector4
	//\=============================================================================
	void				SetX(const CVector4& a_v4);
	void				SetY(const CVector4& a_v4);
	void				SetZ(const CVector4& a_v4);
	void				SetT(const CVector4& a_v4);
	void				GetX(CVector4& a_v4) const;
	void				GetY(CVector4& a_v4) const;
	void				GetZ(CVector4& a_v4) const;
	void				GetT(CVector4& a_v4) const;
	//\=============================================================================
	//\ Component Access/ Retrieval as Vector3
	//\=============================================================================
	void				SetX(const CVector3& a_v3);
	void				SetY(const CVector3& a_v3);
	void				SetZ(const CVector3& a_v3);
	void				SetT(const CVector3& a_v3);
	void				GetX(CVector3& a_v3) const;
	void				GetY(CVector3& a_v3) const;
	void				GetZ(CVector3& a_v3) const;
	void				GetT(CVector3& a_v3) const;
	//\=============================================================================
	//\ Component Row/Column Access Operators
	//\=============================================================================
	void				SetCol(int iCol, const CVector3& vCol);
	void				SetCol(int iCol, const CVector4& vCol);

	void				GetCol(int iCol, CVector3& vCol) const;
	void				GetCol(int iCol, CVector4& vCol) const;

	void				SetRow(int iRow, const CVector3& vRow);
	void				SetRow(int iRow, const CVector4& vRow);

	void				GetRow(int iRow, CVector3& vRow) const;
	void				GetRow(int iRow, CVector4& vRow) const;
	//\=============================================================================
	//\ Equivalence Operators
	//\=============================================================================
	bool				operator == (const CMatrix4& a_m4) const;
	bool				operator != (const CMatrix4& a_m4) const;
	//\=============================================================================
	//\ Neg Operator
	//\=============================================================================
	const CMatrix		operator - () const;
	//\=============================================================================
	//\ Operator Overloads for Addition
	//\=============================================================================
	const CMatrix4		operator + (const CMatrix4& a_m4) const;
	const CMatrix4		operator += (const CMatrix4& a_m4);
	//\=============================================================================
	//\ Operator Overloads for Subtraction
	//\=============================================================================
	const CMatrix4		operator - (const CMatrix4& a_m4) const;
	const CMatrix4		operator -= (const CMatrix4& a_m4);
	//\=============================================================================
	//\ Operator Overloads for Multiplication
	//\=============================================================================
	const CMatrix4		operator * (const float a_fScalar) const;
	friend ML_API const CMatrix4 operator * (const float a_fScalar, const CMatrix4& a_m4);
	const CMatrix4&		operator *= (const float a_fScalar);

	const CVector3		operator * (const CVector3& a_v3) const;
	friend ML_API const CVector3 operator * (const CVector3& a_v3, const CMatrix4& a_m4);

	const CVector4		operator * (const CVector4& a_v4) const;
	friend ML_API const CVector4 operator * (const CVector4& a_v4, const CMatrix4& a_m4);

	const CMatrix4		operator * (const CMatrix4& a_m4) const;
	const CMatrix4&		operator *= (const CMatrix4& a_m4);
	//\=============================================================================
	//\ Transpose Matrix
	//\=============================================================================
	void				Transpose();
	void				GetTranspose(CMatrix4 &mat) const;
	//\=============================================================================
	//\ General Matrix Functions
	//\=============================================================================
	void				Scale(const CVector3& vec);
	void				Scale(float k);
	//\=============================================================================
	//\ Orthonormalise
	//\=============================================================================
	void OrthoNormalise();
	//\=============================================================================
	//\ Inverse Matrix Functions
	//\=============================================================================
	float				Determinant() const;
	float				Determinant3() const;
	bool				Inverse();
	bool				GetInverse(CMatrix4 &mat) const;
	//\=============================================================================
	//\ Matrix Rotation Functions
	//\=============================================================================
	void				RotateX(float fAngle);
	void				RotateY(float fAngle);
	void				RotateZ(float fAngle);
	//\=============================================================================
	//\ General Matrix Functions
	//\=============================================================================
	void				Identity();
	void				Zero();


};


#endif //__MATRIX_4__