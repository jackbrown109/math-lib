#pragma once

#ifndef __MATRIX3_H__
#define __MATRIX3_H__

#include "mathlib.h"

class DLLEXPORT Matrix3
{
public:
	Matrix3();
	Matrix3(float a_x, float a_y, float a_z);
	Matrix3(const Matrix3& a_m3);

	~Matrix3();

	Matrix3		Determinant() const;



	Matrix3		Inverse () const;
	Matrix3&	Inverse();
	bool	Inverse	() const;

	float x;
	float y;
	float z;




};

#endif //__MATRIX3_H__