#include<iostream>
#include<string>
#include<vector>
#include<map>
#include<math.h>
using namespace std;
char globVar;
void setGlobVar(string);
map<int,int> mergeMap(map<int,int> one,map<int,int> two)
{
map<int,int>::iterator it=one.begin();
map<int,int>::iterator it1=two.begin();
map<int,int> finalMap;
for(it=one.begin();it!=one.end();++it)
{
int pow1=it->first;
int coef=it->second;
for(it1=two.begin();it1!=two.end();++it1)
{
int pow2=it1->first;
int coef2=it1->second;
int h=finalMap[pow1+pow2];
h+=coef*coef2;
finalMap[pow1+pow2]=h;
}
}
return finalMap;
}
int parseInt(string p_Data)
{
int start_index=0;
int length=p_Data.length();
if(p_Data[0]=='-'||p_Data[0]=='+')
start_index=1;
int result=0;
for(int index=length-1;index>=start_index;index--)
result+=(p_Data[index]-'0')*pow(10,length-index-1);
if(start_index&&p_Data[0]=='-')
return -(result);
return result;
}

map<int,int> process_expr(string str)
{
map<int,int> myMap;
int len=str.length();
string temp_buf="";
for(int i=0;i<len;i++)
{
if(str[i]==globVar)
{
int coef=parseInt(temp_buf);
int power=1;
temp_buf="";
if(str[i+1]=='^')
{
string power_str="";
if(str[i+2]=='+'||str[i+2]=='-')
{
if(str[i+2]=='-')
power_str=str[i+2];
i+=3;
}
else
i+=2;
while(isdigit(str[i]))
{
power_str+=str[i++];
}
i--;
power=parseInt(power_str);
}
myMap.insert(pair<int,int>(power,coef));
}
else
temp_buf+=str[i];
}
if(temp_buf!="")
myMap.insert(pair<int,int>(0,parseInt(temp_buf)));
return myMap;
}
void process_data(string str)
{
   vector<string> myVec;
  while(str.length()!=0)
  {	
  int f_index=str.find("(");
  int l_index=str.find(")");
  myVec.push_back(str.substr(f_index+1,l_index-1));
  str=str.substr(l_index+1,str.length()-l_index);
  }
  setGlobVar(myVec[0]);
  vector<map<int,int> > Table;
  for(int i=0;i<myVec.size();i++)
  Table.push_back(process_expr(myVec[i]));
  map<int,int> test=mergeMap(Table[0],Table[1]);
  map<int,int>::reverse_iterator it2=test.rbegin();
  for(it2=test.rbegin();it2!=test.rend();++it2)
  {
    int pow=it2->first;
    int coeff=it2->second;
    if(it2!=test.rbegin())
    if(coeff>0)
    cout<<"+";
    if(pow==0)
    cout<<coeff;
    else
    cout<<coeff<<globVar<<"^"<<pow;	
  }



}
void setGlobVar(string str)
{
unsigned int len=str.length();
for(int i=0;i<len;i++)
if(isalpha(str[i]))
{
globVar=str[i];
break;
}
}

int main()
{
process_data(gets(stdin));
return 0;
}
