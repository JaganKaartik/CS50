#include <iostream>
#include <stdlib.h>
#include "helpers.h"
using namespace std;

int main()
{
   int a[100],n,ls,item;
   cout<<"\nEnter te size of the array : ";
   cin>>n;
   cout<<"\nEnter the Array : ";
   for(int i=0;i<n;++i)
   {
	   cin>>a[i];
   }   
   sort(a,n);
   cout<<"\nEnter an item to be searched : ";
   cin>>item;
   ls=search(item,a,n);
   if(ls!=-1)
   {
	   cout<<"\nItem found at position : "<<ls+1<<endl;
   }
    else
   {
	    cout<<"\nSorry! Item not found ";
	    
   }
   
 return 0;
} 
