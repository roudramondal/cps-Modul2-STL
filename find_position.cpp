#include<bits/stdc++.h>
using namespace std;
void solve (){
  vector<int> v{1, 30, 30, 5, 6, 30,3};
  // int mx = max_element(v.begin(), v.end()) - v.begin();
  // cout << mx << endl;// position print
  // cout<<v[mx]<<endl; it will print max value 
  // And also if i want to count vector
  //cout << count(v.begin(), v.end(), 3); this is simple count
  cout << count(v.begin(), v.end(), *max_element(v.begin(), v.end()));// it also help max_value count 
}

int main()
{
  ios::sync_with_stdio(false);
  cin.tie(0);
  solve();
  return 0;
}