#include<iostream>

#include<array>
#include<iterator>
using namespace std;

int main()
{
array<int,6>s1={1,2,3,4,5,6};

array<int,6>::iterator x;

// cout<<*x<<endl;
// cout<<s1.end()<<endl;
for(auto x=s1.rbegin();x!=s1.rend();x++)
cout<<*x<<" ";
return 0;
}

