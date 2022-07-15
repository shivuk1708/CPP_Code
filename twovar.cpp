#include<iostream>
int main ( void )
{
	int i = 0;
	for ( i = 0 ; i< 5 ; i++)
	{
		int i = 0;
		for ( i = 0 ; i< 5 ; i++)
		{
			std::cout<<"in side"<<i<<std::endl;
		}	
		std::cout<<"out side"<<i<<std::endl;
	}
}
