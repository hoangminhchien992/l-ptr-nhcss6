#include<stdio.h>
#include<math.h>
int main()
{
	float a , b , c , denta , x ,x1,x2; 
	printf("Moi ban nhap so thu nhat\n:");
	scanf("%f", &a);
	printf("Moi ban nhap so thu hai\n:");
	scanf("%f", &b);
	printf("Moi ban nhap so thu ba\n:");
	scanf("%f", &c);
	printf("Phuong trinh %f.1x^2 + %.1fx +%.1f\n", a , b , c);
	denta=b*b-4*a*c;
	printf("Delta:%.1f\n" , denta);
	if(a!=0 && b!=0 && c!=0)
	{	
		if(denta > 0)
		{
			x1 = (-b+sqrt(denta))/(2*a);
			x2 = (-b-sqrt(denta))/(2*a);
			printf("Phuong trinh cos 2 nghiem x1 = %.1f va x2 = %.1f\n.", x1 , x2);
		}
		else if(denta == 0)
		{
			x = -b/(2*a);
			printf("Phuong trinh co nghien kep la\n: %.1f",x);
		}
		else
		{
			printf("Phuong trinh vo nghiep\n.");
		}
	}
	else if( a==0 && b != 0 && c!=0 )
	{
		x = -b/c;
		printf("Phuong trinh co nghiem la\n": %.1f " , x);
	}
	else if( a!=0 && b==0 && c !=0 )
	{
		x1 =sqrt(c/a);
		x2 =-sqrt(c/a);
		printf("Phuong trinh co nghiem x1 = %.1f va x2 = %.1f\n",x1,x2);
	}
	else if(a == 0 && b==0 && c != 0)
	{
		printf("Phuong trinh vo nghiem\n");
	}
	else
	{
		printf("Phuong trinh vo so nghhiem\n");
	}
