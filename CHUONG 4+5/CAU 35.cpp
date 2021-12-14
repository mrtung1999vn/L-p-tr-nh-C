//CAU 35: STRUCT NHAN VIEN - Tim nhan vien co luong cao nhat
#include<stdio.h>
#define MAX_SIZE 100
struct nhanvien{
	char ten[50];
	float hesoluong;
	int phucap;
	float luong;
};
int main(){
	struct nhanvien nv[MAX_SIZE];
	int n,i,vt_max;
	float max_luong;
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
	max_luong = 0;
	for(i = 0; i < n; i++){
		nv[i].luong = nv[i].hesoluong*640 + nv[i].phucap;
		if (max_luong<nv[i].luong){
			max_luong = nv[i].luong;
			vt_max = i;
		}		
	}
	
	printf("\nDanh sach nhan vien vua nhap la: \n");
	printf("%-5s%-25s%15s%13s\n","STT","Ten","He so luong","Phu cap");
	for(i = 0;i < n; i++){
		printf("%-5d",i);
		printf("%-25s",nv[i].ten);
		printf("%15f",nv[i].hesoluong);
		printf("%13d\n",nv[i].phucap);
	}
	
	printf("Nhan vien co luong cao nhat la: \n");
	printf("%-5s%-25s%15s%13s\n","STT","Ten","He so luong","Phu cap");
		printf("%-5d",vt_max);
		printf("%-25s",nv[vt_max].ten);
		printf("%15f",nv[vt_max].hesoluong);
		printf("%13d\n",nv[vt_max].phucap);
	
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

