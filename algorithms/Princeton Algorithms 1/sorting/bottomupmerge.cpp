#include<iostream>
#include<vector>
#include<cmath>
using namespace std;
void merge(int low,int mid,int high, vector<int> &v)
{
if(low <high)
{
vector<int> x;
int i,j;
for(i=low,j=mid+1;i<=mid&&j<=high;)
{
if(v[i]<v[j])
{
x.push_back(v[i]);
i++;
}
else
{
x.push_back(v[j]);
j++;
}
}
while(i!=mid+1)
{
x.push_back(v[i]);
i++;
}
while(j!=high+1)
{
x.push_back(v[j]);
j++;
}
int p=0;
for(int n=low;n<=high;n++)
{
v[n]=x[p++];
}
}
}
int main()
{
int arr[]={38,27,43,3,9,82,10};
int len=sizeof(arr)/sizeof(*arr);

vector<int> v;
for(int g=0;g<len;g++)
v.push_back(arr[g]);
double p=log2(len);
int dsz=1;
dsz=dsz<<((int)ceil(p+1));
for(int sz=2;sz<=dsz;sz=sz<<1)
{
for(int k=0;k<len;k=k+sz)
{
int low=k;
int high=(k+sz-1 < len)?k+sz-1:len-1;
int mid=(low+high)/2;
merge(low,mid,high,v);
}
}


for(int i=0;i<v.size();i++)
cout<<v[i]<<endl;
return 0;
}

