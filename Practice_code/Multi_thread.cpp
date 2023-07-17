#include<iostream>
#include<thread>
#include<mutex>
#include<deque>
#include<condition_variable>
using namespace std;

std::mutex mu;
std::condition_variable cond;
deque<int> buffer;
const unsigned int maxbuff = 50;

void producer( int val)
{
	while( val)
	{
		std::unique_lock<std::mutex> locker (mu);
		cond.wait(locker, [](){return buffer.size() < maxbuff;});
		buffer.push_back(val);
		cout<<"Producer value"<<val<<endl;
		val--;
		locker.unlock();
		cond.notify_one();
	}
}
void consumer()
{
	while(true)
	{
		std::unique_lock<std::mutex> locker(mu);
		cond.wait(locker, [](){return buffer.size() > 0 ;});
		int val = buffer.back();
		buffer.pop_back();
		cout<< " Consumer value"<<val<<endl;
		locker.unlock();
		cond.notify_one();
	}
}
int main ( void )
{
	std::thread t1(producer, 100);
	std::thread t2(consumer);
	t1.join();
	t2.join();
}
