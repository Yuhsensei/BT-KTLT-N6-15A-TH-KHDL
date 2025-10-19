#include <bits/stdc++.h>
using namespace std;
int n, A[1001][1001], ans = 0;
void input(){
	scanf("%d",&n);
	for(int i = 0; i < n; i++) 
        for(int j = 0; j < n; j++) 
            scanf("%d",&A[i][j]);
}
void output(){
	for(int i = 0; i < n; i++){
        for(int j = 0; j < n; j++) 
            printf("%d", A[i][j]);
        printf("\n");
    }
}
void solve(){
	int Max = 0;
	for(int i = 0; i < n; i++){
		Max = A[i][0];
        for(int j = 0; j < n; j++)
        	if (A[i][j] > Max)
        		Max = A[i][j];
    	A[i][i] = Max;
    	ans += Max;
	}
	printf("ma tran sau khi doi\n");
	output();
	printf("Tong cac phan tu lon nhat la %d", ans);
}
int main(){
	input();
	output();
    solve();
	return 0;    
}
