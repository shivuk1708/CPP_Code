#include<iostream>
class Base
{
	public :
	virtual  void printf(void)
	{
		std::cout<<"in side Base class"<<std::endl;
	}
	void fun(void)
	{
		std::cout<<"in side Base class"<<std::endl;
	}
};
class Derived1 : public Base
{
	public :
	void printf(void)
	{
		std::cout<<"in side Dervied1  class"<<std::endl;
	}
};
class Derived2 : public Base
{
	public :
	void printf(void)
	{
		std::cout<<"in side Dervied2  class"<<std::endl;
	}
};
int main ( void )
{
	Derived1 d1;
	Base *b1 = dynamic_cast<Base *> (&d1);
	if(NULL == b1)
	{
		std::cout<<"NULL"<<std::endl;
		return 0;
	}
	b1->printf();
	Derived2 *d2 = dynamic_cast<Derived2 *>(b1);
	if(NULL == d2)
	{
		std::cout<<"NULL"<<std::endl;
		return 0;
	}
	d2->printf();
	return 0;
}
