#include <stdio.h>

struct mobile
{
    char companyName[100];
    char color[100];
    char model[100];
    int price;
};

int main() {
   
   int n, i;
   
   printf("Enter no of mobiles : ");
   scanf("%d",&n);
   
   struct mobile m[n];
   
   for(i = 0; i < n; i++)
   {
       printf("Enter company name : ");
       scanf("%s",&m[i].companyName);
       
       printf("Enter color : ");
       scanf("%s",&m[i].color);
       
       printf("Enter model : ");
       scanf("%s",&m[i].model);
       
       printf("Enter price : ");
       scanf("%d",&m[i].price);
   }
   
   for(i = 0; i < n; i++)
   {
       printf("Mobile detail no : %d\n",i+1);
       printf("Company name : %s\n",m[i].companyName);
       printf("Color : %s\n",m[i].color);
       printf("Model : %s\n",m[i].model);
       printf("Price : %d",m[i].price);
       printf("\n");
   }
   
   return 0;
}
