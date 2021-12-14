//CAU 41: NHAP MANG SINH VIEN - IN RA LIST SV THI LAI IT NHAT HAI MON
#include<stdio.h>
#define MAX_SIZE 100
struct sinhvien{
	char ten[50];
	float diemTA;
	float diemtriet;
	float diemtdc;
};
int main(){
	int i,n;
	struct sinhvien sv[MAX_SIZE];
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	for(i = 0; i<n;i++){
		printf("Nhap thong tin cho sinh vien thu %d\n",i);
		printf("Nhap ho ten: "); fflush(stdin); gets(sv[i].ten);
		printf("Nhap diem tieng anh: "); scanf("%f",&sv[i].diemTA);
		printf("Nhap diem triet: "); scanf("%f",&sv[i].diemtriet);
		printf("Nhap diem THDC: "); scanf("%f",&sv[i].diemtdc);
	}
	
	printf("\nDanh sach sinh vien vua nhap vao:  \n");
	printf("%-5s%-25s%17s%13s%12s\n","STT","Ten","Diem Tieng Anh","Diem Triet","Diem THDC");
	for (i=0;i<n;i++){
		printf("%-5d",i);
		printf("%-25s",sv[i].ten);
		printf("%17f",sv[i].diemTA);
		printf("%13f",sv[i].diemtriet);
		printf("%12f\n",sv[i].diemtdc);
	}
	printf("Danh sach sinh vien thi lai (it nhat 2 mon): \n");
	printf("%-5s%-25s%17s%13s%12s\n","STT","Ten","Diem Tieng Anh","Diem Triet","Diem THDC");
	for(i=0;i<n;i++){
		if((sv[i].diemTA <4 && sv[i].diemtriet<4) || (sv[i].diemtdc <4 && sv[i].diemtriet <4) || (sv[i].diemTA<4 && sv[i].diemtdc<4) ||(sv[i].diemTA<4 && sv[i].diemtdc<4 && sv[i].diemtriet <4 )){
			printf("%-5d",i);
			printf("%-25s",sv[i].ten);
			printf("%17f",sv[i].diemTA);
			printf("%13f",sv[i].diemtriet);
			printf("%12f\n",sv[i].diemtdc);
		}
	}
	FILE *fp = fopen("ketqua.txt","wt");
	fprintf(fp,"%-5s%-25s%17s%13s%12s\n","STT","Ten","Diem Tieng Anh","Diem Triet","Diem THDC");
	for (i=0;i<n;i++){
		fprintf(fp,"%-5d",i);
		fprintf(fp,"%-25s",sv[i].ten);
		fprintf(fp,"%17f",sv[i].diemTA);
		fprintf(fp,"%13f",sv[i].diemtriet);
		fprintf(fp,"%12f\n",sv[i].diemtdc);
	}
	fclose(fp);
	printf("Mang da duoc ghi vao file ketqua.txt !");
	return 0;
}
