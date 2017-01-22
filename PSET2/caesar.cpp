#include<iostream>
#include<string.h>
#include<stdio.h>
#include<ctype.h>

using namespace std;


int main()
{
      char str[10];
      int n,k;
	
      cout<<"Enter a String : ";
      cin.getline(str,10);
      cout<<"Enter the key : ";
      cin>>k;
	
      n=strlen(str);
	
        for(int i=0;i<n;++i)
	{
	   if (isalpha(str[i]))
	    {
             str[i] = toupper(str[i]); 
             str[i] = (((str[i]-65) + k) % 26) + 65;
            }
    
	}
	
	cout<<"Cipher Text : "<<str<<endl;
	return 0;	
}

