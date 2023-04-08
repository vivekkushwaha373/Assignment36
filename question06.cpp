#include<iostream>
#include<array>
using namespace std;
int main()
{
  array<int,1>ar={};
  if(ar.empty())
  {
    cout<<"array is Empty";
  }
  else
  {
    cout<<"array is not empty";
  }

    return 0;
}