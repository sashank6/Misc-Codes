#include <iostream>
#include<vector>
#include<cmath>
#include<algorithm>
using namespace std;
vector<string> v;
vector<string> v1;
void init()
{
	v.push_back("Zero");
	v.push_back("One");
	v.push_back("Two");
	v.push_back("Three");
	v.push_back("Four");
	v.push_back("Five");
	v.push_back("Six");
	v.push_back("Seven");
	v.push_back("Eight");
	v.push_back("Nine");
	v.push_back("Ten");
	v.push_back("Eleven");
	v.push_back("Twelve");
	v.push_back("Thirteen");
	v.push_back("Fourteen");
	v.push_back("Fifteen");
	v.push_back("Sixteen");
	v.push_back("Seventeen");
	v.push_back("Eighteen");
	v.push_back("Nineteen");
	v.push_back("Twenty");
	v.push_back("Thirty");
	v.push_back("Forty");
	v.push_back("Fifty");
	v.push_back("Sixty");
	v.push_back("Seventy");
	v.push_back("Eighty");
	v.push_back("Ninety");
	v1.push_back("");
	v1.push_back("Thousand");
	v1.push_back("Million");
	v1.push_back("Billion");
	
}

string getWord(string str)
{
	int len=str.length();
	switch(len)
	{
		case 1:
		return v[str[0]-'0'];
		break;
		case 2:
		{
			int num=(str[0]-'0')*10+str[1]-'0';
			if(num < 21)
			return v[num];
			string t="";
			int c=num/10;
			t+=v[c+18]+" ";
			t+=v[num%10];
			return t;
		}
		break;
		case 3:
		{
			string t=getWord(str.substr(1));
			t=v[str[0]-'0']+" Hundred "+t;
			return t;
		}
		break;
	}
}

string convWord(string str)
{
	int len=str.length();
	if(len<=3)
	return getWord(str);
	
	string t="";
	int start=0;
	if(len%3!=0)
	{
		t=getWord(str.substr(start,len%3))+" "+t;
		t=t+v1[((int)ceil((double)((double)len/3)))-1];
		start+=len%3;
		len=len-len%3;
	}
     while(len)
     {
		t=t+" "+getWord(str.substr(start,3))+" ";
		t=t+v1[((int)ceil((double)((double)len/3)))-1];
		start+=3;
		len-=3;
     }
	
	
	if(t[0]==32)
	t=t.substr(1);
	if(t[t.length()-1]==32)
	t=t.substr(0,t.length()-1);
	return t;
	
	
	
	
	
}

int main() {
	// your code goes here
	init();
	int tc;
	cin>>tc;
	while(tc--)
	{
		string str;
		cin>>str;
		cout<<convWord(str)<<endl;
	}
	
	
	return 0;
}
