// taking input from the user like an array 
#include<bits/stdc++.h>
using namespace std;
int fun()
{
  return 7;
  
}
int main ()
{
  //vector<int> v5(5,9);//anything  i can sign here.with dependent on the data type
  // use i can use function
  vector<int> v5(5, fun());
  cout << v5.size() << endl;
  
  for (int i = 0; i < v5.size();i++)
  { 
    cout << v5[i] << " ";
  }
  cout << endl;
  return 0;
}