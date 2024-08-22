#include<stdio.h>
int main(){
	int n;
	printf("Enter the value of n : ");
	scanf("%d",&n);
	for(int i=1;i<=n; i++){
		if(i%3==0 && i%5==0){
			printf("%d\n",i);
		}else{
			continue;
		}
	}
	return 0;
}