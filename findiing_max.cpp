#include<bits/stdc++.h>
using namespace std;
void solve ()
{
   vector<int> v{1, 3, 45, 5};
   int value = *max_element(v.begin(), v.end());
   cout << value << endl;
}
int main()
{
  ios_base::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}