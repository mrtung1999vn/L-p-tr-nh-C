//CAU 53: STRUCT SINH VIEN 
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
	printf("%-5s%-25s%12s%10s%11s\n","STT","Ten","Diem Toan","Diem Ly","Diem Hoa");
	for(i=0;i<n;i++){
		printf("%-5d",i);
		printf("%-25s",sv[i].ten);
		printf("%12f",sv[i].dtoan);
		printf("%10f",sv[i].dly);
		printf("%11f\n",sv[i].dhoa);
	}
	FILE *fp = fopen("ketqua.txt","wt");
	fprintf(fp,"%-5s%-25s%12s%10s%11s\n","STT","Ten","Diem Toan","Diem Ly","Diem Hoa");
	for(i=0;i<n;i++){
		fprintf(fp,"%-5d",i);
		fprintf(fp,"%-25s",sv[i].ten);
		fprintf(fp,"%12f",sv[i].dtoan);
		fprintf(fp,"%10f",sv[i].dly);
		fprintf(fp,"%11f\n",sv[i].dhoa);
	}
	fclose(fp);
	printf("\nMang da duoc ghi vao file ketqua.txt !\n");
	return 0;
}

