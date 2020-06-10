#include "input.h" 

Input::Input() {
	owner = "Robert";
	size = 10;
	text = "Text";
}

Input::Input(string o, int s, string txt) : Graphic(o, s), text(txt) {}

Input::Input(const Input& obj) {
	owner = obj.owner;
	size = obj.size;
	text = obj.text;
}

void Input::print() {
	cout << "Владелец- " << owner << " - Размер- " << size << " - Текст- " << text << endl;
}

string Input::getText() {
	return text;
}

void Input::setText() {
	getchar();
	cout << "Введите надпись кнопки: ";
	cin >> text;
}

Input& Input::operator=(const Input& o) {
	if (&o == this)
		return *this;
	this->owner = o.owner;
	this->size = o.size;
	this->text = o.text;
	return *this;
}