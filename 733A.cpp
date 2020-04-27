#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;

main()
{
    long int n,i,k,p,x=0,d=0,f=0,max=1,v=0;

    char a[100000];

    //cin >> n;
    scanf("%s",&a);

    n=strlen(a);

    for(i=0;i<n;i++)
    {
       f++;
       if(a[i]=='A'||a[i]=='E'||a[i]=='I'||a[i]=='O'||a[i]=='Y'||a[i]=='U'  )
       {
           if(max<=f)
           {
               max=f;
           }
           f=0;
           v=1;
         //  cout <<  a[i] << "=A[I]\n" << i;

       }
    }

    f++;

    if(v!=0)
    {
        if(f<max)
            cout <<  max;
        else
            cout<< f;
    }
    else
        cout << n+1;


}