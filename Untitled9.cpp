// so thuan nghich co it nhat 3 uoc nguyen to 
#include<stdio.h>
#include<math.h>

int tn(int n){
	int rev = 0 , tmp = n;
	while(n){
		rev = rev*10 + n %10;
		n/=10;
	}
	return tmp == rev;
}

int nt(int n){
	int i;
	for(i = 2;i <=sqrt(n) ;i++){
		if(n % i == 0){
			return 0;
		}
	}
	return n > 1;
}

int check(int n){
	itn cnt = 0;
	int i;
	for(i = 1;i <= n;i++){
		if(n%i == 0 && nt(i) ){
			++cnt;
		}
	}
	return cnt >= 3;
}

int check(int n){
	int ans = 0;
	int i;
	for(i = 2 ;i <= sqrt(n) ;i++){
		int cnt = 0;
		while(n %i == 0){
			++cnt;
			n/= i;
		}
		if(cnt != 0) ++ans;
	}
	if(n != 1){
		++ans;
	}
	return cnt >=3;
}








int main()
{
	int a , b;
	scanf("%d%d", &a ,&b);
	int ok = 0;
	int i;
	for(i = a ;i <= b;i++){
		if(check(i) && tn(i)){
			printf("%d ", i);
			ok = 1;
		}
	}
	if(!ok){
		printf("-1");
	}
	
}
