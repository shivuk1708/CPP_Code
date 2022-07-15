#include<iostream>
class A
{
	public :
		int *a;
		int *b;
		A()
		{
			a = new int();
			b = new int();
		}
		A( A &ptr)
		{
			a = new int();
			b = new int();
			*a = *ptr.a;
			*b = *ptr.b;
		}
		void getvalue(void )
		{
			std::cout<<" value is a = "<<*a<<" b = "<<*b<<std::endl;
		}
		void setvalue( int x, int y)
		{
			*a = x;
			*b = y;
		}
};

int main ( void )
{
	A obj;
	obj.setvalue(1,2);
	obj.getvalue();
	A obj1(obj);
	obj1.getvalue();
	obj.setvalue(4,5);
	obj.getvalue();
	obj1.getvalue();

}

