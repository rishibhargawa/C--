/*IF-Statement*/

#include<stdio.h>

int main(){

	int speed;
	printf("What is your speed?: ");
	scanf("%d",&speed);
	if(speed>=100){
	
		printf("Your are Driving Fast, Please Slow down!!\n");
	}
	else{

		printf("Your are Driving at safe speed, Please enjoy your ride!!\n");
	}

	return 0;
}
