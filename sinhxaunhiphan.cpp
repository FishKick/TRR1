#include <bits/stdc++.h>


#define ll long long
using namespace std;

int main(){
	int n; cin >> n;
	int x[n+1];
	for (int& it : x) it = 0;
	while (1){
//		in ra cấu hình hiện tại
		for (int i = 1; i <= n; i++){
			cout << x[i];
		}
		cout << " ";
//		kiểm tra xem đã là cấu hình cuối chưa
//		nếu là cấu hình cuối => break;
//		còn không => sinh ra cấu hình kế tiếp
		int i = n;
	while (x[i]==1){
		x[i] = 0;
		i--;
	} 
	if (i == 0) break;
	else x[i] = 1;
	}
	
	return 0;
}

