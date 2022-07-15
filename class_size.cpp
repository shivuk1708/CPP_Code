#include<iostream>
using namespace std;
class A 
{
	public :
	int a;
	int b;
	
	virtual void fun(void)
	{
		cout<<"in A fun\n";
	}
};
class B : public A 
{
	public :
	int b;
	
	 void fun(void)
	{
		cout<<"in B fun\n";
	}
};
class C : private A
{
	public :
	int c;
	
	virtual void fun(void)
	{
		cout<<"in C fun\n";
	}
};
class D : protected  A 
{
	public :
	int d;
	
	 void fun(void)
	{
		cout<<"in D fun\n";
	}
};
int main ( void )
{
	cout<<" size of A"<<sizeof(class A)<<endl;
	cout<<" size of b"<<sizeof(class B)<<endl;
	cout<<" size of C"<<sizeof(class C)<<endl;
	cout<<" size of D"<<sizeof(class D)<<endl;
	return 0;
}
