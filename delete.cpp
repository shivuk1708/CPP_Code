#include<iostream>
#include<memory>
int main ( void )
{
	int a = 10;
	int *ptr = new int();
	//ptr = &a;
	int *ptr1 = ptr;
	int *ptr2 = ptr;
	std::cout<<" int = "<<*ptr<<std::endl;
	delete ptr1;
	delete ptr2;
	std::cout<<" int = "<<*ptr<<std::endl;
	return 0;
}
