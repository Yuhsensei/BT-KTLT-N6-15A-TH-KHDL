#include <bits/stdc++.h>
using namespace std;
double x;
void input(){
	scanf("%lf",&x);
}
void solve(){
	double tmp = 1, ans = 1, n = 1;
	while (fabs(tmp) >= 0.000001){
    tmp = tmp*x*x/(n*(n+1));
		ans += tmp;
		n = n + 2;
	}
	printf("%lf",ans);
}
int main(){
	input();
  solve();
	return 0;    
}
