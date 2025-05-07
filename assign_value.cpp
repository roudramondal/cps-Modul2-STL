// assign ()function or resize ()
#include<bits/stdc++.h>
using namespace std;
int main ()
{
  vector<int> input1(4, 10);
  //input1.assign(5, 1);// it helps to change the vector size 
  input1.resize(7);// also it helps to resize the vector. here i assign size 7 .which is add extra value .so extra 3 value will be 0 that's it
  for (int i = 0; i < input1.size();i++){
    cout << input1[i] << " ";
  }
  cout << endl;
  return 0;
}