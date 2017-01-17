#include<iostream>
#include<string.h>

using namespace std;

int main()
{
	char str[200],key[200],c[200];
	int i,h,j;
	
	cout<<"Enter a string : ";
	cin.getline(str,20);
	
	cout<<"Enter the key  : ";
	cin.getline(key,20);
	
	int Ptext=strlen(str);
	int key_len=strlen(key);
	
	 for(i=0,j=0,h=0;i<Ptext;++h,++j,++i)
	 {
		 int p = (i%key_len);
		 key[i]=key[p];
		 c[j]=key[i]-65;
		 str[h]=str[h]+c[j];
		 cout<<str[h];
	 }
	 

	return 0;
}		 
	

























































	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	

