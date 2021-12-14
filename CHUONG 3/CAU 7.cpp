//CAU 7: TIM UCLN BCNN CUA HAI SO A VA B - FUNCTION -  
#include<stdio.h>
#include<conio.h>
int UCLN(int a,int b);
int BCNN(int a,int b);
int main(){
	int a,b;
	do{
	printf("Nhap a,b: ");
	scanf("%d%d",&a,&b);
	}while(a<0||b<0);
	printf("\nUoc chung lon nhat cua a va b la: %d\n",UCLN(a,b));
	printf("Boi chung nho nhat cua a va b la: %d",BCNN(a,b));
	return 0;
}
int UCLN(int a,int b){
	while(a!=b){
		if(a>b)
			a-=b;
		else
			b-=a;
	}
	return a;
}
int BCNN(int a,int b){
	return (a*b)/UCLN(a,b);
}
