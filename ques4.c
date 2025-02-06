#include <stdio.h>

void checkNo(int a)
{
    if(a % 3 == 0 && a % 5 == 0)
    {
        printf("It is divisible by 3 and 5 both");
    }
    else
    {
        printf("It is not divisble by 3 and 5");
    }
}


int main() {
   
   int a;
   
   printf("Enter a number : ");
   scanf("%d",&a);
   
   checkNo(a);
    
    return 0;
}
