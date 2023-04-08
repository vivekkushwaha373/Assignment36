#include<iostream>
#include<tuple>
using namespace std;
int main()
{
array <int ,6>ar={1,2,3,4,5,6};
cout<<"Index at element 0 is: "<<get<0>(ar)<<endl;
cout<<"Index at element 0 is: "<<ar[0]<<endl;
cout<<"Index at element 0 is: "<<ar.at(0)<<endl;
    return 0;
}