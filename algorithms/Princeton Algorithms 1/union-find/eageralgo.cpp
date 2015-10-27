#include<iostream>
using namespace std;
#define N 1000
unsigned int arr[N];
void init()
{
for(int i=0;i<N;i++)
arr[i]=i;
}
void unionpath(int a,int b)
{
int p=arr[a];
int q=arr[b];
for(int i=0;i<N;i++)
if(p==arr[i])
arr[i]=q;
return;
}
bool connected(int a,int b)
{
return (arr[a]==arr[b]);
}
int main()
{
init();
unionpath(3,4);
unionpath(4,5);
cout<<connected(3,5)<<endl;
cout<<connected(4,6)<<endl;
return 0;
}
