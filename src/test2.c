/*Speed Checker.c*/

///Implement do-while for the invalid input case


#include<stdio.h>
#include<string.h>

int main(){
    int speed;
    char choice[50];
    printf("Speed Check Program\n");
    printf("Press 1 to Enter\n");
    printf("Press 2 to Exit\n");
    scanf("%s",&choice);
    if (strcmp(choice,"1")==0)
    {
        while (1)
        {
            printf("Enter your current Speed: ");
            scanf("%d",&speed);
            if (speed>=100)
            {
                printf("Overspeeding Detected!\n");
            }
            else{
                printf("Safe Speed!\n");
            }
            printf("Do you want to continue? (Yes/no)\n");
            scanf("%s",&choice);
            if (strcmp(choice,"no")==0)
            {
                printf("Exiting Program.....\n");
                break;
            }
            else if (strcmp(choice,"yes")==0)
            {
            }
            else{
                printf("Invalid Input\n");
            }
        }
    }
    else{
        printf("Exiting Program.....\n");
    }
    return 0;
}