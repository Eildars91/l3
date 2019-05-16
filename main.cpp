#include <iostream>
#include "Child.h"
#include "CompleX.h"
#include "Tiles.h"
#include "Vector.h"
int main()
{
	child a;
	child b;
	a.ent();
	a.display();
	b.ent();
	b.display();
	CoMpLeX c;
	c.ent();
	c.mod();
	c.argument();
	tiles a1;
	tiles b1;
	tiles c1;
	a1.getData();
	b1.getData();
	c1.getData();
	VeCToR v;
	v.ent();
	int operation = 0;
	while (operation != 5)
	{
		cout << "Operation kotoryyou xotite sdelat':" << endl;
		cout << "1. Naiti module pervogo vektora" << endl;
		cout << "2. Naiti module vtorogo vektora" << endl;
		cout << "3. Naiti summy" << endl;
		cout << "4. Naiti vi4itanie" << endl;
		cout << "5. Exit" << endl;
		cout << "Operation: ";
		cin >> operation;
		if (operation < 1 || operation > 5)
		{
			while (operation < 1 || operation > 5)
			{
				cout << "Operation nevozmojna. Viberite drygyyou operation: ";
				cin >> operation;
			}
		}
		switch (operation)
		{
		case 1:
			v.mod1();
			break;
		case 2:
			v.mod2();
			break;
		case 3:
			v.summa();
			break;
		case 4:
			v.subtraction();
			break;
		case 5:
			break;
		}
	}
}