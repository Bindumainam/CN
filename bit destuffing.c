#include<stdio.h>
void main()
{
int ip_frame[100],op_frame[200];
int i,j=0,n;
int count=0;
printf("enter frame lenght ");
scanf("%d",&n);
printf("enter input frame(0^s and 1^s only):\n");
for(i=0;i<n;i++)
{
	scanf("%d",&ip_frame[i]);
}
for(i=0;i<n;i++)
{
if(count==5)
{
count=0;
continue;
}
//else if(ip_frame[i]==1)
//{
 //op_frame[j++]=1;
 //count++;
//}
else{
op_frame[j++]=1;
 count++;
}
}
printf("\n after bit stuffing the frame is=\n");
for(i=0;i<j;i++){
printf("%d",op_frame[i]);
}
printf("\n");
}
