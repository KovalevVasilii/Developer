#ifndef DEVELOPER_H
#define DEVELOPER_H
#include "Header.h"
class Employer;
class Developer : public Employer
{
public:
	Developer(std::string name, std::string lastName, std::string email, int salary) :Employer(name, lastName, email, salary) {}
};
#endif DEVELOPER_H
