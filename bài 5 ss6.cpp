#include<stdio.h>
int main(void){
	int  month , year ; 
	printf("Moi ban nhap thang\n: ");
	scanf("%d",&month);
	printf("Moi ban nhap nam\n: ");
	scanf("%d", &year);
	if(year % 400 == 0 || (year % 4 == 0 && year && 100 != 0))
	{
		switch(month)
		{
			case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
			printf("Thang %d co 31 ngay\n.",month);
			break ; 
			case 4 : case 6 : case 9 : case 11:
			printf("Thang %d co 30 ngay\n" , month);
			break ; 
			case 2 :
			printf("Thang %d co 29 ngay\n." , month);
			break ; 
		}
	}
	else
	{
		switch(month)
		{
			case 1 : case 3 : case 5 : case 7 : case 8 : case 10 : case 12:
			printf("Thang %d co 31 ngay\n." , month);
			break ; 
			case 4 : case 6 : case 9 : case 11:
			printf("Thang %d co 30 ngay"\n , month);
			break ; 
			case 2 :
			printf("Thang %d co 28 ngay."\n , month);
			break ; 
		}	
	}
}
