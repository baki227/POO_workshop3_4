#pragma once
#include <iostream>
using namespace std;

class objet2D {
private : 
	int* ptrObj2D;

protected :
		int dim1;
		int dim2;
public : 
	objet2D();
	objet2D(int value) {
		ptrObj2D = new int (value);
	}

	objet2D(int tdim1, int tdim2);
	virtual int getAire();
	virtual int getPerimetre();
	virtual string afficheInfo();
	int* ptrOptrObj2D() const {
		return ptrObj2D;
	}

};

class rectangle : public objet2D{
public:
	rectangle();
	rectangle(int tdim1, int tdim2);
	virtual int getAire();
	virtual int getPerimetre();
	virtual string afficheInfo();


};

class cube : public rectangle {
public :

	cube();
	cube(int tcote);
	int getAire();
	int getCote();
	int getPerimetre();
	string afficheInfo();

};

