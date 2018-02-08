#include "Face.h"


//Face::Face() {}
Face::Face(color color_, face_name name_)
{
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			grid[i][j] = color_;
		}
	}
	name = name_;
	
}


Face::~Face()
{
}
