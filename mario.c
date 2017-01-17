#include<stdio.h>
int main()
{ int i,j,k,height;
    printf("Enter the height of the pyramid : ");
	scanf("%d",height);
	 for (i = 1; i <= height; i++) 
    {
        for (j = (height - i); j > 0; j--)
        {
            printf(" "); 
        }
 
        for (k= 1; k <= (i + 1); k++)
        {   
            printf("#"); 
        }
 
        printf("\n");
  return 0;
    }