//CAU 27: NHAP MA TRAN - GHI MA TRAN VAO FILE 'ketqua.txt'
#include<stdio.h>
int main(){
	int a,b,i,j;
	int tong;
	int x[100][100];
	do{
		printf("Nhap so hang cua ma tran:");
		scanf("%d",&a);
	}while(a<1||a>100);
	do{
		printf("Nhap so cot cua ma tran:");
		scanf("%d",&b);
	}while(b<2||b>100);
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("x[%d][%d]=",i,j);
			scanf("%d",&x[i][j]);
		}
	}
	printf("Ma tran vua nhap la:\n");
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			printf("%d ",x[i][j]);
		}
		printf("\n");
	}
	FILE *fp = fopen("ketqua.txt","wt");
	for(i=0;i<a;i++) {
		for(j=0;j<b;j++) {
			fprintf(fp,"%d ",x[i][j]);
		}
		fprintf(fp,"\n");
	}
	fclose(fp);
	printf("Ma tran da duoc ghi vao file ketqua.txt !");
	return 0;
}

