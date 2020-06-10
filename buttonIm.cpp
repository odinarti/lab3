#include "buttonIm.h" 

ButtonIm::ButtonIm() {
	owner = "Ivan";
	size = 12;
	title = "Games";
	picture = "Metro";

}

ButtonIm::ButtonIm(string o, int s, string t, string p) : Button(o, s, t), picture(p) {}

ButtonIm::ButtonIm(const ButtonIm& obj) {
	owner = obj.owner;
	size = obj.size;
	title = obj.size;
	picture = obj.picture;
}

void ButtonIm::print() {
	cout << "��������- " << owner << " - ������- " << size << " - �������- " << title << " - ��������- " << picture << endl;
}

string ButtonIm::getPicture() {
	return picture;
}

void ButtonIm::setPicture() {
	getchar();
	cout << "������� ������� ������: ";
	cin >> picture;
}

ButtonIm& ButtonIm::operator=(const ButtonIm& o) {
	if (&o == this)
		return *this;
	this->owner = o.owner;
	this->size = o.size;
	this->title = o.title;
	this->picture = o.picture;
	return *this;
}