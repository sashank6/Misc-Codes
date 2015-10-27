#include<iostream>
#include<ctime>
using namespace std;
string getFileName(string p_FileName)
{

time_t rawtime;
  struct tm * timeinfo;

  time ( &rawtime );
  timeinfo = localtime ( &rawtime );
  return p_FileName+"_"+asctime(timeinfo);

}
int main()
{
cout<<getFileName("Sashank");
return 0;
}
