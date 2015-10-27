#include <iostream>
#include<string>
#include<cmath>
using namespace std;
 
int check(long int x)
{
 
	for(int i=999;i>99;i--)
	if(x%i==0)
	return i;
	return 0;
}
string prevpalindrome(string str,int len)
{
	int start=(len-1)/2;
	int end=(len-1)/2+!(len%2);
	int c=1;
	while(start > 0)
	{
		int s=str[start]-'0';
		s=s-c;
		s+=10;
		c=!(s/10);
		s=s%10;
		str[start--]=s+'0';
		str[end++]=s+'0';
	}
 
	if(str[start]=='1'&&c==1)
	{
		str[start]='9';
		str=str.substr(0,str.length()-1);
	}
	else
	{
		int s=str[start]-'0';
		s=s-c;
		str[start]=s+'0';
		str[end]=s+'0';
	}
 
	return str;
}
string makepalindrome(string str,int len)
{
	int i=0,j=len-1;
	while(i<j)
	str[j--]=str[i++];
	return str;
}
string nextpalindrome(string str,int len)
{
	int start=(len-1)/2;
	int end=(len-1)/2+!(len%2);
	int x=1;
	while(start >=0)
	{
		int s=str[start]-'0';
		s=s+x;
		x=s/10;
		s=s%10;
		str[start--]=s+'0';
		str[end++]=s+'0';
	}
	if(x)
	{
		str="1"+str;
		str[end]=1+'0';
	}
	return str;
}
 
 
int main() {
	// your code goes here
	int tc;
	cin>>tc;
	while(tc--)
	{
		string str;
		cin>>str;
		string t=nextpalindrome(str,str.length());
		while(t>"101101")
		{
			t=prevpalindrome(t,t.length());
			long int vf=stoi(t);
			int a=check(vf);
			if(a)
			{
				int b=vf/a;
				if(b>=100&&b<1000 && t<str)
				{
				cout<<t<<endl;
				break;
				}
			}
		}
	}
	return 0;
}
