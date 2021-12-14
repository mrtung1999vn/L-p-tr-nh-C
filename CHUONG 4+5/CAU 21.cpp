#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int i,j;
	int n;
	int a[MAX_SIZE][MAX_SIZE];
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
	FILE *fp = fopen("ketqua.txt","wt");
	for(i=0;i<n;i++){
		for(j=0;j<n;j++){
			fprintf(fp,"%d ",a[i][j]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
	printf("Ma tran da duoc ghi vao file ketqua.txt ! ");
	return 0;
}

