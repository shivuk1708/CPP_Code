#include <iostream>
#include <stdio.h>
#include <stdlib.h>
using namespace std;
#define unsafe(i) \
	( (i) >= 0 ? (i) : -(i) )
inline
int safe(int i)
{
    return i >= 0 ? i : -i;
}
int f()
{
    cout<<"in fun"<<endl;
}
int _start(void)
{
    int ans;
    int x  = 1;
    ans = unsafe(x++); // Error! x is incremented twice
    ans = unsafe(f()); // Danger! f() is called twice
    cout<<"after unsafe fun"<<endl;
    ans = safe(x++); // Correct! x is incremented once
    ans = safe(f()); // Correct! f() is called once
}

