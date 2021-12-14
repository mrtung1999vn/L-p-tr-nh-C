//CAU 23: SAP XEP MANG GIAM DAN THEO COT (GIU NGUYEN J)
#include<stdio.h>
int main(){
	int i,j,n,tg,a[100][100];
	printf("Nhap kich thuoc ma tran vuong:");
	scanf("%d",&n);
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("a[%d][%d]=",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("Ma tran vua nhap la:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	for(j=0;j<n;j++)
	{
		for(i=0;i<n;i++)
		{
			for(int k=i+1;k<n;k++){
				if(a[i][j]<a[k][j]){
					tg=a[i][j];
					a[i][j] = a[k][j];
					a[k][j] = tg;
				}	
			}
		}
	}
	printf("Ma tran sap xep giam dan theo cot la:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

