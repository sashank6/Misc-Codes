#include<iostream>
#include<time.h>
#include<cstdlib>
using namespace std;
int randchoice()
{
srand(time(0));
return rand()%100+1;
}
int main()
{
for(int i=0;i<20;i++)
cout<<randchoice()<<endl;
return 0;
}
