#include<stdio.h>
#include<math.h>

int cp(long long n){
	int can = sqrt(n) + 0.5;
	if(1ll*can*can == n){
		return 1;
	}
	return 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(cp(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
	
	
}
