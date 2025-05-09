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
  sort(v.begin(), v.end());
  for (auto x:v)
  {
    cout << x << " ";
  }
  cout << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}