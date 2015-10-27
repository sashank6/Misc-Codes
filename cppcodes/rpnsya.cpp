#include<iostream>
#include<stack>
#include<map>
using namespace std;
stack<char> s;
map<char,int> mymap;
void init()
{
mymap['^']=1;
mymap['/']=2;
mymap['*']=2;
mymap['+']=3;
mymap['-']=3;
mymap['(']=4;
mymap[')']=4;
}
int val(char c)
{
return mymap[c];
}
bool isopr(char c)
{
return mymap[c];
}
bool isoperand(char c)
{
return isalpha(c);
}
string rpn(string str)
{
string t="";
for(int i=0;i<str.length();i++)
{
if(isoperand(str[i]))
{
t+=str[i];
continue;
}
if(isopr(str[i]))
{
if(str[i]=='(')
{
s.push(str[i]);
continue;
}
if(str[i]==')')
{
while(s.top()!='(')
{
t+=s.top();
s.pop();
}
if(s.top()=='(')
s.pop();
continue;
}
if(s.empty()||(val(str[i])<val(s.top())))
{
s.push(str[i]);
}
else
{
t+=s.top();
s.pop();
i--;
}
}
}
while(!s.empty())
{
t+=s.top();
s.pop();
}
return t;
}
int main()
{
init();
string str;
cin>>str;
cout<<rpn(str)<<endl;
return 0;
}
