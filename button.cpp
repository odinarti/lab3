#include "button.h" 

Button::Button() {
	owner = "Man";
	size = 10;
	title = "Game";
}

Button::Button(string o, int s, string t) : Graphic(o, s), title(t) {}

Button::Button(const Button& obj) {
	owner = obj.owner;
	size = obj.size;
	title = obj.title;
}

void Button::print() {
	cout << "Владелец- " << owner << " - Размер- " << size << " - Надпись- " << title << endl;
}

string Button::getTitle() {
	return title;
}

void Button::setTitle() {
	getchar();
	cout << "Введите надпись кнопки: ";
	cin >> title;
}

Button& Button::operator=(const Button& o) {
	if (&o == this)
		return *this;
	this->owner = o.owner;
	this->size = o.size;
	this->title = o.title;
	return *this;
}