#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,s=0,i,max,pt;
    long int a[100];

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> a[i];
    }

    max=a[0];

    if(n==1)
    {
        cout << 0;
        return 0;
    }

    for(i=0;i<n;i++)
    {
        if(max<a[i])
        {
            max=a[i];
        }
    }

    for(i=0;i<n;i++)
    {
        pt=max-a[i];
        s=s+pt;
    }

    cout << s;
}
