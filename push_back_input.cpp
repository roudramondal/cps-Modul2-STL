#include<bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> v6;
  int n;
  cin >> n;
  for (int i = 0; i < n;i++)
  {
    int x;
    cin >> x;
    v6.push_back(x);
  }
  for (int i = 0; i < v6.size();i++)
  {
    cout << v6[i] << " ";
  }
  cout << endl;
  return 0;

}