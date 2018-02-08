#include "Face.h"


//Face::Face() {}
Face::Face(int color)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			face[i][j] = color;
		}
	}
	
}


Face::~Face()
{
}
