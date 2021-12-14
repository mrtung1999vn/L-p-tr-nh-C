//CAU 57: KIEM TRA XAU KI TU CO BAO NHIEU CHU CAI VIET HOA,VIET THUONG,SO
#include<stdio.h>
#include<string.h>
int main(){
	
	char s[100];
	int i;
	int hoa = 0,thuong = 0,so = 0;
	printf("Nhap xau ki tu bat ki: ");
	gets(s);
	for(i=0;i<strlen(s);i++){
		if(s[i] >= 'A' && s[i] <= 'Z'  ){
			hoa++;
		}
		if(s[i] >= 'a' && s[i] <= 'z'){
			thuong++;
		}
		if(s[i] >= '0' && s[i] <= '9'){
			so++;
		}
	}
	printf("\nChuoi da nhap co: \n");
	printf("\n   +%d Chu hoa",hoa);
	printf("\n   +%d Chu thuong",thuong);
	printf("\n   +%d So",so);
	return 0;
}

