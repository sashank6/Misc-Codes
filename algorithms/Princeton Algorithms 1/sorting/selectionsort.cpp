#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v;
for(int i=10;i>=0;i--)
{
v.push_back(i);
}
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
for(int i=0;i<v.size();i++)
{
int index=distance(v.begin(),min_element(v.begin()+i,v.end()));
swap(v[i],v[index]);
}
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
return 0;
}
