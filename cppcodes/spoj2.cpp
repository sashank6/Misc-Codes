#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
vector<unsigned long int> data;
data.push_back(2);
for(unsigned long int i=3;i<=31800;i++)
{
bool status=true;
for(unsigned long int j=0;j<data.size();j++)
{
if(!(i%data[j]))
{
status=false;
break;
}
}
if(status)
data.push_back(i);
}
unsigned int tc;
cin>>tc;
while(tc--)
{
unsigned long int low,high;
cin>>low>>high;
unsigned int i,j,k;
if(high<=31800)
{
for(i=0;data[i]<low;i++);
for(;data[i]<=high;i++)
cout<<data[i]<<endl;

}
else
{
if(low<=31800)
{
for(i=0;data[i]<low;i++);
for(;i<data.size();i++)
cout<<data[i]<<endl;
low=31801;
}
vector<bool> data1(high+1,true);
unsigned long int ulimit=sqrt(high)+1;
for(unsigned int i=0;data[i]<=ulimit;i++)
{
for(unsigned int j=low-(low%data[i]);j<=high;j+=data[i])
data1[j]=false;
}
for(unsigned long int i=low;i<=high;i++)
if(data1[i])
cout<<i<<endl;
}
}
return 0;

}
