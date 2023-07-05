#include<stdio.h>
#include<math.h>

int check(long long n){
	int cnt = 0;
	int i;
	for(i = 1;i <= sqrt(n) ;i++){
		if(n %i == 0){
			if(i != n/i){
				cnt+= 2;
			}else{
				++cnt;
			}
		}
	}
	if(cnt %2 == 1){
		return 1;
	}else{
		return 0;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(check(n)){
			printf("YES\n");
		}else{
			printf("No \n");
		}
	}
}
