#include<vector>
#include<string>
#include<cmath>
using namespace std;
class Utility
{
	public:
	static double parseDoublePart(string &);
	static unsigned int parseInteger(string &);
	static double parseDouble(string &);
	static vector<string> split(string &,char &);
	static bool validateInteger(string &);
	static bool validateDouble(string &);
	static bool validateEmail(string &);
	static bool validateDate(string &);
};
