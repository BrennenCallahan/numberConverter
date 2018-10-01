#include<stdio.h>
#define SIZE 256

int main(void)
{

int number;
int radix;
						         /*Prompt for two integers, opposed to taking the arguments*/
printf("Enter a number first, then the base you wish to convert to.\n");
scanf("%d %d",&number, &radix);

	char answer[SIZE]= "";
char test[SIZE] = {0,1,2,3,4,5,6,7,8,9,'A','B','C','D','E','F'};/* keep track of remainder*/
int i = number;
int counter =0;				                   


if(i == 0)
{
printf("%d",0);

return 0;
}


for( i,counter; i >=1 ; i/=radix)
{
int remainder = i % radix;
answer[counter] = test[remainder];
counter++;
}

counter-=1;
for(counter ; counter>= 0 ; counter--){


if(answer[counter] < 10){
printf("%d",answer[counter]);
}
else
{
printf("%c",answer[counter]);
}
}
printf("\n");
return 0;
}



