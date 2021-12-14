//CAU 31: Day so nguyen ngau nhien - TINH bieu thuc T  
#include<stdio.h>
#define MAX_SIZE 100
#include<stdlib.h>
#include<time.h>
#include<math.h>
void nhapMangNgauNhien(int a[],int n);
void inMang(int a[],int n);
int main(){
	int n;
	int a[MAX_SIZE];
	float t,T;
	printf("Nhap kich thuoc mang: "); scanf("%d",&n);
	nhapMangNgauNhien(a,n);
	inMang(a,n);
	for(int i=0;i<n;i++){
		t+=(pow(a[i],2));
	}
	T = sqrt(t);
	printf("\nT = %f",T);
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
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}

