



int search(int item, int a[], int n)
{	
     int beg=0,mid,last=n-1;
	
	while(beg<=last)
	{
		mid=(beg+last)/2;
		if(a[mid]==item)
		{ 
		  return mid;
                  break;
		} 
		else
		 if(item < a[mid])
		   { last=mid-1; }
		  else
		    { beg=mid+1; }
	}
	return -1;
    
    
}


void sort(int a[], int n)
{
    int i,j,temp;
    
    for(i=1;i<n;++i)
    {
      for(j=0;j<(n-i);++j)
       {
         if(a[j] > a[j+1])
          {
			 temp=a[j];
			 a[j]=a[j+1];
			 a[j+1]=temp;
		  }
		}
	}
		  	 
    return;
}
