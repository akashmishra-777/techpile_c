#include<stdio.h>
int main(){
	int sum;
	for(int i=1; i<=10; i++){
		printf("%d ",i);
		sum += i;
	}
	printf("\nThe sum of all these natural numbers are : %d",sum);
	return 0;
}