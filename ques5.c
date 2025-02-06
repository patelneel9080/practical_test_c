#include <stdio.h>

int main() {
   
   int size;
   
   printf("Enter array size : ");
   scanf("%d",&size);
   
   int a[size], b[size], i, *p[size], *q[size];
   
   printf("Enter array1 elements of array : \n");
   for(i = 0; i < size; i++)
   {
       printf("a[%d] = ",i);
       scanf("%d",&a[i]);
       p[i] = &a[i];
   }
   
   printf("Enter array2 elements of array : \n");
   for(i = 0; i < size; i++)
   {
       printf("b[%d] = ",i);
       scanf("%d",&b[i]);
       q[i] = &b[i];
   }
   
   int sum[size];
   
   for(i = 0; i < size; i++)
   {
       sum[i] = *p[i] + *q[i];
   }
   
   printf("Sum : \n");
   for(i = 0; i < size; i++)
   {
       printf("%d ",sum[i]);
   }
   
   
   return 0;
}
