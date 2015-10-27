#include<iostream>
#define N 10
using namespace std;
int arr[N];
void init()
{
for(int i=0;i<N;i++)
arr[i]=i;
}
int root(int a,int &ct)
{
int x=arr[a];
while(x!=arr[x])
{
x=arr[x];
ct++;
}
return x;
}
int root(int a)
{
int x=arr[a];
while(x!=arr[x]) x=arr[x];
return x;
}

void connect(int a,int b)
{
int xct=0,yct=0;
int x=root(a,xct);
int y=root(b,yct);
if(xct>=yct)
arr[y]=x;
else
arr[x]=y;
}
bool connected(int a,int b)
{
return (root(a)==root(b));
}
void display()
{
for(int i=0;i<N;i++)
cout<<arr[i]<<" ";
cout<<endl;
}
int main()
{
init();
display();
connect(4,3);
connect(3,8);
connect(6,5);
connect(9,4);
connect(2,1);
cout<<connected(3,9)<<endl;
display();
return 0;
}
