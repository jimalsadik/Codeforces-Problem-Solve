// made by : SHEHANUK AHSAN
//           3rd batch, Dept of CSE
//           BAUAT;


#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n, i, j=0, k, b=0;

    cin >> n;

    int a[n];

    for(i=0;i<n;i++)
    {
        cin >> a[i];
        if(a[i]%2==0)
            j++;
        else
            b++;
    }

    if(j>b)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2!=0)
            {
                cout << i+1;
                break;
            }
        }
    }
    else if(j<b)
    {
        for(i=0;i<n;i++)
        {
            if(a[i]%2==0)
            {
                cout << i+1;
                break;
            }
        }
    }


    return 0;
}

