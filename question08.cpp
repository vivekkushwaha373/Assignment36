#include<iostream>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
array<int,5>ar={8,2,4,3,5};
for(int i=0;i<ar.size();i++)
{
    cout<<ar[i]<<" ";
}

cout<<endl<<"array sorted in reverse order"<<endl;
sort(ar.begin(),ar.end(),greater<int>());
for(int i=0;i<ar.size();i++)
{
    cout<<ar[i]<<" ";
}
    return 0;
}