#include<stdio.h>
int main()
{
    int no,no1,no2;
    printf("Select you operator\n");


    printf("1.addition(+)\n");
    printf("2.subtraction(-)\n");
    printf("3.multiplication (*)\n");
    printf("4.division(-)\n");

    printf("Enter your choice");
    scanf("%d",&no);


    printf("Enter two Number");
    scanf("%d %d",&no1,&no2);

    switch(no)
    {
        case 1:printf("Result: %d\n",no1+no2);break;
        case 2:printf("Result: %d\n",no1-no2);break;
        case 3:printf("Result: %d\n",no1*no2);break;
        case 4:printf("Result: %d\n",no1/no2);break;
        default:printf("please Enter correct Number\n");
    }

}
