//CAU12 - TINH VECTOR -     
#include<stdio.h>
#include<math.h>
#include<stdlib.h>
#include<time.h>

#define SIZE 15	

void inMang( int arr[], int size );

int main()
{
	int x[SIZE];
	int y[SIZE];
	int z[SIZE];	
	int n;	
	float dd_x=0;	
	float d=0;
	
	do {
		printf("Nhap kich thuoc mang (0~14): ");
		scanf("%d",&n);		
	} while (n<0 || n>14);
	
	srand( time( NULL ));	
							
	for(int i=0; i < n; i++ )
	{
		x[i] = rand()%10;
		y[i] = rand()%10;													
	}
	
	printf("Mang X la: \n");
	inMang(x,n);
	printf("Mang Y la: \n");
	inMang(y,n);
	for (int i=0;i<n;i++){
		d += pow(x[i], 2);
		dd_x = sqrt (d);
	}
	printf ("\nDo dai vector x la: %f",dd_x);
	
	for (int i=0;i<n;i++){
		z[i]=x[i]+y[i];
		printf ("\n z[%d] = %d ", i, z[i]);
	}

	return 0;
}
void inMang( int arr[], int size )
{
	int i;

	printf( "%s%13s\n", "Phan tu", "Gia tri" );
	for(i=0; i<size; i++)
	{
		printf( "%7d%13d\n", i, arr[ i ] );
	}
}

