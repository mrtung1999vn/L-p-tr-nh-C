//CAU 63: Nhap vao mot day so nguyen - In ra cac so xuat hien it nhat 2 lan trong mang 
#include<stdio.h>
#define MAX_SIZE 100
#include<time.h>
#include<stdlib.h>
int main(){
	int n,a[MAX_SIZE];
	int dem;
	do{
		printf("Nhap kich thuoc mang: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	srand(time(NULL));
	for (int i=0;i<n;i++){
		a[i] = rand()%100;
	}
	printf("Mang ngau nhien sinh ra la: \n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
	printf("\nCac so xuat hien it nhat 2 lan la: \n");
	for(int i=0;i<n-1;i++){
		dem = 1;
		for(int j=i+1;j<n;j++){
			if(a[i] == a[j])
				dem ++;
		}
		if(dem >=2)
			printf("%d ",a[i]);	
		else
			printf("\nKhong co so nao xuat hien it nhat 2 lan !\n");
			break;	
	}
	return 0;
}

