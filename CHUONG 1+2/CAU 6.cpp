//CAU 6: TINH TIEN TAXI 
#include<stdio.h>
int main() {
	int n;
	int a=0;
	do {
	printf("So km da di:");
	scanf("%d",&n);}
	while(n<1);
	if(n<=1) {
	    a=15000;}
	else if(n>=2&&n<=5) {
	    a+=(n-1)*13500+15000;}
	else if(n>=6&&n<=120) {
	    a=(n-5)*11000+69000;}
	else  {
	    a=((n-5)*11000+69000)*0.9;}
	printf("Hoa don:%d",a);
	return 0;
}
