#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void fun1( vector<int> a)
{	
	for( auto aa : a)
		cout<<" a value is = "<<aa<<endl;
	vector<int>::iterator it ;
	int i = 0;
	for( it = a.begin() ; it < a.end()  ; it++)
	{
	}
			a.insert(it, 1000);
}
void fun2(vector<int> a)
{
	vector<int>::iterator it ;
	it = find(a.begin(), a.end(), 3);
	for(it ; it != a.end(); it++)
		cout<<" a value is = "<<*it<<endl;
}
int main ( void )
{
	vector<int> va = {1,2,3,4,5,6,7,8,9,0};
	fun1(va);
	fun2(va);
	return 0;
}

