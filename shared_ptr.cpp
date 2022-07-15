#include<iostream>
#include<memory>
#include<thread>
#include<mutex>
#include<chrono>
using namespace std;

class Base
{
	public :
		Base() { cout<<" Base Constructor "<<endl; }
		 ~Base () { cout <<" Base Destructor "<<endl;}
};
class Derived : public Base
{
	public :
		Derived () { cout<<" Derived Constructor "<<endl; }
		~Derived () { cout <<" Derived Destructor "<<endl;}

};
void thr( shared_ptr<Base> B)
{
	this_thread::sleep_for(chrono::seconds(1));
	cout<<"\n\n ************ \n\n";
	shared_ptr<Base> lp = B;
	shared_ptr<Base> lp1 = B;
	shared_ptr<Base> lp2 = B;
	shared_ptr<Base> lp3 = B;
	{
		static mutex mp;
		lock_guard<mutex> lk(mp);
		cout<<"local pointer value in thread\n"
		    <<"lp.get() = "<<lp3.get()<<endl
		    <<"lp.use_count() = "<<lp3.use_count()<<endl;
	}
	cout<<"\n\n ************ \n\n";

}

int main( void )
{
	shared_ptr<Base> obj = make_shared<Derived> ();
	int *ptr = new int;
	*ptr = 10;
	shared_ptr<int> ptr1 = make_shared<int> (*ptr);
	cout<<"\n\n ************ \n\n";
	cout<< "Creted the shared Derived (as pointer to base\n"
	    << " obj.get() = "<<obj.get()<<endl
	    << "obj.use_count() = "<<obj.use_count()<<endl;
	cout<<"\n\n ************ \n\n";
	thread t1(thr, obj);// t2(thr, obj), t3(thr,obj);
	t1.join();// t2.join(); t3.join();
	obj.reset();
	cout<<"\n\n ************ \n\n";
	cout<<"shared ownership between 3 threads are released \n"
	    <<" owner ship from main\n"
	    << " obj.get() = "<<obj.get()<<endl
	    << "obj.use_count() = "<<obj.use_count()<<endl;
	cout<<"\n\n ************ \n\n";
	cout<<"All threads are released and last one is deleted in derived class\n";
	return 0;
}

