//CAU 37: NHAP MANG SINH VIEN - GHI VAO FILE 'ketqua.txt'
#include<stdio.h>
#define MAX_SIZE 100
struct sinhvien{
	char ten[50];
	float diemtoan;
	float diemly;
	float diemhoa;
};
int main(){
	int i,n;
	struct sinhvien sv[MAX_SIZE];
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	for(i = 0; i<n;i++){
		printf("Nhap thong tin cho sinh vien thu %d\n",i);
		printf("Nhap ho ten: "); fflush(stdin); gets(sv[i].ten);
		printf("Nhap diem toan: "); scanf("%f",&sv[i].diemtoan);
		printf("Nhap diem ly: "); scanf("%f",&sv[i].diemly);
		printf("Nhap diem hoa: "); scanf("%f",&sv[i].diemhoa);
	}
	
	printf("\nDanh sach sinh vien vua nhap vao:  \n");
	printf("%-5s%-25s%11s%11s%11s\n","STT","Ten","Diem toan","Diem ly","Diem hoa");
	for (i=0;i<n;i++){
		printf("%-5d",i);
		printf("%-25s",sv[i].ten);
		printf("%11f",sv[i].diemtoan);
		printf("%11f",sv[i].diemly);
		printf("%11f\n",sv[i].diemhoa);
	}
	FILE *fp = fopen("ketqua.txt","wt");
	fprintf(fp,"%-5s%-25s%11s%11s%11s\n","STT","Ten","Diem toan","Diem ly","Diem hoa");
	for (i=0;i<n;i++){
		fprintf(fp,"%-5d",i);
		fprintf(fp,"%-25s",sv[i].ten);
		fprintf(fp,"%11f",sv[i].diemtoan);
		fprintf(fp,"%11f",sv[i].diemly);
		fprintf(fp,"%11f\n",sv[i].diemhoa);
	}
	fclose(fp);
	printf("Mang da duoc ghi vao file ketqua.txt !");
	return 0;
}
