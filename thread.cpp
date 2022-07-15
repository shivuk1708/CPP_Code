#include<iostream>
#include<thread>
using namespace std;
class A
{
	public :
		void fun(int a)
		{
			cout<<a<<endl;
		}
		static void fun2(int a, int b);
};
void A::fun2(int a, int b)
{
	cout<<a<<endl;
	cout<<b<<endl;
}
int main ( void )
{
	A obj;
	std::thread th(&A::fun, &obj ,10);
	std::thread th1(A::fun2, 20, 30 );
	th.join();
	th1.join();
}
