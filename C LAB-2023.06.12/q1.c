#include<stdio.h>
int main()
{
   int n;
   printf("Enter the Number");
   scanf("%d",&n);

   switch(n%2)
    {
        case 1:printf("%d is an odd number");break;
        case 0:printf("%d is an even number");break;
    }
}

