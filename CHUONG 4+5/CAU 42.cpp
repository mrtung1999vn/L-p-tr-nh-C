//CAU 40: NHAP MANG SINH VIEN - GHI VAO FILE 'ketqua.txt'
#include<stdio.h>
#define MAX_SIZE 100
struct sinhvien{
	char ten[50];
	float diemTA;
	float diemtriet;
	float diemtdc;
	float diemtb;
};
int main(){
	int i,j,n;
	struct sinhvien sv[MAX_SIZE];
	struct sinhvien tg;
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
	for(i = 0;i<n;i++){
		sv[i].diemtb = (sv[i].diemTA + sv[i].diemtriet + sv[i].diemtdc)/3;
	}
	for(i = 0;i<n-1;i++){
		for(j = i+1;j<n;j++){
			if (sv[i].diemtb < sv[j].diemtb){
				tg = sv[i];
				sv[i] = sv[j];
				sv[j] = tg;
			}
		}
	}
	printf("Danh sach sinh vien o lai lop: \n");
	printf("%-5s%-25s%17s%13s%12s\n","STT","Ten","Diem Tieng Anh","Diem Triet","Diem THDC");
	for (i=0;i<n;i++){
		if (sv[i].diemtb <4){
			printf("%-5d",i);
			printf("%-25s",sv[i].ten);
			printf("%17f",sv[i].diemTA);
			printf("%13f",sv[i].diemtriet);
			printf("%12f\n",sv[i].diemtdc);	
		}	
	}
	return 0;
}
