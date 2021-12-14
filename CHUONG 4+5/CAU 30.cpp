//CAU 15: Day so nguyen ngau nhien: 
#include<stdio.h>
#define MAX_SIZE 100
#include<stdlib.h>
#include<time.h>
void nhapMangNgauNhien(int a[],int n);
void inMang(int a[],int n);
int main(){
	int n;
	int a[MAX_SIZE];
	int dem;
	printf("Nhap kich thuoc mang: "); scanf("%d",&n);
	nhapMangNgauNhien(a,n);
	inMang(a,n);
	return 0;
}
void nhapMangNgauNhien(int a[],int n){
	srand(time(NULL));
	for(int i=0;i<n;i++){
		a[i] = rand()%100;
	}
}
void inMang(int a[],int n){
	printf("Mang da nhap la:\n");
	printf("%d ",a[0]);
	for(int i=1;i<n;i++){
		printf(",%d ",a[i]);
	}
}

