#include<iostream>
#include<array>
using namespace std;
const int num=5;
returnarray(array<int,num> &s1)
{int count=0;
int max=1;
for(int i=0;i<s1.size();i++)
{
    if(s1.at(i)!=0)
    max=max*s1.at(i);
}
for(int i=0;i<s1.size();i++)
{
   if(s1.at(i)==0)
   count++;
}
if(count==1)
{
    for(int i=0;i<s1.size();i++)
    {
        if(s1.at(i)!=0)
        s1.at(i)=0;
        else
        s1.at(i)=max;
    }
}
if(count==2)
{
    for(int i=0;i<s1.size();i++)
    {
     s1.at(i)=0;   
    }
}
if(count==0)
{
    for(int i=0;i<s1.size();i++)
    {
     s1.at(i)=max/s1.at(i);   
    }
}
}


int main()
{

array<int,num>s1;
for(int i=0;i<s1.size();i++)
{
    cout<<"Enter the "<<i+1<<" Element: ";
    cin>>s1[i];
}
cout<<endl;
cout<<"Element entered are: "<<endl;
for(int i=0;i<s1.size();i++)
cout<<s1[i]<<" ";
returnarray(s1);
cout<<endl;
cout<<"Elements obtained: "<<endl;
for(int i=0;i<s1.size();i++)
    {
        cout<<s1[i]<<" ";
    }
    return 0;
}