#include<stdio.h>
#include<conio.h>

int main()
{
	int i , n;
	float S;
	S = 0 ;
	i =1;
	
	do{
		printf("\n nhap n : ");
		scanf("%d", &n);
		if(n < 1){
			printf("\n N phai lon hon hoac bang 1 .xin nhap lai ! ");
		}
	}while(n < 1);
	
	while(i < n){
		S = S + 1.0/i;
		i++;
	}
	
	printf("i = %d ", i);
	printf("\n S = %f", S);
	printf("\n Tong 1 + 1/2 + ... + 1 /%d la %.2f", n, S);
	
	
	return 0;
}
