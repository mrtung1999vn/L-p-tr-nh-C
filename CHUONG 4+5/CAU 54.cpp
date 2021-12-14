//CAU 54: STRUCT SINH VIEN - IN RA LIST SINH VIEN THI LAI CA 3 MON
#include<stdio.h>
#define MAX_SIZE 100
struct sinhvien{
	char ten[50];
	float dtoan;
	float dly;
	float dhoa;
};
int main(){
	int i,j,n;
	struct sinhvien sv[MAX_SIZE];
	do{
		printf("Nhap so sinh vien: ");
		scanf("%d",&n);
	}while (n<0 || n>100);
	for(i=0;i<n;i++){
		printf("Nhap thong tin cho sinh vien thu %d: \n",i);
		printf("Nhap ho ten: "); fflush(stdin); gets(sv[i].ten);
		printf("Nhap diem toan: "); scanf("%f",&sv[i].dtoan);
		printf("Nhap diem ly: "); scanf("%f",&sv[i].dly);
		printf("Nhap diem hoa: "); scanf("%f",&sv[i].dhoa);
	}
	printf("\nDanh sach sinh vien da nhap vao: \n");
	printf("%-5s%-25s%12s%10s%11s\n","STT","Ten","Diem Toan","Diem Ly","Diem Hoa");
	for(i=0;i<n;i++){
		printf("%-5d",i);
		printf("%-25s",sv[i].ten);
		printf("%12f",sv[i].dtoan);
		printf("%10f",sv[i].dly);
		printf("%11f\n",sv[i].dhoa);
	}
	printf("\nDanh sach sinh vien thi lai ca 3 mon: \n");
	printf("%-5s%-25s%12s%10s%11s\n","STT","Ten","Diem Toan","Diem Ly","Diem Hoa");
	for(i=0;i<n;i++){
		if(sv[i].dtoan < 4 && sv[i].dly < 4 && sv[i].dhoa < 4){
			printf("%-5d",i);
			printf("%-25s",sv[i].ten);
			printf("%12f",sv[i].dtoan);
			printf("%10f",sv[i].dly);
			printf("%11f\n",sv[i].dhoa);
		}
	}
	return 0;
}

