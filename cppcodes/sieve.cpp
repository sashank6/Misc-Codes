#include<iostream>
#include<cmath>
#include<vector>
using namespace std;
int main()
{
unsigned long int var=1000000000;
vector<bool> data(var);
for(int i=0;i<var;i++)
data[i]=true;
unsigned int var1=sqrt(var);
for(int i=2;i<=var1;i++)
for(int j=i+i;j<var;j+=i)
data[j]=false;
data[1]=false;
data[2]=true;
for(int i=1;i<var;i+=2)
if(data[i]==true)
cout<<i<<endl;
return 0;

}
