#include<stdio.h>
#include<conio.h>

int main(){
	
	int inputInSceconds;
	
	printf("Enter your input in seconds : ");
	scanf("%d",&inputInSceconds);
	
	float hours,minutes;
	
	hours = (inputInSceconds/60)/60;
	minutes = inputInSceconds/60;
	
	printf("Hours : %f\n",hours);
	printf("Minutes : %f\n",minutes);
	printf("Seconds : %d\n",inputInSceconds);
	
	
	return 0;
}