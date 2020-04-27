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
    int n=12,k,df=0,dr=0,a[100],i,f1,f2,j,temp,s=0;

    cin >> k ;

    for(i=0;i<n;i++)
    {
        cin >> a[i];

    }
    if(k==0)
    {
        cout << 0;
        return 0;
    }

    for(i=n-2;i>=0;i--)
    {
        for(j=0;j<=i;j++)
        {
            if(a[j]<a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }

    for(i=0;i<n;i++)
    {
        s=s+a[i];
        if(s>=k)
        {
            cout << ++i;
            return 0;
        }
    }
    cout << -1;
}
