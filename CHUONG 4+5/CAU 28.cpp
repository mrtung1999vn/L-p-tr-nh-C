//CAU 28: TINH TONG CAC HANG - IN VAO COT CUOI CUNG 
#include<stdio.h>
int main(){
	int a,b,i,j;
	int tong;
	int x[100][100];
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
			scanf("%d",&x[i][j]);
		}
	}
	printf("Ma tran vua nhap la:\n");
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	
	printf("Bien doi ma tran theo yeu cau cua bai toan:\n");
	for(i=0;i<a;i++) {
		tong=0;
		for(j=0;j<b;j++) {
			tong+=x[i][j];
		}
		x[i][b-1]=tong;
	}
	
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	return 0;
}

