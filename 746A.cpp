#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    long int a,b,c,i,f1,f2,s=0;

    cin >> a >> b >>c;

    for(i=1;i<=a;i++)
    {
        if(2*i<=b && 4*i<=c)
        {
            s++;
        }
        else
            break;
    }

    cout << s*7;
}
