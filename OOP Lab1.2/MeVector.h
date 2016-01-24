#pragma once

#include "stdafx.h"
#include <math.h>
#include <iostream>


class MyVector
{
public:
	MyVector(float a, float b);

	void Distance();
	void Angle();

	friend void BildVector(MyVector);
private:
	float x;
	float y;
};