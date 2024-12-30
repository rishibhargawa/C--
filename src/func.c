/*Function*/

#include<stdio.h>

int areaTriangle(int base,int height){
    int area;
    area=(base*height)/2;
    return area;
}

int main(){
    int b,h,a;

    printf("Base: ");
    fflush(stdout);
    scanf("%d",&b);

    printf("Height: ");
    fflush(stdout);
    scanf("%d",&h);

    a=areaTriangle(b,h);
    printf("Area of the Triangle is: %d\n",a);

    return 0;
}