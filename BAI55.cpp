#include <bits/stdc++.h>
using namespace std;
int n, k, A[100001];
void input(){
	scanf("%d",&n);
	for(int i = 0; i < n; i++)
        scanf("%d ",&A[i]);
}
void solve(){
    for(int i = k; i < n - 1; i++)
        A[i] = A[i + 1];
    n--;
}
void output(){
	for(int i = 0; i < n; i++)
        printf("%d ",A[i]);
}
int main(){
	input();
    solve();
    output();
	return 0;    
}
