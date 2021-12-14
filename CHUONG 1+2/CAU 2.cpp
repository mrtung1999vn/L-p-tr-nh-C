//CAU 2 - TINH TONG S -  
#include<stdio.h>
int main(){
	float n=0;
	float s=1.0,gt=1.0;
	float a;
	do{
		printf("Nhap so a (0 < a < 0.01): ");
		scanf("%f",&a);
	}while(a <= 0 || a >= 10);
	while(1/(2*n+1)>=a){
		n++;
		gt*=(float)(2*n)*(2*n+1);
		s+=(float)1/gt;
	}
	printf("Tong S la: %f",s);
}
