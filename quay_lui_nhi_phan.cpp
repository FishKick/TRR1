#include <bits/stdc++.h>

#define ll long long

using namespace std;


// để hiểu tốt nhất quay lui (back_tracking)

// tìm hiểu về đệ qui, bộ nhớ stack

// từ đó sẽ hiểu đc quy trình hoạt động của thuật toán quay lui


int N, X[100];

void in(){
	for (int i = 1; i <= N; i++){
		cout << X[i]; 
	}
	cout << endl;
}
void Try(int i){
	for (int j = 0; j <= 1; j++){ // các khả năng x[i] có thể nhận
		X[i] = j;
	
		if (i == N) in(); // <=> cấu hình cuối, cần phải in
		
		else{
			Try(i+1); // đệ quy 
		}
		 
	}
}
int main(){
	cin >> N;
	Try(1);
		
	return 0;
}