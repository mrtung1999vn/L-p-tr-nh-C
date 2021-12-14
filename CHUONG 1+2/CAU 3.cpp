//CAU 3: TINH HAM SO e^x -  
#include<stdio.h>
#include<math.h>
int main(){
	float ep,x;
	int n=0;
	float gt=1.0,s=1.0;
	do{
		printf("Nhap ep (0 < ep < 1): ");
		scanf("%f",&ep);
	}while(ep<0 || ep>1);
	printf("Nhap x: ");
	scanf("%f",&x);
	while(fabs(pow(x,n)/gt)>=ep){
		n++;
		gt*=n;
		s+=(float)(pow(x,n)/gt);
	}
	printf("Gia tri cua ham so e mu %f la: %f ",x,s);
}
