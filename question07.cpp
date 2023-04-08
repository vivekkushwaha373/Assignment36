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
sort(ar.begin(),ar.end());
cout<<"array is sorted"<<endl;

for(int i=0;i<ar.size();i++)
{
    cout<<ar[i]<<" ";
}

    return 0;
}