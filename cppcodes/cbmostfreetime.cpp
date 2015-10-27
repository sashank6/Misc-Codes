#include"stdlibs/stdlibs.h"
#include<iostream>
using namespace std;
int main()
{
stdlibs obj;
vector<string> data=obj.split("Sashank.Alladi",'.');
cout<<data[0]<<endl;
return 0;
}
