/*Test.c*/

#include<stdio.h>
#include<string.h>

int main(){
	int x,speed;
	char inp[50];
	x=0;
	printf("Speed Checker Menu\n");
	printf("1. Start Check\n");
	printf("2. Exit program\n");
	scanf("%d",&x);
	if (x==1)
	{
		while (x==1)
		{
			printf("What is your speed?: ");
			scanf("%d",&speed);
			if (speed>=100)
			{
				printf("Overspeeding Detected!!\n");
			}
			else{
				printf("Safe Speed!!\n");
			}

			printf("Continue Program?: ");
			scanf("%s",&inp);
			if (strcmp(inp,"yes")==0)
			{
				printf("Continuing Program\n");
				x=1;
			}
			else if (strcmp(inp,"no")==0)
			{
				x=0;
				printf("Exiting Program\n");
			}
			else{
				printf("Invalid Output\n");
			}	
		}
	}
	else{
		printf("Exiting Program\n");
	}
	
	return 0;
}

