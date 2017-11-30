#ifndef BOOKKEEPER_H
#define BOOKKEEPER_H
class Bookkeeper
{
public:
	virtual int getSalary() = 0;
	virtual void setSalary(int salary) = 0;
	virtual void setSalaryMult(float mult) = 0;
};
#endif BOOKKEEPER_H