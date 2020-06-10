#ifndef INPUT_H_INCLUDED
#define INPUT_H_INCLUDED


#include "graphic.h"

using namespace std;

class Input : public Graphic {
protected:
	string text;

public:
	Input();
	Input(string o, int s, string txt);
	Input(const Input& obj);

	string getText();
	void setText();

	void print();

	Input& operator =(const Input& o);
};

#endif //INPUT_H_INCLUDED

