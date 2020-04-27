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
    int n, i, j, k,l,m,d,s=0;

    cin >> k >> l >> m >> n>> d;
    int a[n];
    for(i=1;i<=d;i++)
    {
        if(i%k==0||i%l==0||i%m==0||i%n==0)
            s++;
    }
    cout << s;
    return 0;
}

