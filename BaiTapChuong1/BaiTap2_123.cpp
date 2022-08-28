#include <stdio.h>
#include <math.h>

int main ()
{
	int a,b,c;
	printf ("\nnhap goc A: ");
	scanf ("%d", &a);
	printf ("\nnhap goc B: ");
	scanf ("%d", &b);
	printf ("\nnhap goc C: ");
	scanf ("%d", &c);
	int sum = a+b+c;
	
	if (a>0 && b>0 && c>0 && sum==180)
	{
		if (a==60 && b==60)
		
			printf ("A, B, C la goc cua tam giac deu");
		
		 else if (a==90 || b==90|| c==90)
		
			printf ("A, B, C la goc cua tam giac vuong");
		
		else if (a==b || b==c || c==a)
		
			printf ("A, B, C la goc cua tam giac can");
		else 
			printf("A, B, C la goc cua tam giac");
		
	}else 
		printf ("\nA, B, C khong phai goc cua tam giac\n");
	return 0;
}
	
		
	
