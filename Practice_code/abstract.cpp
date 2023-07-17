#include<iostream>
class A
{
	public :
//		virtual void fun1 (void) = 0;
//		virtual void fun2 (void) = 0;
};
/*class B : public A
{
	public :
		void fun1( void )
		{
			std::cout<<" inside B fun"<<std::endl;
		}
};
class C : public A
{
	public :
		void fun2( void )
		{
			std::cout<<" inside C fun"<<std::endl;
		}
};

*/int main ( void )
{
	A *obj;
	std::cout<<sizeof(A)<<std::endl;
	return 0;
}
