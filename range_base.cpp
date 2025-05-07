#include<bits/stdc++.h>
using namespace std;
int main ()
{
  // vector<int> v{1, 2, 4, 5};
  // for (int x:v)// i can replace int into auto. it work for all data type
  // {
  //   cout << x << " ";
  // }
  // another way
  vector<int> v(5);
  for (int &x:v)// i have to use here addressing (&)then it will print the output
  {
    cin >> x;
  }
  for (int &x:v)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}