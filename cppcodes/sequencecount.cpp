#include<iostream>
using namespace std;
int main()
{
int arr[]={1,1,2,3,1,1,2,3,1};
int count=0;
int temp=0;
for(int i=0;i<9;i++)
{
if(arr[i]==1)
{
if(temp)
{
count++;
temp=0;
}
temp++;
}
}
cout<<count+1<<endl;
return 0;
}
