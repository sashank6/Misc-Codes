#include<iostream>
#include<sstream>
using namespace std;
string integerToString(unsigned int value)
{
stringstream s1;
s1<<value;
string data=s1.str();
s1.clear();
return data;
}
string doubleToString(double value)
{
stringstream s1;
s1<<value;
string data=s1.str();
s1.clear();
return data;
}
double parseDouble(string value)
{
return stod(value);
}
double parseInteger(string value)
{
	return stoi(value);
}
int main()
{
cout<<parseInteger(integerToString(897667676))<<endl;
cout<<parseDouble(doubleToString(89.7))<<endl;
return 0;
}
