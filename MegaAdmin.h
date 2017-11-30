#ifndef MEGAADMIN_H
#define MEGAADMIN_H
#include "Header.h"
class Employer;
class MegaAdmin
{
public:
	virtual void setBoss(Employer* boss) = 0;
	virtual void addJunior(Employer* jun) = 0;
	virtual std::string getBoss() = 0;
	virtual std::list<std::string> getJunior() = 0;
	virtual void deleteJunior(Employer* jun) = 0;

};

#endif MEGAADMIN_H
