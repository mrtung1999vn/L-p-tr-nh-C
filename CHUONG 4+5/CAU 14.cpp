//BAI 14 -     
#include<stdio.h>
#include<math.h>
#include<conio.h>
#include<stdlib.h>
#include<time.h>
int main()
{
	int i,n,a,b,c[100];
	
	do{
		printf("Nhap so phan tu trong mang: \n" );
		scanf("%d",&n);
	}while(n<=0||n>=100);
	
	srand(time(NULL));
	
	for(i=0;i<n;i++){
		printf("a[%d] = ",i);
		scanf("%d",&c[i]);
	}
	printf("MANG DA NHAP LA: \n",n,c[i]);
	
	for(i=0;i<n;i++){
			printf("%d ",c[i]);
	}

	printf("\nNhap a,b:");
	scanf("%d%d",&a,&b);
	printf("Cac phan tu thuoc trong doan [%d,%d] la:",a,b);
	for( i=0;i<n;i++ ){
		if( c[i]>=a && c[i]<=b ){
			printf("%d ",c[i]);
		} 
	}
	getch();
	return 0;
}
