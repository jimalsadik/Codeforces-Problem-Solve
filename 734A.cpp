#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    long int n,i,k,p,x=0,d=0;

    char a[100000];

    cin >> n;
    scanf("%s",&a);

    for(i=0;i<n;i++)
    {
       if(a[i]=='A')
       {
           x++;
       }
       else
        d++;
    }

    if(x>d)
    {
        cout << "Anton";
    }
    else if(x<d)
    {
        cout << "Danik";
    }
    else
        cout << "Friendship";
}


