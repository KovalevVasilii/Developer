#include "Header.h"
#include "Employer.h"
#include "Admin.h"
#include "Bookkeeper.h"
#include "MegaAdmin.h"
#include "Developer.h"
#include "TeamLeader.h"
#include "Manager.h"
using namespace std;

list<string> getContacts(vector <Admin*> vect)
{
	list<string> LIST;
	for (auto& c : vect)
	{
		cout << c->get—ontacts() << endl;
		LIST.push_back(c->get—ontacts());
	}
	return LIST;
}
void setSalary(vector <Bookkeeper*> vect)
{
	for (auto& c : vect)
	{
		int n;
		cin >> n;
		c->setSalary(n);
	}
}
void setSalaryMult(vector <Bookkeeper*> vect)
{
	for (auto& c : vect)
	{
		int n;
		cin >> n;
		c->setSalaryMult(n);
	}
}
list<int> getSalary(vector <Bookkeeper*> vect)
{
	list <int> LIST;
	for (auto& c : vect)
	{
		cout << c->getSalary() << endl;
		LIST.push_back(c->getSalary());
	}
	return LIST;
}

int main()
{
	Developer dev("Kovalev", "Vasilii", "ssnnd@mail.com", 10000);
	Developer new_dev("Kishinev", "Iliya", "some@mail.com", 1000);
	TeamLeader team("Savchenko", "Alex", "yandex@mail.com", 1000);
	Manager mag("Evtushenko", "Oleg", "superhot@mail.com", 20000);
	///get contacts
	vector <Admin*> admin;
	admin.push_back(&dev);
	admin.push_back(&team);
	admin.push_back(&mag);
	admin.push_back(&new_dev);
	//getContacts(admin);
	//Admin*admin = &emp;
	//Admin*admin1 = &emp1;

	///get or change salary
	vector <Bookkeeper*> bookkeeper;
	bookkeeper.push_back(&dev);
	bookkeeper.push_back(&team);
	bookkeeper.push_back(&mag);
	bookkeeper.push_back(&new_dev);
	//setSalary(bookkeeper);
	Bookkeeper* bk = &dev;
	bk->setSalaryMult(1.2);
	getSalary(bookkeeper);
	///get, set, change junior or boss
	MegaAdmin* megaAdmin = &team;
	megaAdmin->setBoss(&mag);

	cout << megaAdmin->getBoss() << endl;
	megaAdmin->addJunior(&dev);
	megaAdmin->addJunior(&new_dev);
	megaAdmin->getJunior();
	megaAdmin->deleteJunior(&dev);
	megaAdmin->getJunior();
	//megaAdmin->deleteJunior(&new_dev);
	megaAdmin->getJunior();
	megaAdmin->deleteJunior(&team);
	cout << megaAdmin->getBoss() << endl;
	MegaAdmin* megaAdmin2 = &dev;
	cout << megaAdmin2->getBoss() << endl;

	cin.get();
	cin.get();
	return 0;
}