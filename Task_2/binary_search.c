#include<stdio.h>
#include<stdlib.h>
int BinarySearch(int *ptr,int size,int num) 
{
int mid;
int i,lo=0,hi=size-1;

mid=(lo+hi)/2;
while(lo<=hi)
{
mid=(lo+hi)/2;
if(ptr[mid]>num)
hi=mid-1;
else if(ptr[mid]<num)
lo=mid+1;
else
return mid;
}
return -1;
}
int main(void)
{
int arr[5]={1,2,3,4,5};
int res;
res=BinarySearch(arr,5,4);
printf("result=%d\n",res);
return 0;
}
