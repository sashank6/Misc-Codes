#include"stdlibs.h"
vector<string> stdlibs::split(string data,char delimiter)
{
	int length=data.length();
	vector<string> result;
	string tempData="";
	for(int index=0;index<length;index++)
	{
		if(data[index]==delimiter)
		{
			result.push_back(tempData);
			tempData="";
		}
		else
		{
			tempData+=data[index];
		}
	}
	if(tempData.length()!=0)
	result.push_back(tempData);
	return result;
}
