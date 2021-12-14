//CAU 18: TIM PHAN TU LON NHAT CUA HANG -  
#include<stdio.h>
#define MAX_SIZE 100
void nhapMang(int a[][MAX_SIZE],int n,int m);
void inMang(int a[][MAX_SIZE],int n,int m);
int main(){
	int a[100][100];
	int n,m,max;
	int i,j;
	int dem=0;
	printf("Nhap so hang: ");
	scanf("%d",&n);
	printf("Nhap so cot:");
	scanf("%d",&m);
	nhapMang(a,n,m);
	inMang(a,n,m);
	max=a[i][0];
	for (int i=0;i<n;i++)
		for(int j=1;j<=m;j++)
			if (max<a[i][j]){
				max = a[i][j];
				dem++;
				printf("Phan tu lon nhat cua hang %d la %d \n",dem,max);
			}
	return 0;
}
void nhapMang(int a[][MAX_SIZE],int n,int m){
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
}
void inMang(int a[][MAX_SIZE],int n,int m){
	printf("Mang da nhap la:\n");
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
