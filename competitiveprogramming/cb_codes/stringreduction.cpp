#include<iostream>
using namespace std;
unsigned int reduce(string &str1,string &str2)
{
str2="";
unsigned int len=str1.length();
unsigned int sum=97+98+99;
char buf=str1[0];
for(int i=1;i<len;i++)
{
if(buf==str1[i])
{
str2+=buf;
buf=str1[i];
}
else
buf=sum-(buf+str1[i]);
}
str1="";
str2+=buf;
return str2.length();
}
unsigned int process(string str)
{
string one=str;
string two="";
unsigned int t1=0;
unsigned int t2=0;
while(1)
{
t2=reduce(one,two);
t1=reduce(two,one);
if(t2==t1)
break;
}
return t2;
}
int main()
{
string one;
string two;
cin>>one;
cout<<process(one)<<endl;
return 0;
}
