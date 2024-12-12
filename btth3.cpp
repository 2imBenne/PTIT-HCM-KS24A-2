#include <stdio.h>

int main(){
	int n,val;
	printf("=============================================CHUONG TRINH CHUYEN DOI TIEN TE============================================");
	printf("1. USD to VND\n2. EUR to VND\n3. GBP to VND\n4. JPY to VND\n5. VND to USD\n6. VND to EUR\n7. VND to GBP\n8. VND to JPY\n");
	printf("Nhap vao don vi tien te ban muon chuyen doi : ");	scanf("%d",&n);
	printf("Nhap vao so tien ban muon chuyen doi : ");	scanf("%d",&val);
	
		switch(n){
		case 1:
			printf("%d USD = %d VND",val,val*23500);
			break;
		case 2:
			printf("%d EUR = %d VND",val,val*25000);
			break;
		case 3:
			printf("%d GBP = %d VND",val,val*28000);
			break;
		case 4:
			printf("%d JPY = %d VND",val,val*180);
			break;
		case 5:
			printf("%d VND = %d USD",val,val/23500);
			break;
		case 6:
			printf("%d VND = %d EUR",val,val/25000);
			break;
		case 7:
			printf("%d VND = %d GBP",val,val/28000);
			break;
		case 8:
			printf("%d VND = %d JPY",val,val/180);
			break;
		default:
			printf("Don vi tien te ban nhap khong ton tai");
	}
	return 0; 
}

