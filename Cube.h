#pragma once
#include "Face.h"
using namespace std;

class Cube
{
public:
	Cube();
	~Cube();
private:
	//Face faces[6];
	Face** faces; // array of size 6
};

