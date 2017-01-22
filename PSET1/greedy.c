#include<stdio.h>
int main()
{
   int price;
   int c=0;
   printf("Enter the change : ");
   scanf("%d",&price);
    if(price==0||price < 0) { printf("Error"); }

    while(price!=0)
    {
		if(price >= 50) { c+=1; price-=50; }
		else
		if(price >= 25) { c+=1; price-=25; }
		else
		if(price >= 10) { c+=1; price-=10; }
		else
		if(price >= 5) { c+=1; price-=5; }
		else
		if(price >= 1) { c+=1; price-=1; }
    }  
	
      printf("\nChange : %d and Balance : %d ",c,price);
      return 0;
}	

