#include <stdio.h>

int main(){
		printf("Moi nhap vao mot so nguyen duong n: "); 
		int n,count=0; scanf("%d",&n);
	for(int i = 2; i*i <=n;i++){
		if(n % i ==0)	count++;	break; 
	} 
	if(n < 2 || count>0)	printf("So %d khong phai la mot so nguyen to",n);
	else printf("So %d la mot so nguyen to",n); 
} 
