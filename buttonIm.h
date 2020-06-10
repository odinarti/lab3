#ifndef BUTTONIM_H_INCLUDED
#define BUTTONIM_H_INCLUDED

#include <string>
#include "button.h" 

using namespace std;

class ButtonIm : public Button {
protected:
	string picture;

public:
	ButtonIm();
	ButtonIm(string o, int s, string t, string p);
	ButtonIm(const ButtonIm& obj);

	string getPicture();
	void setPicture();

	void print();

	ButtonIm& operator =(const ButtonIm& o);
};

#endif //BUTTONIM_H_INCLUDED
