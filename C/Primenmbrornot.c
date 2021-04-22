#include<stdio.h>
#include<conio.h>
void main(){
	int count=0,i,n;
	printf("Enter a number:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		if(n%i==0){
			count++;
		}}
		if(count==2){
			printf("%d is a Prime Number",n);
		}
		else{
			printf("%d is not a Prime Number",n);
		}
}
