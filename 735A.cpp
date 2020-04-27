#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,i,k,p;

    char a[1000];

    cin >> n >>k;
    scanf("%s",&a);

    for(i=0;i<n;i++)
    {
       if(a[i]=='G')
       {
           p=i;
           break;
       }
    }

    for(i=p;i<n;i+=k)
    {
        if(a[i]=='#')
        {
            break;
        }
        else if(a[i]=='T')
        {
            cout << "YES";
            return 0;
        }
    }

    for(i=p;i>=0;i-=k)
    {
        if(a[i]=='#')
        {
            cout<< "NO";
            return 0;
        }
        else if(a[i]=='T')
        {
            cout << "YES";
            return 0;
        }
    }

    cout << "NO";
}


