#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,m,k,m1=0,c=0,a[2],i,f1,f2,mx,cx;

    cin >> n;

    for(i=0;i<n;i++)
    {
        cin >> mx >> cx;

        if(mx<cx)
        {
            c++;
        }
        else if(mx>cx)
        {
            m1++;
        }
    }

    if(c>m1)
    {
        cout << "Chris";
    }
    else if(m1>c)
    {
        cout << "Mishka";
    }
    else
    {
        cout << "Friendship is magic!^^";
    }

}
