#include "Cube.h"


Cube::Cube()
{
	faces = new Face*[6];
	for (int i = 0; i < 6; i++) {
		//Face faces[i]()
		faces[i] = new Face((color)i,(face_name)i);
	}
}
void Cube::print() {
	for (int i = 0; i < 6; i++) {
		faces[i]->print();
	}
}

Cube::~Cube()
{
	for (int i = 0; i < 6; i++) {
		delete faces[i];
	}
	delete faces;
}
