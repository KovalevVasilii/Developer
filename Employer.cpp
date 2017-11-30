#include "Employer.h"
#include "Header.h"
string Employer::getBoss()
{
	if (boss == nullptr)
		return "There is no boss";
	cout << "==Boss==" << endl;
	return boss->get—ontacts();
}

list<string> Employer::getJunior()
{
	cout << "==Juniors==" << endl;
	list<string> LIST;
	for (auto& c : this->junior)
	{
		cout << c->get—ontacts() << endl;
		LIST.push_back(c->get—ontacts());
	}
	return LIST;
}
void Employer::deleteJunior(Employer* jun)
{
	bool flag = 0;
	for (auto& c : this->junior)
	{
		if (c == jun)
		{
			cout << "delete junior: " + c->get—ontacts() << endl;
			//jun->boss = nullptr;
			junior.remove(c);
			flag = 1;
			break;
		}
	}
	if (flag == 0)
	{
		cout << "Not dound" << endl;
	}

}