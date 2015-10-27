#include<iostream>
#include<string>
#include<cmath>
#include<vector>
using namespace std;
vector<string> split(string p_Data,char delimiter)
{

	int length=p_Data.length();
	vector<string> result;
	string tempData="";
	for(int index=0;index<length;index++)
	{
		if(p_Data[index]==delimiter)
		{
			result.push_back(tempData);
			tempData="";
		}
		else
		{
			tempData+=p_Data[index];
		}
	}
	if(tempData.length()!=0)
	result.push_back(tempData);
	return result;

}
unsigned int parseInt(string p_Data)
{
unsigned int result=0;
unsigned int length=p_Data.length();
for(int index=length-1;index>=0;index--)
result+=(p_Data[index]-'0')*pow(10,length-index-1);
return result;
}
double parseDoublePart(string p_Data)
{
unsigned int length=p_Data.length();
double result=0;
for(int index=1;index<length;index++)
result+=(p_Data[index]-'0')*pow(10,-(int)(index));
return result;
}
double parseDouble(string p_Data)
{
   vector<string> tempData=split(p_Data,'.');
	double result;
        if(tempData.size()!=2||tempData.size()<2||tempData.size()>2)
	return -1;
	else
	{
	unsigned int integerPart=parseInt(tempData[0]);
	result=(integerPart)+(parseDoublePart("."+tempData[1]));
	}	    
   return result; 
}
int main()
{
cout<<parseDouble("9.009");
return 0;
}

