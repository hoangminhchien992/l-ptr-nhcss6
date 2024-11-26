#include<stdio.h>
int main(void){
	int number , tong = 0 ;
	for(int i = 1 ; i <= 5 ; i++){
		printf("Moi ban nhap so thu %d\n:", i );
		scanf("%d", &number);
		if( number % 2 ==0 ){
			tong += number ; 
		}
	}
	printf("Tong cac so le la :%d\n", tong );
	return 0 ; 
}
