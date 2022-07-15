#include<iostream>
using namespace std;
class A
{
	public :
	virtual void fun(int a)
	{
		cout<<"in fun Base "<<a<<endl;
	}

};
class B  : public A
{
	public :
	
	void fun(char a)
	{
		cout<<"in fun derive "<<a<<endl;
	}
};
int main ( void )
{
	A *obj = new B();
	obj->fun('a');
	return 0;
}
