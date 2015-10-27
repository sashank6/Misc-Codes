#include<iostream>
#include<vector>
using namespace std;
vector<string> split(string str,char delim)
{
	vector<string> data;
	unsigned int length=str.length();
	string temp="";
	for(unsigned int i=0;i<length;i++)
	{
		if(str[i]==delim)
		{
			data.push_back(temp);
			temp="";
		}
		else
		temp+=str[i];
	}
   data.push_back(temp);
	return data;
}
int main()
{
	string drt="Sashank,Alladi,Great";
	vector<string> dd=split(drt,',');
	for(int i=0;i<dd.size();i++)
	{
		cout<<dd[i]<<endl;
	}
	return 0;
}
