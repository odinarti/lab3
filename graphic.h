#ifndef GRAPHIC_H_INCLUDED
#define GRAPHIC_H_INCLUDED

#include <string>
#include <iostream>
#include <windows.h>

using namespace std;

class Graphic {
protected:
	string owner;
	int size;

public:

	Graphic();
	Graphic(string o, int s);
	Graphic(const Graphic& obj);

	int getSize();
	string getOwner();
	void setSize();
	void setOwner();

	virtual void print() = 0;

	Graphic& operator =(const Graphic& o);
};

#endif //GRAPHIC_H_INCLUDED
