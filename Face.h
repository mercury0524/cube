#pragma once
#include "constants.h"
class Face
{
public:
	//Face();
	Face(int color);
	~Face();
private:
	int face[3][3]; //3x3 array define 3 faces
};

