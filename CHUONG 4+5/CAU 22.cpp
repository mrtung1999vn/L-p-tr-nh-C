//CAU 22: TIM GTLN VA VI TRI PHAN TU CO GTLN TREN DUONG CHEO CHINH MA TRAN VUONG -   
#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int a[MAX_SIZE][MAX_SIZE];
	int i,j,n,max,vti_max;
	printf("Nhap cap ma tran vuong: ");
	scanf("%d",&n);
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("a[%d][%d] = ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran vua nhap la: \n");
	for (i=0;i<n;i++){
		for(j=0;j<n;j++){
			printf("%d ",a[i][j]);
		}
		printf("\n");
}
	max = a[0][0];
	for(i=0;i<n;i++){
			if (max < a[i][i]){
				max = a[i][i];
				vti_max = i;
			}		
		}
		printf("\nPhan tu lon nhat tren duong cheo chinh la: %d\n",max);
		printf("Vi tri cua phan tu do la: a[%d][%d]",vti_max,vti_max);
		return 0;
}
