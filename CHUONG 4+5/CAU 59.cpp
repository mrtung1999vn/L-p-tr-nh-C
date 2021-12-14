//CAU 59: DEM SO KI TU X(NHAP TU BAN PHIM) TRONG CHUOI S:
#include<stdio.h>
#include<string.h>
int main(){
	int i,dem=0;
	char s[100],x;
	printf("Nhap chuoi ki tu bat ki: ");
	gets(s);
	printf("Nhap mot ki tu: ");
	x = getchar();
	for(i=0;i<strlen(s);i++){
		if (s[i] == x){
			dem ++;
		}
	}
		printf("Ki tu %c xuat hien %d lan trong chuoi",x,dem);
	return 0;
}

