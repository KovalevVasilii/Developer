#ifndef TEAMLEADER_H
#define TEAMLEADER_H
#include "Header.h"
class Employer;
class TeamLeader : public Employer
{
public:
	TeamLeader(std::string name, std::string lastName, std::string email, int salary) :Employer(name, lastName, email, salary) {}
};
#endif TEAMLEADER_H