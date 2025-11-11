#include <bits/stdc++.h>
using namespace std;
void output(int A[][1001], int n, int m){
	for (int i = 0; i < n; i++){
		for (int j = 0; j < m; j++)
			printf("%d ",A[i][j]);
		printf("\n");
	}
}
void solve1(int A[][1001], int n, int m){
	int dem = 1;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
	while(h1 <= h2 && c1 <= c2){
		for (int i = c1; i <= c2; i++){
	    	A[h1][i] = dem;
	    	dem++;
		}
		h1++;
		if (h1 > h2) break;
	  	for (int i = h1; i <= h2; i++){
			A[i][c2] = dem;
			dem++;
		}
		c2--;
		if (c1 > c2) break;
		for (int i = c2; i >= c1; i--){
	    	A[h2][i] = dem;
	    	dem++;
		}
	  	h2--;
	  	if (h1 > h2) break;
	  	for (int i = h2; i >= h1; i--){
	  		A[i][c1] = dem;
			dem++;	
		}
		c1++;
	}
}
void solve2(int A[][1001], int n, int m){
	int dem = n * m;
	int h1 = 0, h2 = n - 1, c1 = 0, c2 = m - 1;
	while(h1 <= h2 && c1 <= c2){
		for (int i = c1; i <= c2; i++){
	    	A[h1][i] = dem;
	    	dem--;
		}
		h1++;
		if (h1 > h2) break;
	  	for (int i = h1; i <= h2; i++){
			A[i][c2] = dem;
			dem--;
		}
		c2--;
		if (c1 > c2) break;
		for (int i = c2; i >= c1; i--){
	    	A[h2][i] = dem;
	    	dem--;
		}
	  	h2--;
	  	if (h1 > h2) break;
	  	for (int i = h2; i >= h1; i--){
	  		A[i][c1] = dem;
			dem--;	
		}
		c1++;
	}
}
int main(){
  int n, m, A[1001][1001];
	scanf("%d %d",&n,&m);
	solve1(A, n, m);
	output(A, n, m);
	printf("\n");
	solve2(A, n, m);
	output(A, n, m);
}
