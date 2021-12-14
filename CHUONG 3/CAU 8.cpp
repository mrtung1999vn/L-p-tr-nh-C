//CAU 8: KT SO NGUYEN TO -     
#include <stdio.h>
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
int main(){
	int n;
	printf ("Nhap so nguyen duong bat ki: \n");
	scanf ("%d",&n);
		if (soNguyenTo(n))
			printf ("So %d la so nguyen to ",n);
		else 
			printf("So %d khong phai la so nguyen to",n);	
	return 0;
	}
	
	

