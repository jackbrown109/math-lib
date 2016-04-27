#pragma once

#ifndef __VECTOR2_H__
#define __VECTOR2_H__

#include "mathLib.h"

class ML_API CVector2
{
public:
#pragma region Member Variables Union
	union
	{
		struct
		{
			float x;
			float y;
		};
		
		struct
		{
			float u;
			float v;
		};
		struct
		{
			float i[2];
		};
	};

	#pragma endregion
	#pragma region Constant Vectors

	//\===================================================
	//\ Constant Vectors
	//\===================================================
	static const CVector2 ONE;
	static const CVector2 ZERO;
	static const CVector2 AXIS_X;
	static const CVector2 AXIS_Y;
	#pragma endregion
	#pragma region Constructors/Destructors
	//\===================================================
	//\ Constructors
	//\===================================================
	CVector2();
	CVector2(const float a_x, const float a_y);
	explicit CVector2(const float* a_i);
	CVector2(const CVector2& a_v2);
	//\===================================================
	//\ Destructor
	//\===================================================
	~CVector2();
	#pragma endregion
	#pragma region Casting Operators
	//\===================================================
	//\ Casting Operators
	//\===================================================
	operator					float* ();
	operator const				float*() const;
	#pragma endregion
	//\===================================================
	//\ Accessor Operators
	//\===================================================
	void						Get(float& a_x, float& a_y) const;
	void						Set(const float& a_x, const float& a_y);
	//\===================================================
	//\ Equivalence Operators
	//\===================================================
	bool						operator == (const CVector2& a_v2) const;
	bool						operator !=(const CVector27 a_v2) const;
	//\===================================================
	//\ Neg Operator
	//\===================================================
	const CVector2				operator -() const;
	//\===================================================
	//\ Overload Operators for Vector2 Addition
	//\===================================================
	const CVector2		operator +		(float a_fScalar) const;
	const CVector2		operator +		(const CVector2& a_v2) const;
	const CVector2&		operator +=		(float a_fScalar);
	const CVector2&		operator +=		(const CVector2& a_v2);
	//\===================================================
	//\ Overload Operators for Vector2 Subtraction
	//\===================================================
	const CVector2		operator -		(float a_fScalar) const;
	const CVector2		operator -		(const CVector2& a_v2) const;
	const CVector2&		operator -=		(float a_fScalar);
	const CVector2&		operator -=		(const CVector2& a_v2);
	//\===================================================
	//\ Overload Operators for Vector2 Multiplication
	//\===================================================
	const CVector2		operator *		(float a_fScalar) const;
	const CVector2		operator *		(const CVector2& a_v2) const;
	friend ML_API const CVector2 operator *		(float a_fScalar, const CVector2& a_v2);
	const CVector2&		operator *=		(float a_fScalar);
	const CVector2&		operator *=		(const CVector2& a_v2);
	//\===================================================
	//\ Overload Operators for Vector2 Division
	//\===================================================
	const CVector2		operator /		(float a_fScalar) const;
	const CVector2		operator /		(const CVector2& a_v2) const;
	const CVector2&		operator /=		(float a_fScalar);
	const CVector2&		operator /=		(const CVector2& a_v2);
	//\===================================================
	//\ Magnitude
	//\===================================================
	float				Length() const;
	float				Magnitude() const;
	float				LengthSquared() const;
	float				MagnitudeSquared() const;
	//\===================================================
	//\ Distance
	//\===================================================
	friend ML_API float					Distance(const CVector2& a_v2A, const CVector2& a_v2B);
	friend ML_API float					DistanceSquared(const CVector2& a_v2A, const CVector2& a_v2B);
	//\===================================================
	//\ Dot Product
	//\===================================================
	float				Dot(const CVector2& a_v2A, const CVector2& a_v2B);
	friend ML_API float		Dot(const CVector2& a_v2A, const CVector2& a_v2B);
	//\===================================================
	//\ Normalisation
	//\===================================================
	bool				IsUnit() const;
	float				Normalise();
	const CVector2		GetUnit() const;
	//\===================================================
	//\ Get Perpendicular
	//\===================================================
	CVector2			GetPerpendicular() const;
	//\===================================================
	//\ Transformation Functions
	//\===================================================
	void				Rotate(float fAngle);
	void				Project(float fAngle, float fDistance);
	//\===================================================
	//\ Linear Interpolation and Bilinear Interpolation
	//\===================================================
	friend ML_API CVector2			Lerp(const CVector2& vecA, const CVector2& vecB, float t);
	friend ML_API CVector2			biLerp(const CVector2 vec[4], float fU, float fV);
	//\===================================================
	//\ Other useful functions
	//\===================================================
	void				Zero();
	void				One();
	float				Sum() const;
	float				Min() const;
	float				Max() const;

private:

};


#endif //__VECTOR2_H__
