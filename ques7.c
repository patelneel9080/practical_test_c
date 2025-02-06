#include <stdio.h>

// Manually we created fileName "first_file.txt" for second "second_file"

int main()
{
    FILE *p;
    FILE *q;

    p = fopen("first_file.txt", "w");
    if (p == NULL) {
        printf("Error opening first_file.txt for writing\n");
        return 1;
    }

    char abc[100];

    printf("Enter String: ");
    scanf("%s", abc);  

    fprintf(p, "%s", abc);

    fclose(p); 

    p = fopen("first_file.txt", "r"); 
   

    char def[100];

    fscanf(p, "%s", def); 

    fclose(p);

    q = fopen("second_file.txt", "w");
    if (q == NULL) {
        printf("Error opening second_file.txt for writing\n");
        return 1;
    }

    fprintf(q, "%s", def);

    fclose(q);

    printf("Content copied successfully to second_file.txt\n");

    return 0;
}
