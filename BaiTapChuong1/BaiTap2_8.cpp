#include <stdio.h>

int main(){
	float toan, ly, hoa;
	do{
		printf("Nhap vao diem toan: "); 
		scanf("%f", &toan);		
	}while(toan<0 || toan>10);
	do{
		printf("Nhap vao diem ly: "); 
		scanf("%f", &ly);		
	}while(ly<0 || ly>10);
	do{
		printf("Nhap vao diem hoa: "); 
		scanf("%f", &hoa);		
	}while(hoa<0 || hoa>10);
	float sum = toan + ly + hoa;
	if(sum >= 19.5)
		printf("Hoc sinh A dau");
	else 
		printf("Hoc sinh A khong dau");
	return 0;
}
