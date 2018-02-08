#pragma once
#include "Face.h"
#include <iostream>
using namespace std;

class Cube
{
public:
	Cube();
	~Cube();
	void print();
private:
	//Face faces[6];
	Face** faces; // array of size 6
};

