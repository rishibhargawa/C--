/*String Comparison*/

#include<stdio.h>
#include<string.h>

int main(){
    char x[50];
    scanf("%s",x);
    printf("%s\n",x);

    if (strcmp(x,"yes")==0)
    {
        printf("equal");
    }
    else{
        printf("not equal");
    }
    

    return 0;
}