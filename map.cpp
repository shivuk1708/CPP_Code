#include<iostream>
#include<stdio.h>
#include<map>
using namespace std;
int main ( void )
{	
	map<int, int> mp;
	printf(" %x %p\n", &mp, mp);
	mp.insert(pair<int, int>(1, 10));
	mp.insert(pair<int, int>(2, 20));
	mp.insert(pair<int, int>(3, 30));
	cout<<mp.size()<<endl;	
	mp.insert(pair<int, int>(4, 40));
	mp.insert(pair<int, int>(5, 50));
	cout<<mp.size()<<endl;	
	for( auto a : mp)
	{
		cout<<"value = "<<a.second<<endl;
	}
	mp.erase(4);
	cout<<mp.size()<<endl;	
	mp.insert(pair<int, int>(4, 60));
	mp.insert(pair<int, int>(5, 70));
	for( auto a : mp)
	{
		cout<<"value = "<<a.second<<endl;
	}
}
