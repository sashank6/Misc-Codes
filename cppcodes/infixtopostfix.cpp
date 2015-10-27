#include <iostream>
#include<stack>
#include<map>
#include<cmath>
#include<vector>
using namespace std;
map<char,int> myMap;
void init()
{
	myMap['+']=1;
	myMap['-']=1;
	myMap['*']=2;
	myMap['/']=2;
	myMap['^']=3;
}
string parseString(string str,int & j)
{
	int count=0;
	if(str[0]=='(')
	count++;
	string temp="";
	int i;
	for(i=count;i<str.length();i++)
	{
		if(str[i]=='(')
		count++;
		if(str[i]==')')
		count--;
		if(count)
		{
			temp+=str[i];
		}
		else
		{
		
		j=i;
		return temp;
		}
	}
	j=i;
	return temp;
}
int check(char x,char p)
{
	return abs(myMap[x]-myMap[p]);
}
bool isOperand(char x)
{
	if(x>=97&&x<=122)
	return true;
	return false;
}
int isOperator(char x)
{
	return myMap[x];
}
string reverse(string str)
{
	int i=0,j=str.length()-1;
	for(;i<str.length()/2;i++,j--)
	swap(str[i],str[j]);
	return str;
}
string popOperandStack(stack<char> &t)
{
	string temp="";
	
	for(;!t.empty();)
	{
		temp+=t.top();
		t.pop();
	}
	return reverse(temp);
}
string func(string str)
{
	stack<char> operandStack;
	stack<char> operatorStack;
	vector<string> exprs;
	string output="";
	for(int i=0;i<str.length();i++)
	{
		if(str[i]=='(')
		{
		
		}
		if(isOperand(str[i]))
		{
			operandStack.push(str[i]);
		}
		if(isOperator(str[i]))
		{
			if(operatorStack.size())
			{
				if(check(operatorStack.top(),str[i]))
				{
					operatorStack.push(str[i]);
				}
				else
				{
					output+=popOperandStack(operandStack);
					output+=operatorStack.top();
					operatorStack.pop();
					operatorStack.push(str[i]);
				}
			}
			else
			operatorStack.push(str[i]);
		}
		
	}
	output+=popOperandStack(operandStack);
	output+=reverse(popOperandStack(operatorStack));
	return output;
	
}



int main() {
	// your code goes here
	init();
	cout<<func("a+b*c/d");
	return 0;
}
