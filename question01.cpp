#include<iostream>
#include<array>
#include<tuple>
using namespace std;
fun(array <int,9>*s1)
{
   for(int i=0;i<s1->size();i++)
    {
        cout<<(*s1)[i]<<endl;
         
    } 
    // cout<<get<0>(*s1)<<endl;
    // cout<<get<1>(*s1)<<endl;
    // cout<<get<2>(*s1)<<endl;
    // cout<<get<3>(*s1)<<endl;
    // cout<<get<4>(*s1)<<endl;
    // cout<<get<5>(*s1)<<endl;
    // cout<<get<6>(*s1)<<endl;
    // cout<<get<7>(*s1)<<endl;
    // cout<<get<8>(*s1)<<endl;
}
int main()
{
    array <int,9>arr={1,2,3,4,5,6,7,8,9};
    fun(&arr);
   
    return 0;
}