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

    char a[10000];
    cin >> a;
    for(i=0;i<strlen(a);i++)
    {
        if(a[i]=='H'||a[i]=='Q'||a[i]=='9')
        {
            cout << "YES";
            return 0;
        }
    }
    cout << "NO";
    return 0;
}
