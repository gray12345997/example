#include<stdio.h>
#include<math.h>

int check(long long n){
	int i;
	for(i =1 ;i <= 32 ;i++){
		if(nt(i)){
			int tmp = (int)pow(2, i) -1 ;
			if(nt(tmp)){
				long long hh = 1ll*tmp*(int)pow(2,i-1);
				if(hh == n){
					return 1;
				}
			}
		}
	}
	return 0;
}

long long ans[10];
int n = 0;
void init(){
	int i;
	for(i =1 ;i <= 32;i++){
		if(nt(i)){
		int tmp = (int)pow(2, i) -1;
		if(nt(tmp)){
			ans[n++] = 1ll*tmp*(int)pow(2, i-1);
		}
		}
	}
}

int hh(int n){
	int sum = 1;
	int i;
	for(i = 2 ;i <= sqrt(n) ;i++){
		if(n%i == 0){
			if(i != n/i){
				sum += i + n/i;
			}else{
				sum += i;
			}
		}
	}
	if(sum == n){
		return 1;
	}
	return 0;
}

int main(){
	int t;
	scanf("%d", &t);
	while(t--){
		long long n;
		scanf("%lld", &n);
		if(hh(n)){
			printf("YES\n");
		}else{
			printf("NO\n");
		}
	}
}
