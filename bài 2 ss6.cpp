#include<stdio.h>
int main(){
	int number , chan = 0 , le = 0;
	for(int i = 1 ; i <=5 ; i++){
		printf("\nMoi ban nhap so thu %d :",i);
		scanf("%d",&number);		
		if(number % 2 == 0){
			chan++;
		}else{
			le++;
		}
	}
	printf("\nSo luong so chan la : %d",chan);
	printf("\nSo luong so le la : %d",le);	
}
