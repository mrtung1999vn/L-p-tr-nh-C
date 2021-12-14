/* De cuong on thi: 9
	Viet ham chuyen doi so nguyen duong n tu he thap phan sang he nhi phan.
	Viet cho nhung nguoi moi hoc C, co the khong toi uu ve thuat toan.
	Tac gia: LtC-N06 */

#include <stdio.h>

// ham chuyen so thap phan sang he nhi phan roi in ra man hinh
void dec2Bin( int dec );

int main()
{
	int n;
	
	printf( "Nhap so nguyen duong: " );
	scanf( "%d", &n );

	dec2Bin( n );
	
	return 0;	 
}

// ham chuyen so thap phan sang he nhi phan roi in ra man hinh
//	chia lien tiep so can doi cho 2, lay phan du.
//	luu phan du vao mang, roi in mang theo thu tu nguoc lai.
void dec2Bin( int dec )
{
	int bin[100], bit;
	int i, size = 0;
	
	// tinh tung bit, chen vao mang
	while ( dec > 0 )
	{
		bit = dec % 2;
		bin[size] = bit;
		size++;
		dec /= 2;
	}
	
	// in mang cac bit theo chieu nguoc lai
	for ( i=size-1; i>=0; i-- )
	{
		printf( "%d", bin[i] );
	}
}

