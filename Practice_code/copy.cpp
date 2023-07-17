#include<iostream>
class A
{
	public :
		A() {}
		A( A &obj)
		{
			std::cout<<"IN A"<<std::endl;
		}
};
int main ( void )
{
	A obj;
	A obj1(obj);
	return 0;
}
