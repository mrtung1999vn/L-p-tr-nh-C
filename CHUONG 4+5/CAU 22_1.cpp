//CAU 22
#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int i,j,vt_i,vt_j;
	int n;
	int a[MAX_SIZE][MAX_SIZE];
	int max_dcc;
	do{
		printf("Nhap cap ma tran vuong: "); 
		scanf("%d",&n);
	}while(n<0||n>100);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	max_dcc = a[0][0];
	for(int i=0;i<n;i++){
		if (max_dcc<a[i][i]){
			max_dcc = a[i][i];
			vt_i=i;
		}	
	}
	printf("\nGia tri phan tu lon nhat tren duong cheo chinh la: %d\n",max_dcc);
	printf("\nVi tri phan tu lon nhat la: a[%d][%d]\n",vt_i,vt_i);
	return 0;
}

