 #include<stdio.h>
 
int main()
{
   int a[100], loc, c, n, item;
 
   printf("Enter number of elements in array\n");
   scanf("%d", &n);
 
   printf("Enter %d elements\n", n);
 
   for (c = 0; c < n; c++)
      scanf("%d", &a[c]);
 
   printf("Enter the location where you wish to delete an element\n");
   scanf("%d", &loc);
 
   
  
  for(c=loc;c<=(n-1);c++)
  a[c-1]=a[c];
  
 
 for(c=0;c<n-1;c++)
 printf("%d\n",a[c]) ;
 
  
  
  
  
  }
