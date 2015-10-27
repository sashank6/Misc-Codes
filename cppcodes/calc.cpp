#include<iostream>
using namespace std;
int main()
{
int base;
int loadvalue;
cin>>base;
cin>>loadvalue;
for(int i=1;i<=15;i++)
cout<<"Cycle load of "<<i<<" "<<(base)+i*loadvalue<<endl;
return 0;
}
