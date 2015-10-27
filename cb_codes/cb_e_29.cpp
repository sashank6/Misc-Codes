#include<iostream>
using namespace std;
static unsigned int ct=0;
int Calc(int num)
{
ct++;
int sum=1;
while(num)
{
sum*=num%10;
num/=10;
}
return sum;
}
int main()
{
int num;
cin>>num;
while(num>9)
{
num=Calc(num);
}
cout<<ct<<endl;
return 0;
}
