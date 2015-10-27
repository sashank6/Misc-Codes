#include<iostream>
#include<vector>
using namespace std;
int main()
{
unsigned long int high;
cin>>high;
vector<bool> data(high+1,false);
for(unsigned long int i=high;i>=high-10;i--)
cout<<data[i]<<endl;
return 0;
}
