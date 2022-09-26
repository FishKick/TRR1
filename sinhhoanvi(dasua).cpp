#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int n; cin >> n;
	int x[n+1];
	for (int i = 1; i <= n; i++) x[i] = i;
	while (1){
		for (int i = 1; i <= n; i++) cout << x[i]; cout << " "; // in ra cấu hình hiện tại
//		tính từ phải sang trái 
//		tìm ra phần tử gãy (i lớn  nhất mà x[i] < x[i+1]) 
		int i = n-1;
		while (x[i] > x[i+1] && i > 0) i--; // nếu còn lớn hơn thì bỏ qua
//		sau dòng này sẽ tìm đc vị trí i 

		if (i == 0) break; // đã ở cấu hình cuối cùng 
		
		else {
			int k = n;
			while (x[k] < x[i]) k--; //tìm thằng bé nhất mà lớn hơn thằng x[i] ở trên trong đống còn lại => k
//			sau dòng này có đc vị trí k 
			swap(x[k], x[i]);  // hoán đổi giá trị 
//			vì những thằng đằng sau đã dc sắp xếp từ lớn - bé (trái sang phải)


//			nên chỉ cần đổi chỗ 2 thằng đầu cuối tương ứng là đc
//			int l = i + 1, r = n;
//			while (l < r){
//				swap(x[l], x[r]);
//				l++;
//				r--;
//			}
//			hoặc sort những thằng còn lại cũng dc
			sort (x + i + 1, x + n + 1); // hàm sort mặc định từ bé - lớn (trái - phải)
		}
		
		
	}

	return 0;
}
