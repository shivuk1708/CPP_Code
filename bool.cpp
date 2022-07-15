#include<iostream>
int main ( void )
{
	bool i = false;
	bool j = true;

	if( ++i)
	{
		std::cout<<"i is true"<<i<<std::endl;
	}
 if(++j)
	{
		std::cout<<"j is false"<<j<<std::endl;
	}
	else
	{
		std::cout<<" wrong"<<std::endl;
	}
	return 0;
}
