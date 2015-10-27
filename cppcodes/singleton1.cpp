#include<iostream>
using namespace std;
class Test
{
static int count;
public:
Test();
void display()
{
cout<<"hello"<<count<<endl;
}
};
int Test::count=0;
Test::Test()
{
count++;
cout<<count<<endl;
}
int main()
{
Test *obj;
obj->display();
Test *obj2;
obj2->display();
return 0;
}
