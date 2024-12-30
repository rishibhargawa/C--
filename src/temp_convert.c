/*Temperature Converter*/

#include<stdio.h>

float cel_far(float te){
    float temperature;
    temperature=te*9/5+32;
    return temperature;
}

float far_cel(float te){
    float temperature;
    temperature = (te - 32) * 5 / 9;
    return temperature;
}


int main(){
    float cel,fare,temp;
    int choice;

    printf("Temperature Converter\n");
    printf("1. Celsius to Farhenheit\n");
    printf("2. Farhenheit to Celsius\n");
    printf("3. Exit Program\n");
    scanf("%d",&choice);

    if (choice==1)
    {
        printf("Enter Temperature: \n");
        scanf("%f",&fare);
        temp=cel_far(fare);
        printf("Temperature in Farhenheit: %f\n",temp);
    }
    else if (choice==2)
    {
        printf("Enter Temperature: \n");
        scanf("%f",&cel);
        temp=far_cel(cel);
        printf("Temperature in Celsius: %f\n",temp);
    }
    else if (choice==3)
    {
        printf("Exiting Program\n");
    }
    
    else{
        printf("Invalid Input\n");
    }

    return 0;
}