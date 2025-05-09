#include<bits/stdc++.h>
using namespace std;
void solve ()
{
  int n, k;
  cin >> n >> k;
  vector<int> v(n);
  for (int i = 0; i < n;i++)
  {
    cin >> v[i];
  }
  
  int key_value = v[k - 1];
  int count =0;
  for (auto x :v)
  {
    if (x>=key_value&&x>0)
    {
      count++;
    }
  }
  cout << count << endl;
}
int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}