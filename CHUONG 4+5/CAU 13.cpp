//CAU 13 - SO PT XUAT HIEN NHIEU NHAT TRONG MANG -  
#include<stdio.h>
void nhapMang(int a[],int n);
void inMang(int a[],int n);
int main(){
	int n;
	int a[100];
	int dem,max_dem=0,gt;
	do{
		printf("Nhap kich thuoc mang: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	nhapMang(a,n);
	inMang(a,n);
	printf("\nCac so nguyen khac nhau trong mang la:");
	for (int i=0;i<n;i++){
		dem=0;
		for (int j=i+1;j<n;j++){
			if (a[i]==a[j])
				dem++;
		}
		if (dem==0)
			printf("%d ",a[i]);
		if(max_dem<dem){
			max_dem = dem;
			gt=a[i];
		}
	}
	if(max_dem==0)
		printf("\nKhong co so nao lap lai nhieu lan");
	else
		printf("\nSo %d xuat hien nhieu lan nhat trong mang voi %d lan xuat hien",gt,max_dem+1);
	return 0;
}
void nhapMang(int a[],int n){
	for (int i=0;i<n;i++){
		printf("a[%d]= ",i);
		scanf("%d",&a[i]);
	}
}
void inMang(int a[],int n){
	printf("Mang da nhap la:\n");
	for(int i=0;i<n;i++){
		printf("%d ",a[i]);
	}
}
