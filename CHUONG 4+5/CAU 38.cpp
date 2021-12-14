//CAU 38: NHAP MANG SINH VIEN - IN SV CO DIEM TB CAO NHAT
#include<stdio.h>
#define MAX_SIZE 100
struct sinhvien{
	char ten[50];
	float diemtoan;
	float diemly;
	float diemhoa;
	float diemtb;
};
int main(){
	int i,n,vt_max;
	float max_diemtb;
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
	max_diemtb = 0;
	for(i=0;i<n;i++){
		sv[i].diemtb = (sv[i].diemtoan+sv[i].diemly+sv[i].diemhoa)/3;
		if (max_diemtb < sv[i].diemtb){
			max_diemtb = sv[i].diemtb;
			vt_max = i;
		}
	}
	printf("Sinh vien co diem trung binh cao nhat la: \n");
	printf("%-5s%-25s%11s%11s%11s\n","STT","Ten","Diem toan","Diem ly","Diem hoa");
		printf("%-5d",vt_max);
		printf("%-25s",sv[vt_max].ten);
		printf("%11f",sv[vt_max].diemtoan);
		printf("%11f",sv[vt_max].diemly);
		printf("%11f\n",sv[vt_max].diemhoa);
	
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
