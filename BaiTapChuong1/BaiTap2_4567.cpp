#include <stdio.h>

int main (){
	int m,n;
	do{
		printf ("Thang: ");
		scanf("%d",&m);
	}
	while (m<1 || m>12);
	
	do{
		printf ("Nam: ");
		scanf("%d",&n);
	}
	while (n==0);
	
	switch (m){
	case 4: 
	case 6: 
	case 9: 
	case 11: 
		printf("\n Co 30 ngay");
		break;
	case 2:
		if ((n%4==0 && n%100!=0) || (n%400==0))
			printf("\n Co 29 ngay");
		else 
			printf("\n Co 28 ngay");
		break;
		default:
			printf ("\nco 31 ngay");
			break;
		}
	return 0;
}
			
