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
    long long int n, i, j, k, s=0;

    cin >> n;
    if(n%2==0)
        cout << n/2;
    else
        cout << (n/(-2))-1;
    return 0;
}

