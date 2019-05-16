#pragma once#pragma once
#include <iostream>
#include <string>
#ifndef VECTOR_H
#define VECTOR_H

using namespace std;

class VeCToR
{
public:
	int v1x;
	int v1y;
	int v2x;
	int v2y;
	void ent()
	{
		cout << "Vvedite koordinati x pervogo vektora: ";
		cin >> v1x;
		cout << "Vvedite koordinati y pervogo vektora: ";
		cin >> v1y;
		cout << "Vvedite koordinati x vtorogo vektora: ";
		cin >> v2x;
		cout << "Vvedite koordinati y vtorogo vektora: ";
		cin >> v2y;
	}
	void mod1()
	{
		cout << "Module pervogo vektora = " << sqrt(v1x * v1x + v1y * v1y) << endl;
	}
	void mod2()
	{
		cout << "Module vtorogo vektora = " << sqrt(v2x * v2x + v2y * v2y) << endl;
	}
	void summa()
	{
		cout << "Summa vektora: x=" << v1x + v2x << " y=" << v1y + v2y << endl;
	}
	void subtraction()
	{
		cout << "Vi4itanie vektora: x=" << v1x - v2x << " y=" << v1y - v2y << endl;
	}
};
#endif
