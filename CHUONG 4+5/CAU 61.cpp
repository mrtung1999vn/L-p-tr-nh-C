//CAU 61: DEM TU TRONG CHUOI:
#include<string.h>
#include<stdio.h>
int main(){
	char s[100];
	int i,j,dem=0;
	printf("Nhap chuoi ki tu bat ki: ");
	gets(s);
	printf("Chuoi ki tu da nhap la: %s\n",s);
	for(i=0;i<strlen(s);i++){
		if (s[i] == ' ' || s[i] == '	')
			dem++;	
		}
	printf("Chuoi da nhap co %d tu !",dem+1);
	return 0;
}

