#pragma once
#ifndef Header
#define Header

#include <iostream>
#include <cstdlib>

using namespace std;

class Property {
protected:
	double worth;
public:

	Property(double propertyWorth);
	virtual double nalog() { return 0; }
};

class Apartment : public Property {
public:
	Apartment(double apartmentWorth);
	double nalog();
};

class Car : public Property {
public:
	Car(double carWorth);
	double nalog();
};

class CountryHouse : public Property {
public:
	CountryHouse(double countryHouseWorth);
	double nalog();
};

#endif Header
