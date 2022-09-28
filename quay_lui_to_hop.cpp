#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

//mô tả thuật toán quay lui:
//	giả sử cấu hình xd có dangk (X1, X2, ..., Xn)
//	
//	Try(int i){
//		for (j = <khả năng 1>; j <= <khả năng M>; j++){
//			if (<chấp nhận khả năng j>){
//				x[j] = <khả năng j>;
//				if (i == n) 
//					<Thông báo cấu hình tìm được>
//				else{
//					Try(i+1);
//				}
//			}
//		}
//	}
int N,k;
int X[100];

void in(){
	for (int i = 1; i <= k; i++){
		cout << X[i];
	}
	cout << " ";
}
void Try(int i){
	X[0] = 0;
	for (int j = X[i-1] + 1; j <= N - k + i; j++){
		X[i] = j;
		if (i == k) in();
		else {
			Try(i+1);
		}
	}
	
}

int main(){
	cin >> N >> k;
	Try(1);
	
	return 0;
}
