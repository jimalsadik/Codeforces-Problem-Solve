#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,k,min=0,i,f1,f2;

    cin >> n >>k;

    k=240-k;

    for(i=1;i<=n;i++)
    {
        min=min+5*i;
        //cout << min <<"=min\n" << i << "=i\n";


        if(min>k)
        {
            i--;
            break;
        }
        if(n==i)
        {
            break;
        }
    }
    cout << i;
}


