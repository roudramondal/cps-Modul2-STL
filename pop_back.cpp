#include<bits/stdc++.h>
using namespace  std;
int main ()
{
  vector<int> v3;
  v3.push_back(1);
  v3.push_back(2);
  v3.push_back(3);
  v3.push_back(4);
  v3.push_back(5);
  v3.pop_back();
  v3.pop_back();
  for (int i = 0; i < v3.size();i++)
  {
    cout << v3[i] << " ";
  }
  return 0;
}