//TINH TO HOP - CHINH HOP: 
#include<stdio.h>
int GT(int n);
int main(){
	int n,k;
	do{
		printf("Nhap k:");
		scanf("%d",&k);
		printf("Nhap n:");
		scanf("%d",&n);
	}while(n<0 || k<0 || k>n);
    printf("To hop chap %d cua %d la:% d \n",n,k,GT(n)/(GT(k)*GT(n-k)));
    printf("Chinh hop chap %d cua %d la: %d",n,k,GT(n)/GT(n-k));
	return 0;
}
int GT(int n){
	int i,a=1;
	for(i=1;i<=n;i++) {
		a*=i;
	}
	return a;
}

