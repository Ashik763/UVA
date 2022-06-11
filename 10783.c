#include<stdio.h>
int main()
{
int t,i,j,a,b,sum;
scanf("%d",&t);
for(i=1;i<=t;i++){
sum=0;
scanf("%d %d",&a,&b);
for(j=1;j<=b;j++){
if(j%2==1)
sum+=j;
}
printf("Case %d: %d\n",i,sum);
}
}