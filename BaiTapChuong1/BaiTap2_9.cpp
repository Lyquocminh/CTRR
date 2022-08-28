#include <stdio.h>

int main(){
	int DRL, tinChi;
	do{
		printf("Nhap diem ren luyen (0-100): ");
		scanf("%d", &DRL);
	}while(DRL<0 || DRL > 100);
	
	do{
		printf("Nhap so tin chi trong hoc ky (ngoai tru GDQP va GDTC): ");
		scanf("%d", &tinChi);
	}while(tinChi < 11 || tinChi > 30);
	
	float diem;
	do{
		printf("Nhap vao GPA (he 4): ");
		scanf("%f", &diem);
	}while (diem <0 || diem > 4);
	
	int SLHS, hang;
	do{
		printf("Nhap vao so luong HS K17 khoa CNTT: ");
		scanf("%d", &SLHS);
	}while(SLHS <=0);
	
	do{
		printf("Nhap xep hang cua ban: ");
		scanf("%d", &hang);
	}while(hang<=0 || hang > SLHS);
	if(DRL >= 65 && tinChi >= 15 && diem >= 3.6 && (1.0*hang/SLHS)*100 <= 5)
		printf("Du dieu kien");
	else 
		printf("Khong du dien kien");
	
	return 0;
}
