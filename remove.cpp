#include<bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> v{1, 2, 3, 4, 5,6,7,8};
  //v.erase(v.begin() + 2);//erase work with pointer that's why i use here v.begin() function  
  // long range value can be remove  using erase
  v.erase(v.begin() + 2, v.begin() + 4);
  // for range remove always count one more that's why i put 5 
  for (auto x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}