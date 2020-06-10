#ifndef WINDOW_H_INCLUDED
#define WINDOW_H_INCLUDED


#include "graphic.h"

using namespace std;

class Window : public Graphic {
protected:
	string header;

public:
	Window();
	Window(string o, int s, string h);
	Window(const Window& obj);

	string getHeader();
	void setHeader();

	void print();

	Window& operator =(const Window& o);
};

#endif //WINDOW_H_INCLUDED

