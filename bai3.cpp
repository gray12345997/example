#include<stdio.h>
#include<conio.h>

int main()
{
	int i, n;
	float S;
	S = 0;
	do{
		printf("\n nhap n : ");
		scanf("%d", &n);
		if(n < 1){
			printf("\n N phai lon hon hoac bang 1.xin nhap lai !");
		}
	}while(n < 1);
	
	for(i =1 ;i <= n;i++){
		S = S + 1.0/(2*i);
	}
	
	printf("\n Tong la : %f",S);
	return 0;
}
