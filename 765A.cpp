#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    int n,f1=0,f2=0,f3=0,i,j;

    char xx[5],a[10],x[10];

    cin >> n;

    scanf("%s",&xx);

    for(i=0;i<n;i++)
    {
        if(f1==0)
        {
            scanf("%s",&x);
            f1++;
        }
        else
        scanf("%s",&a);
    }


    if(xx[0]!=a[5] || xx[1]!=a[6] || xx[2]!=a[7])
    {
        f2=1;
    }
    else if(x[0]!=a[5] || x[1]!=a[6] || x[2]!=a[7])
        f3=1;

    if(f2==1||f3==1)
    {
        cout << "home";
    }
    else
        cout << "contest";
}
