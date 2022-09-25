#include <bits/stdc++.h>

using namespace std;

using ll = long long;

int main(){
	int n, k; cin >> n >> k;
	int x[k+1];
	for (int i = 1; i <= k; i++){
		x[i] = i;
	}
	while (1){
		for (int i = 1; i <= k; i++){
			cout << x[i];
		}
		cout << " ";
		int i = k;
		while (x[i] == n - k + i && i > 0) i--;
//		đã ở cấu hình cuối
		if (i == 0) break;
//		nếu kp ch cuối thì sinh ra cấu hình tiếp theo
		else{
			x[i]++;
			for (int j = i + 1; j <= k; j++){
				x[j] = x[i] + j - i;
			}
		}
	}
	return 0;
}