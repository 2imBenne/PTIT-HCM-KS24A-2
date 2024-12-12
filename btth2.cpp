#include <stdio.h>

int main(){
	float n;
	int all,LTG,allowance,sum;
	printf("Moi nhap vao so gio cong thang nay: ");
	scanf("%f",&n);
	printf("Moi nhap tien luong 1 gio: ");
	scanf("%d",&LTG); 
	
	if(n > 160){
		 all = n * LTG;
		 allowance = all * 0.1;
		 sum = all + allowance;
		 printf("Phu cap thang nay ban duoc: %d VND \n",allowance); 
		 printf("Tong luong va phu cap thang nay cua ban la: %d VND",sum); 
	} 
	else{
		sum = n * LTG;
		printf("Do so gio la viec cua ban duoi 160h nen tien luong khong phu cap la: %d VND",sum); 
	} 
	return 0; 
} 
