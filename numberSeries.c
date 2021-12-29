//program to print number series using 3 different loop
#include<stdio.h>  
int main(){    
int i=1,j=1,k=1;      
//print number series using do while loop
do{    
printf("%d \t",i);    
i++;    
}while(i<=5);   
printf("\n");

//print number series using while loop

while(j<=5)
{
    printf("%d\t",j);
    j++;
}
//print number series using for loop
printf("\n");
for(int k=1;k<=5;k++)
  printf("%d\t",k);
return 0;  
}     