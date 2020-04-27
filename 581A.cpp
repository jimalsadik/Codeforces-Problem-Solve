#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,m,x;

    cin >> n >> m;

    if(n>m)
    {
        cout << m << endl;
        cout << (n-m)/2;
    }
    else
    {
        cout << n << endl;
        cout << (m-n)/2;
    }
}
