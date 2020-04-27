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
    int n, i, j, k,x;
    char s1[110]={0},s2[110],s[110];
    cin >> s1 >> s2;
    x=strlen(s1);

    for(i=x-1,j=0;i>=0;i--,j++)
    {
        s[j]=s1[i];
    }
    for(i=0;i<x;i++)
    {
        if(s[i]!=s2[i])
        {
            cout << "NO";
            return 0;
        }
    }
        cout << "YES";

    return 0;
}