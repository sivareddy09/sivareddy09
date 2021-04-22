#include<stdio.h>
#include<conio.h>
void main(){
    int year;
    scanf("%d",&year);
    print("%d",year);
    if(year%4==0 && year%100!==0 || year%400==0){
        printf("Leap");
    }
    else{
        prinf("Not Leap");
    }
}