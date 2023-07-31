#include<stdio.h>
int main()
{
    int no,no1,no2;
    char symb;
    printf("Select you operator\n");


    printf("+.addition\n");
    printf("-.subtraction\n");
    printf("*.multiplication \n");
    printf("/.division\n");

    printf("Enter your choice");
    scanf("%c",&symb);


    printf("Enter two Number");
    scanf("%d %d",&no1,&no2);

    switch(symb)
    {
        case '+':printf("Result: %d\n",no1+no2);break;
        case '-':printf("Result: %d\n",no1-no2);break;
        case '/':printf("Result: %d\n",no1*no2);break;
        case '*':printf("Result: %d\n",no1/no2);break;
        default:printf("please Enter correct Number\n");
    }

}

