#include<stdio.h>
#include<conio.h>

int main(){
	int a = 1;
	while(a<=15){
		printf("%d ",a);
		a=a+2;
	}
	printf("\n");
	int b= 15;
	
	while(b>=1){
		printf("%d ",b);
		b = b-2;
	}
	printf("\n");
	
		int c = 2;
	while(c<=20){
		printf("%d ",c);
		c=c+3;
	}
	printf("\n");
	
	int d= 20;
	
	while(d>=2){
		printf("%d ",d);
		d = d-3;
	}
	printf("\n");
	
	int e= 20;
	
	while(e>=1){
		printf("%d ",e);
		if(e == 20){
			e = e-10;
		}else if(e == 10){
			e = e-5;
		}else if(e == 5){
			e = e-3;
		}else{
			e = e-1;
		}
	}
	printf("\n");
	
	int f = 1;
	while(f<=32){
		printf("%d ",f);
		f = f*2;
	}
	printf("\n");
	
	
		int g = 10;
	while(g>=1){
		printf("%d ",g);
		g =g-1;
	}
	printf("\n");

	
	return 0;
}