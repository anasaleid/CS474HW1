#include "Person.h"

int main()
{
	Person* p1 = new Person();

	cout << p1->totalPopulation() << "\n";
	cout << p1->className << "\n";

	Person* p2 = new Person("Ada", "Lovelace");
	vector<Person> people;
	people.push_back(*p2);

	for (Person var : people)
	{
		var.sayName();
		cout << "\n";
	}
	
	cout << p2->totalPopulation() << "\n";
	p1->className = "Homo Sapiens";

	Person* p3 = new Person("Alan", "Turing");
	people.push_back(*p3);
	for (Person var : people)
	{
		var.sayName();
		cout << "\n";
	}

	return 0;
}

