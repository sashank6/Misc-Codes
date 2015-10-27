#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<char> v)
{
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
}
int qpartition(vector<char> &v,int low,int high)
{
int pvalue=low;
if(low<high)
{
int i=low+1,j=high;
int ele=v[low];
while(i<=j)
{
if(v[i]<=ele)
i++;
if(v[j]>=ele)
j--;
if(v[i]>ele&&v[j]<=ele&&i<j)
swap(v[i++],v[j--]);
}
if(ele>v[j])
{
swap(v[low],v[j]);
pvalue=j;
}
else
if(ele > v[i])
{
swap(v[low],v[i]);
pvalue=i;
}
}
return pvalue;
}

void qsort(int low,int high,vector<char> &v)
{
//display(v);
if(low<high)
{
int pvalue=qpartition(v,low,high);
qsort(low,pvalue-1,v);
qsort(pvalue+1,high,v);
}
}
int main()
{
char arr[]={'K','R','S','T','E','L','E','P','U','I','M','Q','C','O','X','S'};
vector<char> v;
int len=sizeof(arr)/sizeof(*arr);
for(int i=0;i<len;i++)
v.push_back(arr[i]);
//cout<<qpartition(v,4,6)<<endl;
qsort(0,v.size()-1,v);
display(v);
return 0;
}

