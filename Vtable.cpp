#include<iostream>
class Base
{
	public :
	Base()
	{
		std::cout<<"in Base Construcctor"<<std::endl;
	}
	virtual ~Base()
	{
		std::cout<<"in Base desstrucctor"<<std::endl;
	}
	virtual void hike_amount(void )
	{
		std::cout<<"more hike"<<std::endl;
		std::cout<<this<<std::endl;
	}
	virtual void designation( void )
	{
		std::cout<<"Senior manager"<<std::endl;
		std::cout<<this<<std::endl;
	}
	virtual void experience(void)
	{
		std::cout<<" 3 years"<<std::endl;
		std::cout<<this<<std::endl;
	}
};
class Derived : public Base
{
	public :
	Derived()
	{
		std::cout<<"in Derived Construcctor"<<std::endl;
	}
	~Derived()
	{
		std::cout<<"in Derived desstrucctor"<<std::endl;
	}
	void hike_amount(void)
	{
		std::cout<<"less hike"<<std::endl; 
		std::cout<<this<<std::endl;
	}
	void designation(void)
	{
		std::cout<<"junior manager"<<std::endl;
		std::cout<<this<<std::endl;
	}
};
int main ( void )
{
	Base * bptr = new Derived();
	bptr->hike_amount();
	bptr->designation();
	bptr->experience();
	delete bptr;
	return 0;
}
