// use push_back ()
#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<int> v2;
  v2.push_back(2);
  v2.push_back(3);
  v2.push_back(5);
  v2.push_back(1);
  v2.push_back(10);
  cout << v2.size() << endl;//for find the vector size that's it
  for (int i = 0; i < v2.size();i++)
  {
    cout << v2[i] << " ";
  }
  cout << endl;
  return 0;
}