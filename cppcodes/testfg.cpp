#include<iostream>
using namespace std;
#define DEFAULT_COLOR "\e[0m"
#define BOLD_TEXT "\e[1m"
#define GREEN_TEXT "\e[32m"
#define BLACK_TEXT "\e[30m"
#define RED_TEXT "\e[31m"
#define YELLOW_TEXT "\e[33m"
#define BLUE_TEXT "\e[34m"
#define MAGENTA_TEXT "\e[35m"
#define CYAN_TEXT "\e[36m"
#define WHITE_TEXT "\e[37m"
#define DEFAULT_TEXT "\e[39m"

#define GREEN_BACKGROUND "\e[42m"
#define BLACK_BACKGROUND "\e[40m"
#define RED_BACKGROUND "\e[41m"
#define YELLOW_BACKGROUND "\e[43m"
#define BLUE_BACKGROUND "\e[44m"
#define MAGENTA_BACKGROUND "\e[45m"
#define CYAN_BACKGROUND "\e[46m"
#define WHITE_BACKGROUND "\e[47m"
#define DEFAULT_BACKGROUND "\e[49m"


int main()
{
cout<<YELLOW_BACKGROUND<<GREEN_TEXT<<"Text Box"<<DEFAULT_COLOR<<endl;
return 0;
}
