#include<stdio.h>
#include<stdlib.h>

int main(){
	

				char select;
			printf("+.Add\n");
			printf("-.Substract\n");
			printf("/.Divide\n");
			printf("*.Multiply\n");
			printf("e.Exit  \n\n");
			printf("Select any option : \n");
			select = getchar();
			printf("\n");
			
			
			switch(select){
				case '+':{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
						printf("The sum of %d and %d will be : %d\n\n\n",num1,num2,num1-num2);
					break;
				}
				
				case '-':{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The substraction of %d and %d will be : %d\n\n\n",num1,num2,num1-num2);
					break;
				}
				
				case '/':{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The division of %d and %d will be : %d\n\n\n",num1,num2,num1/num2);
					break;
				}
				
				case '*':{
					int num1,num2;
					printf("Enter number 1 : ");
					scanf("%d",&num1);
					printf("Enter number 2 : ");
					scanf("%d",&num2);
					
					printf("The multiplication of %d and %d will be : %d\n\n\n",num1,num2,num1*num2);
					break;
				}
				
				case 'e':{
					exit(0);
				}
				
				
				
				
				default:{
				
					printf("\nInvalid option choosen");
					break;
				}
			}
			
		
		
	
	return 0;
}