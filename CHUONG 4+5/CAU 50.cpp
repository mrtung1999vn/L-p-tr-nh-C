//CAU 50: STRUCT HOC SINH 
#include<stdio.h>
#define MAX_SIZE 100
struct hocsinh{
	char ten[50];
	int tuoi;
	float diemtb;
};
int main(){
	int n,i;
	struct hocsinh hs[MAX_SIZE];
	do{
		printf("Nhap so hoc sinh: ");
		scanf("%d",&n);
	}while(n<0 || n>100);
	for(i=0;i<n;i++){
		printf("Nhap thong tin cho hoc sinh thu %d\n",i);
		printf("Nhap ho ten: "); fflush(stdin); gets(hs[i].ten);
		printf("Nhap tuoi: "); scanf("%d",&hs[i].tuoi);
		printf("Nhap diem trung binh: "); scanf("%f",&hs[i].diemtb);
	}
	printf("Danh sach hoc sinh da nhap vao la: \n");
	printf("%-5s%-25s%7s%20s\n","STT","Ten","Tuoi","Diem trung binh");
	for(i=0;i<n;i++){
		printf("%-5d",i);
		printf("%-25s",hs[i].ten);
		printf("%7d",hs[i].tuoi);
		printf("%20f\n",hs[i].diemtb);
	}
	FILE *fp = fopen("ketqua.txt","wt");
	fprintf(fp,"%-5s%-25s%7s%20s\n","STT","Ten","Tuoi","Diem trung binh");
	for(i=0;i<n;i++){
		fprintf(fp,"%-5d",i);
		fprintf(fp,"%-25s",hs[i].ten);
		fprintf(fp,"%7d",hs[i].tuoi);
		fprintf(fp,"%20f\n",hs[i].diemtb);
	}
	fclose(fp);
	printf("Mang da duoc ghi vao file ketqua.txt !");
	return 0;
}

