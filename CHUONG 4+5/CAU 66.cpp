//CAU 66: Nhap vao mot day so nguyen - Tinh tich min max trong day
#include<stdio.h>
#define MAX_SIZE 100
int main(){
	int n,a[MAX_SIZE];
	int max,min;
	do{
		printf("Nhap kich thuoc mang: ");
		scanf("%d",&n);
	}while(n<0||n>100);
	for (int i=0;i<n;i++){
		printf("a[%d] = ",i); 
		scanf("%d",&a[i]);
	}
	printf("Mang da nhap la: \n");
	printf("%d",a[0]);
	for(int i=1;i<n;i++){
		printf(",%d",a[i]);
	}
	max = a[0];
	for(int i=0;i<n;i++){
		if(max<a[i])
			max = a[i];
	}
	min = a[0];
	for(int i=0;i<n;i++){
		if(min>a[i])
			min = a[i];
	}
	
	printf("\nGTLN cua mang la: %d\n",max);
	printf("\nGTNN cua mang la: %d\n",min);
	printf("\nTich cua GTLN va GTNN la: %d\n",max*min);
	return 0;
}

