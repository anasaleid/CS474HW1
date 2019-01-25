using namespace std;
#include <string>
#include <iostream>
#include <vector>
class Person
{
public:
	Person()
	{
		firstName = "";
		lastName = "";
	}
	Person(string firstName, string lastName)
	{
		this->firstName = firstName;
		this->lastName = lastName;
		population++;
	}
	Person(const Person &oldPerson)
	{
		firstName = oldPerson.firstName;
		lastName = oldPerson.lastName;
		population++;
	}
	Person& operator=(Person& otherPerson)
	{
		firstName = otherPerson.firstName;
		lastName = otherPerson.lastName;
		delete &otherPerson;
	}
	~Person()
	{
		population--;
		free(this);
	}


	string className = "Person";
	virtual int totalPopulation();
	void sayName();
private:
	string firstName;
	string lastName;
	int population = 0;




};