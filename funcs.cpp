#include "Header.h"

Property::Property(double propertyWorth) {
	worth = propertyWorth;
}

Apartment::Apartment(double apartmentWorth) :Property(apartmentWorth) {};
double Apartment::nalog() {
	return 0.0001 * worth;
}

Car::Car(double carWorth) :Property(carWorth) {}
double Car::nalog() {
	return 0.002 * worth;
}

CountryHouse::CountryHouse(double countryHouseWorth) :Property(countryHouseWorth) {}
double CountryHouse::nalog() {
	return 0.005 * worth;
}