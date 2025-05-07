#include<bits/stdc++.h>
using namespace  std;
int main ()
{
  vector<int> v4;
  v4.push_back(1);
  v4.push_back(2);
  v4.push_back(3);
  v4.push_back(4);
  v4.push_back(5);
  v4.pop_back();
  v4.pop_back();
  cout << v4.back() << endl;
  return 0;
}