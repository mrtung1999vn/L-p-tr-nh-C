/* De cuong on thi: 11
	Chuyen doi so nguyen duong n tu he thap sang he Hexa.
	Viet cho nhung nguoi moi hoc C, co the khong toi uu ve thuat toan.
	Tac gia: LTC-N06 */

#include <stdio.h>

// ham chuyen so thap phan sang he Hexa roi in ra man hinh
void dec2Hex( int dec );

int main()
{
	int n;
	
	printf( "Nhap so nguyen duong: " );
	scanf( "%d", &n );

	dec2Hex( n );
	
	return 0;	 
}

// ham chuyen so thap phan sang he Hexa roi in ra man hinh
//	chia lien tiep so can doi cho 16, lay phan du.
//	luu phan du vao mang, roi in mang theo thu tu nguoc lai.
void dec2Hex( int dec )
{
	char hex[100], bit;
	int i, size = 0;
	
	while ( dec > 0 )
	{
		bit = dec % 16;
		
		// chuyen so du (0~15) sang chu so Hexa
		if ( bit<10 )
			bit += 48;			// doi so du 0~9 --> '0'~'9'
		else
			bit += 55;			// doi so du 10~15--> 'A'~'F'
		
		// luu chu so Hexa vao mang
		hex[size] = bit;
		size++;
		
		dec /= 16;
	}
	
	// in mang cac bit ra theo chieu nguoc lai
	for ( i=size-1; i>=0; i-- )
	{
		printf( "%c", hex[i] );
	}
}

