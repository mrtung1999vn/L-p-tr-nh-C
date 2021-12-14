//CAU 52: STRUCT HOC SINH - SAP XEP THEO TUOI TANG DAN - NEU BANG TUOI XEP THEO DTB
#include<stdio.h>
#define MAX_SIZE 100
struct hocsinh{
	char ten[50];
	int tuoi;
	float diemtb;
};
int main(){
	int n,i,j;
	struct hocsinh hs[MAX_SIZE];
	struct hocsinh tg;
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
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(hs[i].tuoi>hs[j].tuoi){
				tg = hs[i];
				hs[i] = hs[j];
				hs[j] = tg;
			}
		}
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(hs[i].tuoi == hs[j].tuoi){
				if(hs[i].diemtb > hs[j].diemtb){
					tg = hs[i];
					hs[i] = hs[j];
					hs[j] = tg;
				}
			}
		}
	}
	printf("Danh sach hoc sinh sap xep theo tuoi va dtb la: \n");
	printf("%-5s%-25s%7s%20s\n","STT","Ten","Tuoi","Diem trung binh");
	for(i=0;i<n;i++){
		printf("%-5d",i);
		printf("%-25s",hs[i].ten);
		printf("%7d",hs[i].tuoi);
		printf("%20f\n",hs[i].diemtb);
	}
	return 0;
}

