#include<iostream>
template <typename T>

T add ( T a, T b)
{
	return a+b;
}
int main ( void )
{
	std::cout<<add(1, 9)<<std::endl;
	std::cout<<add(1.9, 9.1)<<std::endl;
	std::cout<<add('0', '4')<<std::endl;
	std::string str1 = "Hello";
	std::string str2 = "Hai";
	std::cout<<add(str1,str2)<<std::endl;
	return 0;
}
