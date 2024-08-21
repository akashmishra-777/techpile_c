#include<stdio.h>
#include<conio.h>

int main(){
	int x = 1;
	for(int i=1; i<=4; i++){
		for(int j=3; j>=i; j--){
			printf(" ");
		}
		
		for(int j=1; j<=i;j++){
			printf("%d ",x);
			x++;
		}
	
	
		printf("\n");
	}
	printf("\n");
	//B
	for(int i=1; i<=5; i++){
		for(int j=1; j<=i; j++){
			printf("%d ",i);
		}
		printf("\n");
	}
	printf("\n\n");
	//c
	
	for(int i=5; i>=1; i--){
		for(int j=1; j<=i; j++){
			printf("%d ",i);
		}
	printf("\n");
	}
	
	printf("\n");
	
	
	int la=1,lb=3,lc=4;
	
	for(int i=1; i<=4; i++){
		for(int j=1; j<=i; j++){
			
			if(i<=2){
				printf("%d ",la);
			la = la*2;
			}else if(i>=3 && i<4){
				printf("%d ",lb);
				lb= lb+3;
			}else if(i==4){
				printf("%d ",lc);
				lc = lc +4;
			}
		}
		
		
		
		printf("\n");
	}
	
	
}