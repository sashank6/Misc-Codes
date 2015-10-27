#include"../Include/Utility.h"
using namespace std;
unsigned int Utility::parseInteger(string & p_Data)
{

	unsigned int result=0;
	unsigned int length=p_Data.length();
	for(int index=length-1;index>=0;index--)
	result+=(p_Data[index]-'0')*pow(10,length-index-1);
	return result;
}
double Utility::parseDoublePart(string& p_Data)
{

	unsigned int length=p_Data.length();
	double result=0;
	for(int index=1;index<length;index++)
	result+=(p_Data[index]-'0')*pow(10,-(int)(index));
	return result;
}
double Utility::parseDouble(string & p_Data)
{
   char delim='.';
   vector<string> tempData=Utility::split(p_Data,delim);
	double result;
        if(tempData.size()!=2||tempData.size()<2||tempData.size()>2)
	return -1;
	else
	{
	unsigned int integerPart=Utility::parseInteger(tempData[0]);
	string doublePart="."+tempData[1];
	result=(integerPart)+(Utility::parseDoublePart(doublePart));
	}
return result;	    
}
bool Utility::validateDate(string & p_Data)
{
int l_MaxDaysInMonth[]={31,28,31,30,31,30,31,31,30,31,30,31};
    char l_Delim='/';
    int l_Month;
    int l_Year;
    int l_Day;
    vector<string> data=Utility::split(p_Data,l_Delim);
    if(data.size()!=3)
    return false;
    if(data[2].length()!=4 || !(Utility::validateInteger(data[2])))
    return false;
    l_Year=Utility::parseInteger(data[2]);
    l_Month=Utility::parseInteger(data[1]);
    if(l_Month<1||l_Month>12)
    return false;
    if(!(l_Year%4))
    l_MaxDaysInMonth[1]=29;
    l_Day=Utility::parseInteger(data[0]);
    if(l_Day<1||l_Day>l_MaxDaysInMonth[l_Month-1])
    return false;	
    return true;
}
