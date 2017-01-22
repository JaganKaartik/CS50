#include<iostream>
#include<string.h>
using namespace std;
int main()
{
	char str[100];
	int n,i;
	std::cout<<"Enter a String : ";
	std::cin.getline(str,100);
	n=strlen(str);
	std::cout<<str[0];
	 for(i=0;i<n;++i)
	 {
		if(str[i]==' ')
		{
			std::cout<<str[i+1];
		}
	 }		
	return 0;
}			
