#include<iostream>
#include<sstream>
#include<iomanip>
using namespace std;
string format(string data)
{
string temp="";
int len=data.length();
for(int i=0;i<len;i++)
if(data[i]!='.')
temp+=data[i];
else
break;
return temp;
}

int main()
{
stringstream s;
double g=6.234556;
s<<setprecision(5)<<g;
string t=s.str();
s.clear();
cout<<format(t)<<endl;

}
