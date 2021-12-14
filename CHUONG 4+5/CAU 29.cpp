//CAU 29: TIM HANG CO TONG LON NHAT
#include<stdio.h>
int main(){
	int a,b,i,j,vt;
	float tong,max;
	float x[100][100];
	do{
		printf("Nhap so hang cua ma tran:");
		scanf("%d",&a);
	}while(a<1||a>99);
	do{
		printf("Nhap so cot cua ma tran:");
		scanf("%d",&b);
	}while(b<1||b>98);
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("x[%d][%d]=",i,j);
			scanf("%f",&x[i][j]);
		}
	}
	printf("Ma tran vua nhap la:\n");
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("%0.2f   ",x[i][j]);
		}
		printf("\n");
	}
	
	for(i=0;i<a;i++) {
		tong=0;
		for(j=0;j<b;j++) {
			tong+=x[i][j];
		}
		x[i][b-1]=tong;
	}
	max=x[0][b-1];
	for(i=0;i<a;i++) {
		if(max<x[i][b-1]) {
			max=x[i][b-1];
			vt = i;
		}
	}
	printf("hang %d co tong lon nhat la %0.2f",vt+1,max);
	return 0;
}

