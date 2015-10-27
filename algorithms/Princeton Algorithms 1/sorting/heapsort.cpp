#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<char> v)
{
for(int i=1;i<v.size();i++)
cout<<(int)v[i]<<" ";
cout<<endl;
}
void swim(int k,vector<char> &v)
{
while(k>1)
{
//cout<<k<<endl;
if(v[k] > v[k/2])
swap(v[k],v[k/2]);
k=k/2;
}
}
void sink(int k,vector<char> &v)
{
while(2*k+1<=v.size()-1)
{
int s=(v[2*k+1]<v[2*k]);
if(v[k] < v[2*k+s])
swap(v[k],v[2*k+s]);
k=2*k+s;
}
while(2*k<=v.size()-1)
{
if(v[k] > v[2*k])
swap(v[k],v[2*k]);
k=2*k;
}
}
void dem(int k,vector<char> &v,int len)
{
while(2*k+1<len)
{
int s=v[2*k+1] > v[2*k];
if(v[k]<v[2*k+s])
{
swap(v[k],v[2*k+s]);
}
k=2*k+s;
}
while(2*k<len)
{
if(v[k] < v[2*k])
swap(v[k],v[2*k]);
k=2*k;
}
}


void func(vector<char> &v)
{
int lastindex=v.size();
while(lastindex>1)
{
swap(v[1],v[--lastindex]);
dem(1,v,lastindex);
}
}

int main()
{
vector<char> v;
v.push_back('a');
char arrl[]={'S','O','R','T','E','X','A','M','P','L','E'};
for(int i=0;i<sizeof(arrl)/sizeof(*arrl);i++)
{
v.push_back(arrl[i]);
if(i<sizeof(arrl)/sizeof(*arrl)-1)
swim(i+1,v);
}
display(v);
func(v);
//dem(1,v,v.size()-2);
display(v);
return 0;
}

