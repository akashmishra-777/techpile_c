#include<stdio.h>

int main(){
	int check = 0;
	int arr[10] = {10,01,30,40,50,60,70,80,90,10}; 
	check = arr[9];
	for(int i=9; i>=0; i--){
		if(arr[i]<check){
			check = arr[i];
		}else{
			continue;
		}
	}

	printf("The smallest element of the arry is : %d",check);
	return 0;
}