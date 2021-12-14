//CAU 43: STRUCT SACH - GHI VAO FILE "ketqua.txt"
#include<stdio.h>
#define MAX_SIZE 100
struct sach{
	char ten[100];
	int sotrang;
	float giatien;
};
int main(){
	struct sach books[MAX_SIZE];
	int n,i;
	do{
		printf("Nhap so sach: ");
		scanf("%d",&n);
	}while (n<0 || n>100);
	
	for(i = 0; i < n;i++){
		printf("Nhap thong tin cho sach thu %d\n",i);
		printf("Nhap ten sach: "); fflush(stdin); gets(books[i].ten);
		printf("Nhap so trang: "); scanf("%d",&books[i].sotrang);
		printf("Nhap gia tien: "); scanf("%f",&books[i].giatien);
	}
	
	printf("\nDanh sach sach vua nhap la: \n");
	printf("%-5s%-25s%15s%30s\n","STT","Ten","So trang","Gia tien");
	for(i = 0;i < n; i++){
		printf("%-5d",i);
		printf("%-25s",books[i].ten);
		printf("%15d",books[i].sotrang);
		printf("%30f\n",books[i].giatien);
	}
	
	FILE *fp = fopen ("ketqua.txt","wt");
	fprintf(fp,"%-5s%-25s%15s%30s\n","STT","Ten","So trang","Gia tien");
	for(i = 0;i < n; i++){
		fprintf(fp,"%-5d",i);
		fprintf(fp,"%-25s",books[i].ten);
		fprintf(fp,"%15d",books[i].sotrang);
		fprintf(fp,"%30f\n",books[i].giatien);
	}
	fclose(fp);
	printf("\nMang da duoc ghi vao file ketqua.txt !");
	return 0;
}

