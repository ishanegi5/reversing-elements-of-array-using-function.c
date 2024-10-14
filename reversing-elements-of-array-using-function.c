#include<stdio.h>
int reversedarray(int arr[],int size)
{ int start=0;
  int end=size-1;
  while(start<end)
  {
      int temp=arr[start];
      arr[start]=arr[end];
      arr[end]=temp;
      start++;
      end--;
  }
}

void main()
{ int arr[]={134,256,3324,4234,5234};
printf("original array: ");
int i=0;
int size=(sizeof(arr)/sizeof(arr[0]));
while(i!=size)
{
    printf("%d ",arr[i]);
    i++;
}
reversedarray(arr,size);
printf("\nreversed array: ");
for(int i=0;i<sizeof(arr)/sizeof(arr[0]);i++)
{
    printf("%d ",arr[i]);
}
}