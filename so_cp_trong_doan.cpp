// liet ke so chinh phuong trong doan 
#include<stdio.h>
#include<math.h>

int cp(long long n){
	int can = sqrt(n) + 0.5;
	if(1ll *can *can == n){
		return 1;
	}
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		int a , b;
		scanf("%d%d", &a,&b);
		int c1 = sqrt(a), c2= sqrt(b);
		if(c1 *c1 != a){
			++c1;
		}
		int i;
		for(i= c1 ;i <= c2 ;i++){
			printf("%d", i*i);
		}
		printf("\n");
	}
	
	
	
}
