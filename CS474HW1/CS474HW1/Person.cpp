#include "Person.h"

void Person::sayName()
{
	cout << Person::firstName << " " << Person::lastName << "\n";
}

int Person::totalPopulation()
{
	return Person::population;
}