#include "graphic.h" 

Graphic::Graphic() {
	owner = "Woman";
	size = 12;
}	
Graphic::Graphic(string o, int s) {
	this->owner = o;
	this->size = s;
}
Graphic::Graphic(const Graphic& obj) {
	owner = obj.owner;
	size = obj.size;
}

string Graphic::getOwner() {
	return owner;
}

void Graphic::setOwner() {
	getchar();
	cout << "Введите владельца: ";
	cin >> owner;
}


void Graphic::print() {
	cout <<"Владелец- "<< owner <<" - Размер- " << size << endl;
}

Graphic& Graphic::operator=(const Graphic& o) {
	if (&o == this)
		return *this;
	this->owner = o.owner;
	this->size = o.size;
	return *this;
}
