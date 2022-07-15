#include <iostream>
class Base 
{
	public :
		int x;

		void setvalue(int a)
		{
			x = a;
		}
	        int  getvalue(void )
		{
			return x;
		}
};
class derive : public Base
{

	public:
		int y;
};

int main ( void )
{

	Base *ptr1 = new derive();
	ptr1->setvalue(10);
	Base *ptr2 = new derive();
	ptr2->setvalue(20);
	std::cout<<ptr1->getvalue()<<"     "<<ptr2->getvalue()<<std::endl;
	derive  *ptr3 = new derive();
	ptr3->setvalue(30);
	derive *ptr4 = new derive();
	ptr4->setvalue(40);
	std::cout<<ptr3->getvalue()<<"     "<<ptr4->getvalue()<<std::endl;
	derive  ptr5;
	ptr5.setvalue(50);
	derive ptr6 ;
	ptr6.setvalue(60);
	std::cout<<ptr5.getvalue()<<"     "<<ptr6.getvalue()<<std::endl;
	std::cout<<ptr1->getvalue()<<"     "<<ptr2->getvalue()<<std::endl;
	std::cout<<ptr3->getvalue()<<"     "<<ptr4->getvalue()<<std::endl;
}
