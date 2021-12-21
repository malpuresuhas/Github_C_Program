//average of user input numbers or scores using array
#include <stdio.h>
int main() {
int arrayVal[100],cntScore,Total=0,i; 
float average;
printf("Enter No of Scores to Calculate Average\t");
scanf("%d",&cntScore);
for(i=0;i<cntScore;i++)
{
    printf("Enter %d Score",i+1);
    scanf("%d",&arrayVal[i]);
    Total = Total + arrayVal[i];
}
average = (float)Total/cntScore;
printf("Average of %d Score is %.2f",cntScore,average);
return 0;
}