#include <bits/stdc++.h>
using namespace std;

void f(string &str, int idx, string res, vector<string> &shay)
{
   if (idx == str.length())
   {
      shay.push_back(res);
      return;
   }

   f(str, idx + 1, res + str[idx], shay);
   f(str, idx + 1, res, shay);
}

int main()
{
   vector<string> lak;
   string s = "abc";
   f(s, 0, " ", lak);
   for (int i = 0; i < lak.size(); i++)
   {
      cout << lak[i] << " ";
   }

   return 0;
}