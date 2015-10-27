#include<iostream>
#include<algorithm>
#include<vector>
using namespace std;
void display(vector<char> v)
{
for(int i=0;i<v.size();i++)
cout<<v[i]<<" ";
cout<<endl;
}
void d3partition(vector<char> &v)
{
int a=0,b=v.size()-1,x=a+1;
int ele=v[a];
while(x<=b)
{
if(ele > v[x])
swap(v[x++],v[a++]);
if(ele < v[b])
b--;
if(v[x] > ele && v[b] <=ele && x<=b)
swap(v[x],v[b]);
if(v[x]==ele)
x++;
}
}
int main()
{
vector<char> v;
v.push_back('P');
v.push_back('A');
v.push_back('S');
v.push_back('C');
v.push_back('D');
v.push_back('X');
v.push_back('P');
v.push_back('G');
v.push_back('H');
v.push_back('I');
v.push_back('J');
v.push_back('V');
v.push_back('A');
v.push_back('P');
display(v);
d3partition(v);
display(v);
return 0;
}
