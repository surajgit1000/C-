#include <bits/stdc++.h>
using namespace std;
int main()
{
    int money,i;
    money = 2700;
    for ( i = 1; i <= 30; i++)
    {
    //   if(i%2==0){
    //       continue;
    //   }
      if(money==0){
          break;
      }
      money=money-500;
      cout<<i<<endl;
    }
}