#include <stdio.h>
#include<string.h>

void countPrint()
{
    int count = 0, i, length = 0, j;
    char a[50];
    
    printf("Enter any string: ");
    scanf("%s",&a);
    
    length = strlen(a);
    
    for(i = 0; a[i] != '\0'; i++)
    {
        count = 0;
        for(j = length - 1; j > 0; j--)
        {
            if(a[i] == a[j])
            {
                count = count + 1;
            }
        }
        if(a[i] != 'a' && a[i] != 'A' && a[i] != 'e' && a[i] != 'E' && a[i] != 'i' && a[i] != 'o' && a[i] != 'I' && a[i] != 'O' && a[i] != 'U' && a[i] != 'u')
        {
            printf("%c => %d",a[i],count);
            printf("\n");
        }
    }
}


int main() {
   
    countPrint();
    
    return 0;
}
