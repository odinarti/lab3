#ifndef BUTTON_H_INCLUDED
#define BUTTON_H_INCLUDED


#include "graphic.h"

using namespace std;

class Button : public Graphic {
protected:
	string title;

public:
	Button();
	Button(string o, int s, string t);
	Button(const Button& obj);

	string getTitle();
	void setTitle();

	void print();

	Button& operator =(const Button& o);
};

#endif //BUTTON_H_INCLUDED

