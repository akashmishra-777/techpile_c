#include<stdio.h>

int main(){
	int arr[10] = {10,02,30,40,50,60,70,80,90,10}; int sum;
	for(int i=9; i>=0; i--){
		sum =  sum + arr[i];
	}
	sum  = sum/10;
	printf("The avg of the array will be : %d",sum);
	return 0;
}