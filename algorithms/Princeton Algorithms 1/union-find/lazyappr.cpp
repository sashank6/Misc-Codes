#include<iostream>
#define N 1000
using namespace std;
unsigned int arr[N];
void init()
{
for(int i=0;i<N;i++)
arr[i]=i;
}
unsigned int root(int a)
{
int x=arr[a];
while(x!=arr[x]) x=arr[x];
return x;
}
void connect(int a,int b)
{
int x=root(a);
int y=root(b);
arr[x]=y;
}
bool connected(int a,int b)
{
return (root(a)==root(b));
}
int main()
{
init();
connect(3,5);
connect(5,8);
connect(2,3);
connect(8,12);
cout<<connected(2,12)<<endl;
return 0;
}
