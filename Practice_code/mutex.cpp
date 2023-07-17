#include<iostream>
#include<pthread.h>
#include<stdlib.h>
#include<thread>
#include<unistd.h>
using namespace std;
class A
{
	public: 
		int a;
		pthread_mutex_t mutex;
	A() 
	{
		pthread_mutex_init(&mutex, NULL);
		a  = 1;
//		std::cout<<"mutex value "<<mutex<<std::end;

	}
	void set( int b)
	{	
		pthread_mutex_lock(&mutex);
		a = b;
		sleep(4);
		pthread_mutex_unlock(&mutex);
	}
	void print( void )
	{
		cout<<"the value is "<<a<<endl;
	}
};
int main ( void )
{
	A *obj1, *obj2, *obj3;
	obj1->print();
	obj2->print();
	obj3->print();
	
	thread t1(&A::set, 10);
	//thread t2(obj3->set, 20);
	//thread t3(obj3->set, 30);
	obj1->print();
	obj2->print();
	obj3->print();
	
	return 0;
}
