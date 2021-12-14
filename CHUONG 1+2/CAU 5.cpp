//CAU 5: KIEM TRA TAM GIAC 
#include<stdio.h>
#include<math.h>
int main(){
	float x1,x2,x3,y1,y2,y3,p,s,a,b,c;
	printf("Nhap toa do cac diem: \n");
	printf("Diem A(x1,y1): \n");
	printf("x1 = "); scanf("%f",&x1);
	printf("y1 = "); scanf("%f",&y1);
	
	printf("Diem B(x2,y2): \n");
	printf("x2 = "); scanf("%f",&x2);
	printf("y2 = "); scanf("%f",&y2);
	
	printf("Diem C(x3,y3): \n");
	printf("x3 = "); scanf("%f",&x3);
	printf("y3 = "); scanf("%f",&y3);
	
	a = sqrt(pow((x2-x1),2)+pow((y2-y1),2));
	b = sqrt(pow((x3-x2),2)+pow((y3-y2),2));
	c = sqrt(pow((x3-x1),2)+pow((y3-y1),2));
	p=a+b+c;
	s= sqrt(p*(p-a)*(p-b)*(p-c));
	
	printf("\nDo dai canh AB la: %f\n",a);
	printf("\nDo dai canh BC la: %f\n",b);
	printf("\nDo dai canh AC la: %f\n",c);
	
	if ((a+b>c) && (b+c>a) && (a+c>b)){
		printf("\nDay la 3 canh cua tam giac ! \n");
		printf("\nChu vi cua tam giac do la: %f",2*p);
		printf("\nDien tich cua tam giac do la: %f",s);	
	}
	else
		printf("\nNhap sai ! Day khong phai la ba canh cua tam giac ! ");
	return 0;
}

