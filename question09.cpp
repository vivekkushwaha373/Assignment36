#include<iostream>
#include<array>
using namespace std;
int main()
{
int count=0;
array<int,6>s={1,2,3,3,5,4};
auto t=s.begin();
cout<<"Elements odd number of times are: ";
for(t;t!=s.end();t++)
{
    for(auto t1=s.begin();t1!=s.end();t1++)
    {
         if(*t1==*t)
         count++;
    }
    if(count%2!=0)
    {
        cout<<*t<<" ";
    }
    count=0;
}
    return 0;
}