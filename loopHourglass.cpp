#include<stdio.h>
main(){
int num[7];
printf("  =  Hourglass  =\n");
printf("Enter number of width: ");
scanf("%d",&num[0]);
for(num[1] = num[0]; num[1] >= 1; num[1]--)
{
for(num[2] = num[1]; num[2] < num[0]; num[2]++)
printf(" ");
for(num[3] = 1; num[3] <= num[1]; num[3]++)
printf("* ");
printf(" \n");
}

for(num[4] = 1; num[4] <= num[0]; num[4]++)
{

for(num[5] = num[4]; num[5] < num[0]; num[5]++)
printf(" ");

for(num[6] = 1; num[6] <= num[4]; num[6]++)
printf("* ");

printf("\n");
}
return 0;

}

