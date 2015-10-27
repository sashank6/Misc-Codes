#include<iostream>
#include<vector>
using namespace std;
vector<string> int_data;
string finalStr="";
void genMin()
{
string temp=int_data[0];
int pos=0;
for(int i=0;i<int_data.size();i++)
if(temp>int_data[i])
{
temp=int_data[i];
pos=i;
}
finalStr+=temp;
if(pos!=(int_data.size()-1))
{
swap(int_data[pos],int_data[int_data.size()-1]);
}
int_data.pop_back();
}
void process(string data[])
{
unsigned int len=sizeof(data)/sizeof(data[0]);
cout<<len<<endl;
for(int index=0;index<len;index++)
if(data[index]=="E")
{
genMin();
}
else
int_data.push_back(data[index]);
cout<<finalStr<<endl;
}
int main()
{
string strarr[]={"908","249","512","E","E"};
process(strarr);
return 0;
}
