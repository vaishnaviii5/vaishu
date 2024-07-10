#include<stdio.h>
#include<conio.h>
main()
{
int ms,mp[10],i, temp,n=0;
char ch = 'y';
printf("\nEnter the total memory available (in Bytes)-- ");
scanf("%d",&ms);
temp=ms;
for(i=0;ch=='y';i++,n++)
{
 printf("\nEnter memory required for process %d (in Bytes) -- ",i+1);
 scanf("%d",&mp[i]);
 if(mp[i]<=temp)
 {
  printf("\nMemory is allocated for Process %d ",i+1);
  temp = temp - mp[i];
}
else
{
printf("\nMemory is Full");
break;
 }
}
}
