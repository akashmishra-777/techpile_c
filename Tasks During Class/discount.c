#include<stdio.h>

int main(){
	int totalAmount; float dis;
	printf("Enter the total shopping amount : ");
	scanf("%d",&totalAmount);
	
	if(totalAmount >= 0 && totalAmount <= 5000){
	    dis = (5*totalAmount)/100; 
		printf("You got a discount of 5% : %f\n ",dis);
		printf("The amount that you have to pay is : %f ",totalAmount - dis);
	}
	else if(totalAmount > 5000 && totalAmount <= 10000){
		 dis = (10*totalAmount)/100; 
		printf("You got a discount of 10% : %f\n ",dis);
		printf("The amount that you have to pay is : %f",totalAmount - dis);
	}
	else if(totalAmount > 10000 && totalAmount <= 20000){
		 dis = (20*totalAmount)/100; 
		printf("You got a discount of 20% : %f\n ",dis);
		printf("The amount that you have to pay is : %f",totalAmount - dis);
	}
	else{
		 dis = (30*totalAmount)/100; 
		printf("You got a discount of 30% : %f \n",dis);
		printf("The amount that you have to pay is : %f ",totalAmount - dis);
	}
	
	
	return 0;
}