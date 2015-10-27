#include<iostream>
#include<vector>
#include<stack>
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

int eval(int second,int first,char op)
{
switch(op)
{
case '+':
return first+second;
case '-':
return first-second;
case '*':
return first*second;
case '/':
return first/second;
}
return -99;
}

int isInt(string str)
{
   for(int i=0;i<str.length();i++)
   if(isdigit(str[i])^1)
   return 0;
  return 1;
}
int rpn(string str)
{
vector<string> data=split(str,' ');
stack<int> vStack;
int len=data.size();
for(int i=0;i<len;i++)
{
    if(isInt(data[i]))
    vStack.push(stoi(data[i]));
    else
   {    
    int sec=vStack.top();
    vStack.pop();
    int fir=vStack.top();
    vStack.pop();
    vStack.push(eval(sec,fir,data[i][0]));
   }
}
return vStack.top();
}

int main()
{
cout<<rpn(gets(stdin));
}
