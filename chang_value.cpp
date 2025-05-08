#include <bits/stdc++.h>
using namespace std;
int main()
{
  vector<string> v{"Roudra", "Puja", "Prinka"};
 // v[1] = "Nirob";
  //cout << v[1] << endl;
  v.at(1) = "Nirob";
  cout << v.at(1) << endl; // this is better way to change the value;

  return 0;
}