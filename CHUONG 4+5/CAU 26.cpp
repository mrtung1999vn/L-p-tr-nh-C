//CAU 26: SAP XEP MANG GIAM DAN THEO HANG (GIU NGUYEN I)
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
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			for(int k=j+1;k<n;k++){
				if(a[i][j] < a[i][k]){
					tg=a[i][j];
					a[i][j] = a[i][k];
					a[i][k] = tg;
				}	
			}
		}
	}
	printf("Ma tran sap xep giam dan theo hang la:\n");
	for(i=0;i<n;i++) {
		for(j=0;j<n;j++) {
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	return 0;
}

