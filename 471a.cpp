#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int i,j,a[10],n=9,l,f=0,e=0,v;

    for(i=1;i<=n;i++)
    {
        a[i]=0;
    }

    for(i=1;i<=6;i++)
    {
        cin >> v;
        a[v]++;
    }

    for(i=1;i<=n;i++)
    {
        if(a[i]>=4)
        {
            f=1;
            a[i]=a[i]-4;
            break;
        }
    }

    if(f==0)
    {
        cout << "Alien";
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            if(a[i]==2)
            {
                cout << "Elephant";
                e=1;
                break;
            }
        }
        if(e==0)
        {
            cout << "Bear";
        }


    }



//logic

}


