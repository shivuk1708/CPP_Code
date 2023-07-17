#include<iostream>
class A
{
	public :
		int a;
		int b;

		A()
		{
			a = 10;
			b = 200;
		}

		A operator + (A & obj)
		{
			A ret;
			ret.a = a+obj.a;
			ret.b = b+obj.b;
			return ret;
		}
};
int main ( void )
{
	A obj1;
	A obj2;
	A obj3 = obj1 + obj2;
	std::cout<<" a = "<<obj1.a<<" b = "<<obj1.b<<std::endl;
	std::cout<<" a = "<<obj2.a<<" b = "<<obj2.b<<std::endl;
	std::cout<<" a = "<<obj3.a<<" b = "<<obj3.b<<std::endl;
	return 0;
}
