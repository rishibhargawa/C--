/*Multiplication Table*/

#include<stdio.h>

int main(){
    int num,i,res;
    printf("Enter a number for Multiplication Table: ");
    scanf("%d",&num);
    if (num<=0)
    {
        printf("Enter a valid Number\n");
    }
    else{
        printf("Multiplication Table for %d\n",num);
        for ( i = 1; i <=10 ; i++)
        {
            res=num*i;
            printf("%d x %d = %d\n",num,i,res);
        }
    }

    return 0;
}