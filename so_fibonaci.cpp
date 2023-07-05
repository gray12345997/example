#include<stdio.h>
#include<math.h>

void solve(int n){
	printf("0 1 ");
	long long fn2 = 0 , fn1 = 1;
	int i;
	for(i = 3 ;i <= n;i++){
		long long fn = fn1 + fn2;
		printf("%lld ", fn);
		fn2 = fn1;
		fn1 = fn;
	}
}

void solve1(int n){
	long long  fibo[n];
	fibo[0] = 0;
	fibo[1] = 1;
	int i;
	for(i = 2 ;i < n;i++){
		fibo[i] = fibo[i-1] + fibo[i-2];
	}
	for(i = 0 ; i < n;i++){
		printf("%lld ", fibo[i]);
	}
}

int main()
{
	int t;
	t = 1 ;
	while(t--){
		int n ;
		scanf("%d", &n);
		solve(n);
		printf("\n");
		solve1(n);
	}
}
