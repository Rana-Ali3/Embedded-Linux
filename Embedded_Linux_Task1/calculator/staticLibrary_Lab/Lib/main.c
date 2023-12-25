#include<stdio.h>
#include<stdlib.h>

int main()
{
int a=6;
int b=3;
int x=sum(a,b);
int y=sub(a,b);
int z=mul(a,b);
float f=mod(a,b);
float l=3;
float m=4;
float d=dev(l,m);
printf("sum=%d\n",x);
printf("sub=%d\n",y);
printf("mul=%d\n",z);
printf("mod=%f\n",f);
printf("dev is=%f\n",d);

return 0;

}
