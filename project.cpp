#include <bits/stdc++.h>
using namespace std;
int main()
{
    int a, b,j;
    cin >> a >> b;
    for (int num = a; num < b; num++)
    {
        for ( j = 2; j < num; j++)
        {
            if (num%j == 0)
            {
                break;
            }
        }
        if (j == num)
        {
            cout << num<<endl;
        }
    }
}