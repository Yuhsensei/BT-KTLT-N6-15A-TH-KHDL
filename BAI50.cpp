#include <bits/stdc++.h>
using namespace std;

double ch(double x){
	double tmp = 1, ans = 1, n = 1;
	while (fabs(tmp) >= 0.000001){
    tmp = tmp*x*x/(n*(n+1));
		ans += tmp;
		n = n + 2;
	}
	return ans;
}
int main(){
  double x;
	scanf("%lf",&x);
  printf("%lf",ch(x));
	return 0;    
}
