//CAU 32: Day so nguyen ngau nhien - TIM GTLN VA VI TRI 
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
	int max,vt;
	printf("Nhap kich thuoc mang: "); scanf("%d",&n);
	nhapMangNgauNhien(a,n);
	inMang(a,n);
	max = a[0];
	for(int i=0;i<n;i++){
		if (max < a[i]){
			max = a[i];
			vt = i;
		}
	}
	printf("\nGia tri phan tu lon nhat la %d nam o vi tri a[%d]\n",max,vt+1);
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

