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
    int n, i, j, k;

    char a[100];
    cin >> a;
    a[0]=toupper(a[0]);

    for(i=1;i<strlen(a);i++)
    {
        a[i]=tolower(a[i]);
    }

    cout << a;
    return 0;
}
