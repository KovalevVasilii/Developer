#ifndef EMPLOYER_H
#define EMPLOYER_H
#include "Header.h"
#include "Admin.h"
#include "Bookkeeper.h"
#include "MegaAdmin.h"
using namespace std;

class Employer : public Admin, public Bookkeeper, public MegaAdmin
{
public:
	Employer(string name, string lastName, string email, int salary) : name(name), lastName(lastName), email(email), salary(salary) {}
	string getÑontacts() { return name + ' ' + lastName + ' ' + email; }
	int getSalary() { return salary; }
	void setSalary(int salary) { this->salary = salary*mult; }
	void setSalaryMult(float mult) { this->mult = mult; this->salary = salary*mult;}
	void setBoss(Employer*boss) { this->boss = boss; }
	void addJunior(Employer*jun) { junior.push_back(jun); }
	string getBoss();
	list<string> getJunior();
	void deleteJunior(Employer* jun);
private:
	list <Employer*> junior;
	Employer* boss = nullptr;
	string name;
	string lastName;
	string email;
	int salary;
	float mult=1;
};
#endif EMPLOYER_H