#include<bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> v{1, 3, 4, 30};
  // insert used to insert value in the vector 
 //v.insert(v.begin()+1,7);// range insert not possible in vector 
 // when i want to insert multipule value in the vector
  vector<int> nw{10, 11};
  //v.insert(v.begin() + 2, nw.begin(), nw.end());
  // this is another way to insert value 
  v.insert(v.begin() + 1, {10, 11});

  for (int x : v)
  {
    cout << x << " ";
  }
  cout << endl;
  return 0;
}