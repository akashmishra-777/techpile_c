#include<stdio.h>
#include<stdlib.h>

int main(){
		int select;
		while(1){
			printf("1.Add\n");
			printf("2.Substract\n");
			printf("3.Divide\n");
			printf("4.Multiply\n");
			printf("5.Exit  \n\n");
			printf("Select any option : \n");
			scanf("%d",&select);
			
			
			switch(select){
				case 1:{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The substraction of %d and %d will be : %d\n\n\n",num1,num2,num1+num2);
					break;
				}
				
				case 2:{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The sum of %d and %d will be : %d\n\n\n",num1,num2,num1-num2);
					break;
				}
				
				case 3:{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The division of %d and %d will be : %d\n\n\n",num1,num2,num1/num2);
					break;
				}
				
				case 4:{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The multiplication of %d and %d will be : %d\n\n\n",num1,num2,num1*num2);
					break;
				}
				
				case 5:{
					exit(0);
				}
				
				
				
				
				default:{
				
					printf("\nInvalid option choosen");
					break;
				}
			}
			
			
		}
	
	return 0;
}