#pragma once

#ifndef __VECTOR2_H__
#define __VECTOR2_H__

#include "mathLib.h"

class DLLEXPORT Vector2
{
public:
	Vector2();
	Vector2(float a_x, float a_y);
	Vector2(const Vector2& a_v2);

	~Vector2();

	Vector2		operator +		(const Vector2& a_v2) const;
	Vector2&	operator +=		(const Vector2& a_v2);
	bool		operator ==		(const Vector2& a_v2) const;
	bool		operator !=		(const Vector2& a_v2) const;

	float x;
	float y;

};

#endif //__VECTOR2_H__
