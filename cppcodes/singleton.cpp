#include<iostream>
using namespace std;
class Test
{
   static Test *inst;
   static int count;
   Test();
   public:
   static Test* getInstance();
   void display();
};
int Test::count=0;
void Test::display()
{
cout<<"Testing Singleton"<<","<<count<<endl;
}
Test* Test::inst;
Test::Test()
{
cout<<"Object Created"<<endl;
count++;
}
Test* Test::getInstance()
{
if(inst==NULL)
inst=new Test();
return inst;
}
int main()
{
Test *obj=Test::getInstance();
obj->display();
Test *obj2=Test::getInstance();
obj2->display();
return 0;
}
