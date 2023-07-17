#include<iostream>
int main ( void)
{
	int a = 10;
	int &b = a;
	std::cout<<a<<'\t'<<b<<std::endl;
	b = 100;
	std::cout<<a<<'\t'<<b<<std::endl;
	return 0;	
}
