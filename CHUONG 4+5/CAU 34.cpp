//CAU 34: STRUCT NHAN VIEN - GHI VAO FILE "ketqua.txt"
#include<stdio.h>
#define MAX_SIZE 100
struct nhanvien{
	char ten[50];
	float hesoluong;
	int phucap;
};
int main(){
	struct nhanvien nv[MAX_SIZE];
	int n,i;
	do{
		printf("Nhap so nhan vien: ");
		scanf("%d",&n);
	}while (n<0 || n>100);
	
	for(i = 0; i < n;i++){
		printf("Nhap thong tin cho nhan vien thu %d\n",i);
		printf("Nhap ho ten: "); fflush(stdin); gets(nv[i].ten);
		printf("Nhap he so luong: "); scanf("%f",&nv[i].hesoluong);
		printf("Nhap phu cap: "); scanf("%d",&nv[i].phucap);
	}
	
	printf("\nDanh sach nhan vien vua nhap la: \n");
	printf("%-5s%-25s%15s%13s\n","STT","Ten","He so luong","Phu cap");
	for(i = 0;i < n; i++){
		printf("%-5d",i);
		printf("%-25s",nv[i].ten);
		printf("%15f",nv[i].hesoluong);
		printf("%13d\n",nv[i].phucap);
	}
	
	FILE *fp = fopen ("ketqua.txt","wt");
	fprintf(fp,"%-5s%-25s%15s%13s\n","STT","Ten","He so luong","Phu cap");
	for(i = 0;i < n; i++){
		fprintf(fp,"%-5d",i);
		fprintf(fp,"%-25s",nv[i].ten);
		fprintf(fp,"%15f",nv[i].hesoluong);
		fprintf(fp,"%13d\n",nv[i].phucap);
	}
	fclose(fp);
	printf("\nMang da duoc ghi vao file ketqua.txt !");
	return 0;
}

