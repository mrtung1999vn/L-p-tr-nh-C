//CAU 33: Day so nguyen ngau nhien - TIM SO XUAT HIEN NHIEU NHAT TRONG MANG
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
	int max_dem = 0,vt,dem,gt;
	printf("Nhap kich thuoc mang: "); scanf("%d",&n);
	nhapMangNgauNhien(a,n);
	inMang(a,n);
	for(int i=0;i<n;i++){
		dem = 0;
		for(int j=i+1;j<n;j++){
			if (a[i] == a[j]){
				dem ++;
			}
		}
		if (max_dem < dem)
			max_dem = dem;
			gt = a[i];
	}
	if (max_dem == 0)
		printf("\nCac so chi xuat hien mot lan !\n ");
	else 
		printf("\nSo %d lap lai nhieu lan trong mang voi %d lan xuat hien\n",gt,max_dem+1);
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

