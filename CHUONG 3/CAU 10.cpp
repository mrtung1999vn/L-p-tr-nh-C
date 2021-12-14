//CAU 10: KT SO HOAN HAO  -     
#include<stdio.h>
int perfect(int n){
	int i, sum=0;
	for(i=1;i<=n;i++){
		if(n%i==0)
		sum+=i;
  }
  if(sum==2*n)
      return 1;
  else
      return 0;
}
int main(){
	int n;	
	printf ("Nhap so nguyen duong bat ki: ");
	scanf ("%d",&n);
		if (perfect(n))
			printf ("So %d la so hoan hao",n);
		else 
			printf("So %d khong phai la so hoan hao",n);
	return 0;
	}
