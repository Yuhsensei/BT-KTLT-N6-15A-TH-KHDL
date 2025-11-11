#include <bits/stdc++.h>
using namespace std;
void input(int A[1001][1001], int n){
	for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            scanf("%d",&A[i][j]);
}
void output(int A[1001][1001], int n){
	for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) 
            printf("%d", A[i][j]);
        printf("\n");
    }
}
void solve(int A[1001][1001], int n){
	int Min = 1e9, ans = 0;
	for(int i = 0; i < n; i++){
		Min = A[i][0];
        for(int j = 0; j < n; j++)
        	if (A[i][j] < Min)
        		Min = A[i][j];
    	A[i][i] = Min;
    	ans += Min;
	}
	printf("ma tran sau khi doi\n");
	output(A, n);
	printf("Tong cac phan tu nho nhat la %d", ans);
}
int main(){
  int n, A[1001][1001];
  scanf("%d",&n);
	input(A, n);
	output(A, n);
  solve(A, n);
	return 0;    
}
