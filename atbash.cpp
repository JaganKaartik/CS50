/* Coded By Jagan Kaartik */

#include<iostream>
#include<string.h>
using namespace std;

int main()
{
	char text[30];
	int n,k;
	std::cout<<"Enter the Text : ";
	std::cin.getline(text,30);
    n=strlen(text);
    //function to encrypt
    for(int i=0;i<n;++i)
    {
    	k=text[i]-65;
    	text[i]=90-k;
    	
    }
    std::cout<<text;
	return 0;
}
