//CAU 62: Nhap vao mot day so nguyen - xac dinh so nguyen to trong day
#include<stdio.h>
#define MAX_SIZE 100
int soNguyenTo(int n);
int main(){
	int n,a[MAX_SIZE];
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
	printf("\nCac so nguyen to trong mang: \n");
	for(int i=0;i<n;i++){
		if (soNguyenTo(a[i]))
			printf("%d ",a[i]);
	}
	return 0;
}
int soNguyenTo(int soA)
{
    if (soA < 2)    
        return 0;
    for (int i = 2; i <= (soA/2); i ++)
    {
        if (soA%i==0)
        {
            return 0;
        }
    }
    return 1;
}

