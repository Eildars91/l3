#pragma once
#include <iostream>
#include <string>
#ifndef TILES_H
#define TILES_H

using namespace std;

class tiles
{
public:
	string brand, price;
	int size_h,size_w;
	void getData()
	{
		cout << "Enter a brand of the tiles: ";
		cin >> brand;
		cout << "Enter a size_h of the tiles: ";
		cin >> size_h;
		cout << "Enter a size_w of the tiles: ";
		cin >> size_w;
		cout << "Enter a price of the tiles: ";
		cin >> price;
		cout << brand << " tiles with size_h=" << size_h << " and size_w=" << size_w << " costs " << price << endl;
	}
};
#endif#pragma once
