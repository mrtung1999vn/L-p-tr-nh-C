//CAU 17: Tim phan tu va vi tri phan tu nho nhat trong mang -  
#include<stdio.h>
#define MAX_SIZE 100
void nhapMang(int a[][MAX_SIZE],int n,int m);
void inMang(int a[][MAX_SIZE],int n,int m);
int main(){
	int a[100][100];
	int n,m,min;
	int i,j;
	int vti=0,vtj=0;
	printf("Nhap so hang: ");
	scanf("%d",&n);
	printf("Nhap so cot:");
	scanf("%d",&m);
	nhapMang(a,n,m);
	inMang(a,n,m);
	min=a[0][0];
	for (int i=0;i<n;i++)
		for(int j=0;j<m;j++)
			if (min>a[i][j]){
				min = a[i][j];
				vti=i;
				vtj=j;
			}
	
	printf("Phan tu nho nhat cua mang la: %d \n",min);
	printf("Vi tri cua phan tu nho nhat la hang %d cot %d",vti+1,vtj+1);
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
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
