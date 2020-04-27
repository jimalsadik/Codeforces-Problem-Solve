#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,m,k,df=0,dr=0,p[100],i,f1,f2;

    cin >> n >> m >>k;

    for(i=0;i<n;i++)
    {
        cin >> p[i];
    }

    //df

    for(i=m;i<n ;i++)
    {
        df=df+10;
        if(p[i]<= k && p[i]!=0)
        {
            break;
        }
    }

  //      cout << df << "=df\n";
    if(i==n)
    {
        df=0;
    }


//dr
    for(i=m-2;i>0 ;i--)
    {
        dr=dr+10;
        if(p[i]<= k && p[i]!=0)
        {
            break;
        }
    }

    if(i<=0)
    {
       dr=0;
    }


    if(df==0)
    {
        cout << dr;
    }
    else if(dr==0)
    {
        cout << df;
    }
    else if(df>dr)
    {
        cout << dr;
    }
    else
    {
        cout << df;
    }





}
