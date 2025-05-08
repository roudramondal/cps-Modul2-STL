#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  int n;
  cin >> n;
  vector<int> v(n);
  for (int i = 0; i < n;i++)
  {
    cin >> v[i];
  }
  int min = min_element(v.begin(), v.end()) - v.begin();
  cout << min << " " << v[min] << endl;
}
int main ()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}