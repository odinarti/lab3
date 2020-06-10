#include "window.h" 

Window::Window(){
	owner = "Man";
	size = 10;
	header = "Game";
}
Window::Window(string o, int s, string h) : Graphic(o, s) , header(h){}

Window::Window(const Window& obj) {
	owner = obj.owner;
	size = obj.size;
	header = obj.header;
}

void Window::print() {
	cout << "Владелец- " << owner << " - Размер- " << size << " - Заголовок- " << header << endl;
}

string Window::getHeader() {
	return header;
}

void Window::setHeader() {
	getchar();
	cout << "Введите заголовок проекта: ";
	cin >> header;
}

Window& Window::operator=(const Window& o) {
	if (&o == this)
		return *this;
	this->owner = o.owner;
	this->size = o.size;
	this->header = o.header;
	return *this;
}