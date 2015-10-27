#include<iostream>
#include<vector>
#include<cmath>
#include<sstream>
using namespace std;
unsigned int parseInt(string p_Data)
{
unsigned int result=0;
unsigned int length=p_Data.length();
for(int index=length-1;index>=0;index--)
result+=(p_Data[index]-'0')*pow(10,length-index-1);
return result;
}
vector<string> split(string data,char delimiter)
{
	int length=data.length();
	vector<string> result;
	string tempData="";
	for(int index=0;index<length;index++)
	{
		if(data[index]==delimiter)
		{
			result.push_back(tempData);
			tempData="";
		}
		else
		{
			tempData+=data[index];
		}
	}
	if(tempData.length()!=0)
	result.push_back(tempData);
	return result;
}
unsigned int getTimeinMins(string time)
{
vector<string> data=split(time.substr(0,5),':');
unsigned int result;
if(time.substr(5,2)=="AM")
{
result=((parseInt(data[0])<=11)?(parseInt(data[0])*60):(0))+parseInt(data[1]);
}
else
if(time.substr(5,2)=="PM")
{
result=((parseInt(data[0])<=11)?((parseInt(data[0])*60)+720):(720))+parseInt(data[1]);
}

return result;
}

string convertTime(unsigned int data)
{
stringstream s1;
unsigned int hrs=data/60;
if(hrs<10)
s1<<0;
s1<<hrs;
s1<<":";
unsigned int min=data%60;
if(min<10)
s1<<0;
s1<<min;
string fgt=s1.str();
s1.clear();
return fgt;
}
void MostFreeTime(string data[],unsigned int len)
{
bool tempData[1440];
for(int i=0;i<1440;i++)
tempData[i]=0;
unsigned int max=0,min=9999;
for(unsigned int i=0;i<len;i++)
{
vector<string> tempData1=split(data[i],'-');
unsigned int start=getTimeinMins(tempData1[0]);
unsigned int end=getTimeinMins(tempData1[1]);
for(int j=start-1;j<end;j++)
tempData[j]=1;
if(min>start)
min=start;
if(max<end)
max=end;
}

unsigned int count=0;
unsigned int maxcount=0;
for(int i=min-1;i<max;i++)
{
if(tempData[i]==0)
{
count++;
}
else
{
if(count)
if(maxcount<count)
maxcount=count;
count=0;
}

}
cout<<convertTime(maxcount+1);

}
int main()
{

string A[] = gets(stdin);
unsigned int len=sizeof(A)/sizeof(*A);
MostFreeTime(A,len);
return 0;
}
