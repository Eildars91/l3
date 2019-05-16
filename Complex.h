#pragma once
#include <iostream>
#include <string>
#ifndef COMPLEX_H
#define COMPLEX_H

using namespace std;

class CoMpLeX
{
public:
	long float rez, imz;
	void ent()
	{
		cout << "Vvedite deistvitelnyyou 4ast': ";
		cin >> rez;
		cout << "Vvedite mnimyyou 4ast': ";
		cin >> imz;
	}
	void mod()
	{
		double mod = sqrt(rez * rez + imz * imz);
		cout << "Module = " << mod << endl;
	}
	void argument()
	{
		if (rez != 0)
		{
			double z = imz / rez;
			cout << "Argument = " << z;
		}
		else cout << "Nevozmojno vi4islit' argument.";
	}
};
#endif
