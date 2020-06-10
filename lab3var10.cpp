#include <iostream>
#include "window.h" 
#include "button.h" 
#include "buttonIm.h" 
#include "input.h" 

using namespace std;

int main()
{
	setlocale(LC_ALL, "Russian");
	int k = 1;
	while (k != 0) {
		cout << "1. Работа класса Window" << endl;
		cout << "2. Работа класса Button" << endl;
		cout << "3. Работа класса ButtonIm" << endl;
		cout << "4. Работа класса Input" << endl;
		cout << "5. Выход" << endl;
		cin >> k;
		switch (k) {
		case 1:
		{
			cout << "Объекты Window: " << endl << endl;
			Window Object1;
			Window Object2("Ivan", 15, "Заголовок");
			Window Object3 = Object2;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			cout << endl;
			Object1.setOwner(); // можем использовать методы класса родителя
			cout << endl;
			cout << "Изменён владелец Object1: " << Object1.getOwner() << endl;
			Object3 = Object1;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			system("pause");
			system("cls");
			break;
		}

		case 2:
		{
			cout << endl << "Объекты Button: " << endl << endl;
			Button Object1;
			Button Object2("Danil", 10, "Title");
			Button Object3 = Object2;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			cout << endl;
			Object1.setTitle();
			cout << endl;
			cout << "Изменена надпись объекта Object1: " << Object1.getTitle() << endl;
			cout << endl;
			Object3 = Object1;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			system("pause");
			system("cls");
			break;
		}

		case 3:
		{
			cout << endl << "Объекты ButtonIm: " << endl << endl;
			ButtonIm Object1;
			ButtonIm Object2("Irina", 20, "Anything", "Metro 2033");
			ButtonIm Object3 = Object2;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			cout << endl;
			Object1.setPicture();
			cout << endl;
			cout << "Изменена картинка проекта Object1: " << Object1.getPicture() << endl;
			cout << endl;
			Object3 = Object1;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			system("pause");
			system("cls");
			break;
		}
		case 4:
		{
			cout << endl << "Объекты Input: " << endl << endl;
			Input Object1;
			Input Object2("Kristina", 13, "_Text_");
			Input Object3 = Object2;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			cout << endl;
			Object1.setText();
			cout << endl;
			cout << "Изменен текст проекта Object1: " << Object1.getText() << endl;
			cout << endl;
			Object3 = Object1;
			cout << "Объект Object1: ";
			Object1.print();
			cout << "Объект Object2: ";
			Object2.print();
			cout << "Объект Object3: ";
			Object3.print();
			system("pause");
			system("cls");
			break;
		}

		case 5: {
			k = 0;
			break;
		}

		default: {
			cout << "Вы ввели неверный пункт в меню" << endl;
			break;
		}

		}
	}
	return 0;
}
