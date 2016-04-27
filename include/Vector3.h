#include "mathLib.h"
#include "Vector2.h"

#pragma once

#ifndef __VECTOR3_H__
#define __VECTOR3_H__

// Class that implements a 3-dimensional float vector


class ML_API CVector3
{
public:

	//Member Variables held in unnamed union for accessibility
	union
	{
		struct
		{
			float x;
			float y;
			float z;
		};
		struct
		{
			float i[3];
		};
	};


	//\===================================================
	//\ Constant Vectors
	//\===================================================
	static const CVector3 ONE;
	static const CVector3 ZERO;
	static const CVector3 AXIS_X;
	static const CVector3 AXIS_Y;
	static const CVector3 AXIS_Z;
	//\===================================================
	//\ Constructors
	//\===================================================
	CVector3();
	CVector3(const CVector3& a_v3);
	CVector3(const float a_fVal);
	CVector3(float a_x, float a_y, float a_z);
	CVector3(const CVector2& a_xy, float a_z = 1.f);
	explicit CVector3(const float* a_v3fp);
	//\===================================================
	//\ Destructor
	//\===================================================
	CVector3() {};
	//\===================================================
	//\ Casting Operators
	//\===================================================
	operator float*		();
	operator const		float*		() const;
	//\===================================================
	//\ Accessor Operators
	//\===================================================
	void				Get(float& a_x, float& a_y, float& a_z) const;
	void				Set(const float& a_x, const float& a_y, const float& a_z);
	//\===================================================
	//\ Equivalence Operators
	//\===================================================
	bool				operator ==		(const CVector3& a_v3) const;
	bool				operator !=		(const CVector3& a_v3) const;
	//\===================================================
	//\ Neg Operator
	//\===================================================
	const CVector3		operator -		() const;
	//\===================================================
	//\ Overload Operators for Vector2 Addition
	//\===================================================
	const CVector3		operator +		(float a_fScalar) const;
	const CVector3		operator +		(const CVector3& a_v3) const;
	const CVector3&		operator +=		(float a_fScalar);
	const CVector3&		operator +=		(const CVector3& a_v3);
	//\===================================================
	//\ Overload Operators for Vector2 Subtraction
	//\===================================================
	const CVector3		operator -		(float a_fScalar) const;
	const CVector3		operator -		(const CVector3& a_v3) const;
	const CVector3&		operator -=		(float a_fScalar);
	const CVector3&		operator -=		(const CVector3& a_v3);
	//\===================================================
	//\ Overload Operators for Vector2 Multiplication
	//\===================================================
	const CVector3		operator *		(float a_fScalar) const;
	const CVector3		operator *		(const CVector3& a_v3) const;
	friend ML_API const CVector3 operator *		(float a_fScalar, const CVector3& a_v3);
	const CVector3&		operator *=		(float a_fScalar);
	const CVector3&		operator *=		(const CVector3& a_v3);
	//\===================================================
	//\ Overload Operators for Vector2 Division
	//\===================================================
	const CVector3		operator /		(float a_fScalar) const;
	const CVector3		operator /		(const CVector3& a_v3) const;
	const CVector3&		operator /=		(float a_fScalar);
	const CVector3&		operator /=		(const CVector3& a_v3);
	//\===================================================
	//\ Magnitude
	//\===================================================
	float				Length() const;
	float				Magnitude() const;
	float				LengthSquared() const;
	float				MagnitudeSquared() const;
	//\===================================================
	//\ A function to quickly shorten a vector to a desired
	//\ length. This function is good with camera controls
	//\===================================================
	void				Truncate(float a_fMaxLength);
	//\===================================================
	//\ Distance
	//\===================================================
	friend ML_API float		Distance(const CVector3& a_v3A, const CVector3& a_v3B);
	friend ML_API float		DistanceSquared(const CVector3& a_v3A, const CVector3& a_v3B);
	//\===================================================
	//\ Dot Product
	//\===================================================
	float				Dot(const CVector3& a_v3A, const CVector3& a_v3B);
	friend ML_API float		Dot(const CVector3& a_v3A, const CVector3& a_v3B);
	//\===================================================
	//\ Normalisation
	//\===================================================
	bool				IsUnit() const;
	float				Normalise();
	const CVector3		GetUnit() const;
	//\===================================================
	//\ Cross Product
	//\===================================================
	const CVector3		Cross(const CVector3& a_v3) const;
	friend ML_API const CVector3	Cross(const CVector3& a_v3A, const CVector3& a_v3B);
	//\===================================================
	//\ Rotation Functions
	//\===================================================
	void				RotateX(float a_fAngle);
	void				RotateY(float a_fAngle);
	void				RotateZ(float a_fAngle);
	//\===================================================
	//\ Other Useful Functions
	//\===================================================
	void				Zero();
	void				One();
	void				Sum();
	void				Min();
	float				Max();

};

#endif //__VECTOR3_H__
