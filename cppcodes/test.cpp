#include<iostream>
#include<vector>
#include<ctype.h>
using namespace std;
bool test(string str)
{
	unsigned int length=str.length();
	unsigned int count=0;
	unsigned int index=0;
	vector<string> data(3,"");
   for(unsigned int i=0;i<length;i++)
{
  unsigned int status=((isdigit(str[i]))?5:(str[i]=='/'&&count<2)?(++count):0);
	cout<<status<<endl;
		if(status==5)
		data[index]+=str[i];
      else
      if(status>0)
		index++;
		else
		return false;
}	
return true;

}
int main()
{
cout<<test("29/08-/1993");
return 0;
}
