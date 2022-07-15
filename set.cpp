#include<iostream>
#include<set>
#include<vector>
#include<time.h>
using namespace std;
int main ( void )
{
	set<int> st;
	vector<int> vt;
	int time = 0;
	srand(time);
	for( int i = 0; i< 10; i++)
	{	
		int num = rand()%100;
		st.insert(num);
		vt.push_back(num);
	}
	cout<<" vt = ";
	for(int a: vt)
		cout<<" "<<a;
	cout<<endl;
	cout<<" st = ";
	for(int a: st)
		cout<<" "<<a;
	cout<<endl;

	auto it = st.upper_bound(77);
	cout<<"greater value is"<< *it<<endl;
	return 0;
}

