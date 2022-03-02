#include<stdio.h>
void main()
{
  int array1[50],array2[50],array3[100],m,n,i,j,k=0;
  printf("\nEnter the size of 1st array:");
  scanf("%d",&m);
  printf("\nEnter the sorted elements of 1st array:");
  for(i=0;i<m;i++)
  {
  scanf("%d",&array1[i]);
  }
  printf("\nEnter the size of the 2nd array:");
  scanf("%d",&n);
  printf("Enter the sorted elements of 2nd array:\n");
  for(i=0;i<n;i++)
  {
  scanf("%d",&array2[i]);
  }
  i=0;
  j=0;
  while(i<m&&j<n)
  {
  if(array1[i]<array2[i])
  {
  array3[k]=array1[i];
  i++;
  }
  else
  {
  array3[k]=array2[j];
  j++;
  }
  k++;
  }
  if(i>=m)
  {
  while(j<n)
  {
  array3[k]=array2[j];
  j++;
  k++;
  }
  }
  if(j>=n)
  {
  while(i<m)
  {
  array3[k]=array1[i];
  i++;
  k++;
  }
  }
  printf("\nAfter merging:\n");
  for(i=0;i<m+n;i++)
  {
  printf("\n%d",array3[i]);
  }
}
 
