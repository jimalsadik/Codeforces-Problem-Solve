// made by : SHEHANUK AHSAN
//           3rd batch, Dept of CSE
//           BAUAT;


#include<iostream>
#include<cstdio>
#include<string.h>
#include<cctype>
using namespace std;

main()
{
    int n,k,l,c,p,d,nl,np,x,y,z;

    cin >> n>>k>>l>> c>>d>>p>>nl>>np;

    x=(k*l)/nl;
    y=p/np;
    z=c*d;

    if(x!=y && y!=z && z!=x )
    {
    if(x<y && x<z)
        cout << x/n;
    else if(y<x && y<z)
        cout << y/n;
    else
        cout << z/n;
    }
    else if(x==y && y==z && z==x)
        cout << x/n;
    else if( x==y)
    {
        if(x<z)
        {
            cout << x/n;
        }
        else
            cout << z/n;
    }
    else if( z==y)
    {
        if(y<x)
        {
            cout << y/n;
        }
        else
            cout << x/n;
    }
    else if( x==z)
    {
        if(x<y)
        {
            cout << x/n;
        }
        else
            cout << y/n;
    }




    return 0;
}

