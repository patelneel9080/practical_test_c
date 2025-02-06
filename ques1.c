#include <stdio.h>

int main() {
   
    int fNo;
    int mNo;
    int lNo, sum = 0;
    
    printf("Enter First Digit: ");
    scanf("%d",&fNo);
    
    printf("Enter Second Digit: ");
    scanf("%d",&mNo);
    
    printf("Enter Third Digit: ");
    scanf("%d",&lNo);
    
    if(fNo < 0)
    {
        printf("First Digit must be positive");
    }
    else if(mNo < 0)
    {
        printf("Second Digit must be positive");
    }
    else if(lNo < 0)
    {
        printf("Third Digit must be positive");
    }
    else
    {
        sum = fNo + lNo;
        printf("Sum of first and last digit is %d",sum);
    }

    return 0;
}
