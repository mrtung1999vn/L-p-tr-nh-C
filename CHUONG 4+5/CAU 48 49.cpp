//CAU 48 - 49: STRUCT NHAN VIEN - TINH VA SAP XEP THU NHAP TANG DAN
#include<stdio.h>
#define MAX_SIZE 100
struct nhanvien{
	char ten[50];
	int namsinh;
	int phucap;
	float luong,thunhap;
	int songay;
};
int main(){
	struct nhanvien nv[MAX_SIZE];
	struct nhanvien tg;
	int i,j,n;
	printf("Nhap so nhan vien: "); scanf("%d",&n);
	for(i=0;i<n;i++){
		printf("Nhap thong tin cho nhan vien thu %d\n",i);
		printf("Nhap ho ten nhan vien: "); fflush(stdin); gets(nv[i].ten);
		printf("Nhap nam sinh: "); scanf("%d",&nv[i].namsinh);
		printf("Nhap so ngay: "); scanf("%d",&nv[i].songay);
		nv[i].luong=nv[i].songay*300000;
		nv[i].thunhap=nv[i].luong+nv[i].phucap;
	}
	for(i=0;i<n;i++) {
		if(nv[i].songay>=23) 
		    nv[i].phucap=0.3*nv[i].luong;
		else 
			nv[i].phucap=0.1*nv[i].luong;    
	}
	for(i=0;i<n-1;i++) {
		for(j=i+1;j<n;j++) {
			if(nv[i].thunhap>nv[j].thunhap) {
				tg=nv[i];
				nv[i]=nv[j];
				nv[j]=tg;
			}
		}
	}
	printf("\nDanh sach nhan vien sap xep theo chieu tang dan cua thu nhap la: \n ");
	printf("%-5s%-15s%11s%10s%30s\n","STT","Ten","Nam sinh","So ngay","Thu nhap");
	for(i = 0;i<n;i++){
		printf("%-5d",i);
		printf("%-15s",nv[i].ten);
		printf("%11d",nv[i].namsinh);
		printf("%10d",nv[i].songay);
		printf("%30f\n",nv[i].thunhap);
	}
	return 0;
}

