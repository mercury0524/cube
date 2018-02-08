#pragma once
#include "constants.h"
#include <iostream>

using namespace std;

class Face
{
public:
	//Face();
	Face(color color_, face_name name_);
	~Face();
	void print();
private:
	color grid[3][3]; //3x3 array define 3 faces
	face_name name;
};

