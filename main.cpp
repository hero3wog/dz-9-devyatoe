#include "Header.h"

int main() {
	setlocale(LC_ALL, "rus");
	Property* array[7] = { new Apartment(4000000), new Apartment(7000000), new Apartment(10000000), new Car(550000), new Car(700000), new CountryHouse(2000000),
	new CountryHouse(1000000) };

	for (int i = 0; i < 7; ++i) {
		cout << "Nalog " << i + 1 << ": " << array[i]->nalog() << endl;
		delete array[i];
	}

}