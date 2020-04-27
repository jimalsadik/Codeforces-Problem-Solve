#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,i,h,s=0,f1,f2;

    int a[10000];

    cin >> n >> h;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    for(i=0;i<n;i++)
    {
        if(a[i]<=h)
        {
            s++;
        }
        else
            s=s+2;
    }

    cout << s;
}
