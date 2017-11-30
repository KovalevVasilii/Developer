#ifndef MANAGER_H
#define MANAGER_H
#include "Header.h"
class Employer;
class Manager : public Employer
{
public:
	Manager(std::string name, std::string lastName, std::string email, int salary) :Employer(name, lastName, email, salary) {}
};
#endif MANAGER_H