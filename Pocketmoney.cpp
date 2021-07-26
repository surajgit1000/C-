#include <bits/stdc++.h>
using namespace std;
int main()
{
  int pocketmoney;
  cout << "Enter The amount of pocketmoney Mira has:";
  cin >> pocketmoney;
  cout << "The date in which mira can go Market according to her pocketMoney is" << endl;
  for (int i = 1; i <= 30; i++)
  {
    if (i % 2 == 0)
    {
      continue;
    }
    pocketmoney = pocketmoney - 300;
    if (pocketmoney > 0)
    {
      cout << i << endl;
    }
  }
  return 0;
}