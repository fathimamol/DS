#include<stdio.h>
int main()
{
  int i,n,a[50];
  printf("\n\n\nTo read and display elements of an array\n");
  printf("\nEnter the size of array:");
  scanf("%d",&n);
  printf("\nEnter the elements:");
  for(i=0;i<n;i++)
  {
   scanf("%d",&a[i]);
  }
  printf("\nElements of array are:");
  for(i=0;i<n;i++)
  {
  printf("%d",a[i]);
  }
  return(0);
}

