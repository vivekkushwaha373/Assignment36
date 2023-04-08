#include<iostream>
#include<array>
using namespace std;
int main()
{

array<int,12>arr={1,2,3,4,5,6,7,8,9,10,11,12};
cout<<"the size of an array is: "<<arr.size()<<endl;
//it case of array we can use :
cout<<"the size of an array is: "<<arr.max_size()<<endl;
    return 0;
}