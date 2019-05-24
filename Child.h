#pragma once
#include <iostream>
#include <string>
#ifndef CHILD_H
#define CHILD_H

using namespace std;

class child
{
private:
	string name,surname;
	int age;
public:
	void ent()
	{
		cout << "Vvedite im9 rebenka: ";
		cin >> name;
		cout << "Vvedite familiyou rebenka: ";
		cin >> surname;
		cout << "Vvedite vozrast rebenka: ";
		cin >> age;
	}
	void display()
	{
		cout << "Imformation o rebenke:" << endl << "Im9-" << name << endl << "Famili9-" << surname << endl << "Vozrast-" << age << endl;
	}
};
#endif
