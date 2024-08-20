#include<stdio.h>

int main(){
	int arr[10] = {10,02,30,40,50,60,70,80,90,10};
	for(int i=9; i>=0; i--){
		printf("Count - %d value : %d\n",i,arr[i]);
	}
	
	return 0;
}