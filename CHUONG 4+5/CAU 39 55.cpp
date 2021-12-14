//CAU 38: NHAP MANG SINH VIEN - IN SV DAT HOC BONG 10%
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
	int i,j,n;
	struct sinhvien sv[MAX_SIZE];
	struct sinhvien tg;
	printf("Nhap so sinh vien: ");
	scanf("%d",&n);
	for(i = 0; i<n;i++){
		printf("Nhap thong tin cho sinh vien thu %d\n",i);
		printf("Nhap ho ten: "); fflush(stdin); gets(sv[i].ten);
		printf("Nhap diem toan: "); scanf("%f",&sv[i].diemtoan);
		printf("Nhap diem ly: "); scanf("%f",&sv[i].diemly);
		printf("Nhap diem hoa: "); scanf("%f",&sv[i].diemhoa);
		sv[i].diemtb = (sv[i].diemtoan+sv[i].diemly+sv[i].diemhoa)/3;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(sv[i].diemtb<sv[j].diemtb){
				tg = sv[i];
				sv[i] = sv[j];
				sv[j] = tg;
			}
		}
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
	
	printf("Danh sach sinh vien dat hoc bong: \n");
	printf("%-5s%-25s%11s%11s%11s\n","STT","Ten","Diem toan","Diem ly","Diem hoa");
	j=1;
	for(i=0;i<n;i++){
		if(sv[i].diemtoan >=5.0 && sv[i].diemly >=5.0 && sv[i].diemhoa >=5.0){
			if(sv[i].diemtb >= 7.0 && j<=n/10){
				printf("%-5d",i);
				printf("%-25s",sv[i].ten);
				printf("%11f",sv[i].diemtoan);
				printf("%11f",sv[i].diemly);
				printf("%11f\n",sv[i].diemhoa);
				j++;
			}	
		}
	}
	return 0;
}
