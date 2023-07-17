#include<iostream>
#include<memory>
class A
{
	public :
	int a;

};
int main ( void )
{
	std::shared_ptr<A> obj1 = std::make_shared<A> ();
	std::cout<<" obj1 count"<<obj1.use_count()<<" address"<<obj1.get()<<std::endl;
	std::shared_ptr<A> obj2 = std::make_shared<A> ();
	std::cout<<" obj2 count"<<obj2.use_count()<<" address"<<obj2.get()<<std::endl;
}
