#include<iostream>
class A
{
	public :
		 int a;

		 A()
		 {
			 a = 100;
		 }
		 A(int value)
		 {
			a = value;
		 }
		 A * fun( A *ptr)
		 {
		 	std::cout<<"in fun a = "<<ptr->a<<std::endl;
			static A obj(2002);
		 	return &obj;
		 }
		 void getvalue(void)
		 {
			std::cout<<"in getvaule a = "<<a<<std::endl;
		 }


};
int main ( void )
{
	class A ptr;
	A *obj = ptr.fun(&ptr);
	obj->getvalue();
	return 0;
}
