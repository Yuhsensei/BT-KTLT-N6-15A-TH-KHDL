#include <bits/stdc++.h>
using namespace std;
void input(int A[], int n){
	for(int i = 0; i < n; i++)
        scanf("%d ",&A[i]);
}
void solve(int A[], int n, int k){
    for(int i = k; i < n - 1; i++)
        A[i] = A[i + 1];
}
void output(int A[], int n){
	for(int i = 0; i < n; i++)
        printf("%d ",A[i]);
}
int main(){
  int n, k, A[100001];
  	scanf("%d",&n);
	input(A, n);
	scanf("%d",&k);
    solve(A, n, k);
    output(A, n - 1);
	return 0;    
}
