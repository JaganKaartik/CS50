#include<iostream>
#include<stdlib.h>
using namespace std;

char a;
void display(int array [3][3]);

void display(int array [3][3])
{
	 for(int i = 0; i < 3; i++)
	    {
			for(int j = 0; j < 3; j++)
	           {
				   cout << "  " << array[i][j];
				   
	           }   
	           cout<<endl;
	    }
}	 
int checkarray(int array [3][3],int check[3][3])
{
	 int flag=1;
	 for(int i = 0; i < 3; i++)
	    {
			for(int j = 0; j < 3; j++)
	           {
				   if(check[i][j]!=array[i][j])
				   {
		             flag=0; return -1;
		           } 
	           }   
	           
	    }
	  return flag;
}	 
int main()
{ 
	int array[3][3] = {8 , 7 , 6 , 5 , 4 , 3 , 2 , 1 , 0};
    int swap[3][3];
    int check[3][3]={0,1,2,3,4,5,6,7,8}; 
    int i=2,j=2,flg,fl=1;
   loop :  	    
   while(fl)
   {
	 system("clear");
	display(array);
	flg=checkarray(array,check);
	if(flg==1)
	{
		cout<<"\nYour a winner! "; 
		fl=0;
		goto loop;
	}	
	cout << "Controls : w - Up, z - Down, a - Left, s - Right, q - Quit" << endl; 
	cin>>a;
	if(a=='w'&&(i!=0))
	{
		swap[i][j]=array[i][j];
		array[i][j]=array[i-1][j];
		array[i-1][j]=swap[i][j];
		display(array);
		i-=1;
		goto loop;
	} 
	if(a=='z'&&(i<3))
	{
		swap[i][j]=array[i][j];
		array[i][j]=array[i+1][j];
		array[i+1][j]=swap[i][j];
		display(array);
		i+=1;
		goto loop;
	} 
	if(a=='a'&&(j!=0))
	{
		swap[i][j]=array[i][j];
		array[i][j]=array[i][j-1];
		array[i][j-1]=swap[i][j];
		display(array);
		j-=1;
		goto loop;
	}
	if(a=='s'&&(j<3))
	{
		swap[i][j]=array[i][j];
		array[i][j]=array[i][j+1];
		array[i][j+1]=swap[i][j];
		display(array);
		j+=1;
		goto loop;
	}
	if(a=='q') { goto stop; }
	else
	 {
		 cout << "Wrong character, pleas type again!" << endl; 
	     break;
	 } 
  }
  stop:
 return 0;	
}
