#include<iostream>
#include<math.h>
using namespace std;
unsigned short int checkperfectsquare(unsigned int i)
{
if((sqrt(i)-(int)sqrt(i))==0)
return 1;
return 0;
}
int main()
{
int a[100000];
a[0]=2;
a[1]=3;
unsigned int sum=2;
unsigned int ct=2;
unsigned int j=0;
for(unsigned long int i=5;i<1000000;i+=2)
{
for(j=0;j<ct;j++)
{
if((i%a[j])==0)
break;
}
if(j==ct)
{
a[ct++]=i;
if(checkperfectsquare(i-1))
sum+=i;
}
}
cout<<sum<<endl;
return 0;
}
