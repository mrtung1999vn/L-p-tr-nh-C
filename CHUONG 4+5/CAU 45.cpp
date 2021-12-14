//CAU 45: STRUCT SACH - SAP XEP THEO CHIEU GIAM DAN CUA GIA TIEN TRUNG BINH CHO 1 TRANG SACH
#include<stdio.h>
#define MAX_SIZE 100
struct sach{
	char ten[100];
	int sotrang;
	float giatien;
	float gttb;
};
int main(){
	struct sach books[MAX_SIZE];
	struct sach tg;
	int n,i,j;
	do{
		printf("Nhap so sach: ");
		scanf("%d",&n);
	}while (n<0 || n>100);
	
	for(i = 0; i < n;i++){
		printf("Nhap thong tin cho sach thu %d\n",i);
		printf("Nhap ten sach: "); fflush(stdin); gets(books[i].ten);
		printf("Nhap so trang: "); scanf("%d",&books[i].sotrang);
		printf("Nhap gia tien: "); scanf("%f",&books[i].giatien);
		books[i].gttb = books[i].giatien / books[i].sotrang;
	}
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n;j++){
			if(books[i].gttb < books[j].gttb){
				tg = books[i];
				books[i] = books[j];
				books[j] = tg;
			}
		}
	}
	printf("\nDanh sach sach sap xep theo chieu giam dan cua gia tien trung binh mot trang sach la: \n");
	printf("%-5s%-25s%15s%30s\n","STT","Ten","So trang","Gia tien");
	for(i = 0;i < n; i++){
		printf("%-5d",i);
		printf("%-25s",books[i].ten);
		printf("%15d",books[i].sotrang);
		printf("%30f\n",books[i].giatien);
	}
	return 0;
}

