#include<stdio.h>
#include<math.h>

int gt(int n){
	int res = 1;
	int i;
	for(i = 1 ;i <= n;i++){
		res*= i;
	}
	return res;
	
}

int strongNumber(int n){
	int sum = 0 , tmp = n;
	while(n){
		sum += gt(n %10);
		n/=10;
	}
	
	return tmp==sum;
}

int main()
{
	int a ,b;
	scanf("%d%d", &a , &b);
	int ok = 0;
	int i;
	for(i = a; i<= b;i++){
		if(strongNumber(i)){
			printf("%d ", i);
			ok = 1;
		}
	}
	
	if(!ok) printf("0");
	
}
