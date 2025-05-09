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
  int x;
  cin >> x;
  int a, b;
  cin >> a >> b;
  v.erase(v.begin()+x-1);
  v.erase(v.begin() + (a - 1), v.begin() + (b-1));
  auto i = 0;
  auto it = find(v.begin(), v.end(), i);
  cout << it - v.begin() << endl;
  for (auto i:v)
  {
    cout << i << " ";
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