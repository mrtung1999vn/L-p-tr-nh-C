//CAU 58: DEM SO LAN XUAT HIEN CAC KI TU TRONG CHUOI
#include<stdio.h>
#include<string.h>
int main(){
	char s[100];
	int i,j;
	int dem,trung;
	printf("Nhap chuoi ki tu bat ki: ");
	gets(s);
	printf("So lan xuat hien cua cac ki tu trong xau la: \n");
	for(i=0;i<strlen(s);i++){
		dem = 1;
		for(j=i+1;j<strlen(s);j++){
			if (s[i] == s[j])
				dem ++;
			}
		trung = 0;
		for(j=0 ; j<i; j++){
			if (s[i] == s[j])
				trung++;
		}
		if(trung == 0)
			printf("'%c' : %d ",s[i],dem);
	}
	return 0;
}

