#include <iostream>
using namespace std;
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
	int len=str.length();
	string t=makepalindrome(str,len);
	if(t<=str)
	cout<<nextpalindrome(str,len)<<endl;
	else
	cout<<t<<endl;
	}
	return 0;
}
