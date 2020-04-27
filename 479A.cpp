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
    int max,a,b,c,x1,x2,x3,x4,x5,x6,x7;

    cin >> a>>b>>c;
    max=a*b*c;
    x1=a+b*c;
    x2=a*b+c;
    x3=a+b+c;
    x4=(a+b)*c;
    x5=a+(b*c);
    x6=a*(b+c);
    x7=(a*b)+c;
    if(max<x1)
        max=x1;
    if(max<x2)
        max=x2 ;
    if(max<x3)
        max=x3 ;
    if(max<x4)
        max=x4 ;
    if(max<x5)
        max=x5 ;
    if(max<x6)
        max=x6 ;
    if(max<x7)
        max=x7 ;

    cout << max;


    return 0;
}

