#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int n; cin >> n;
	int x[n+1];
	for (int i = 1; i <= n; i++) x[i] = i;
	while (1){
		for (int i = 1; i <= n; i++) cout << x[i]; cout << " "; // in ra c?u hình hi?n t?i
//		tính t? ph?i sang trái 
//		tìm ra ph?n t? gãy (i l?n  nh?t mà x[i] < x[i+1]) 
		int i = n-1;
		while (x[i] > x[i+1] && i > 0) i--; // n?u còn l?n hon thì b? qua
//		sau dòng này s? tìm dc v? trí i 

		if (i == 0) break; // dã ? c?u hình cu?i cùng 
		
		else {
			int k = n;
			while (x[k] < x[i]) k--; //tìm th?ng bé nh?t mà l?n hon th?ng x[i] ? trên trong d?ng còn l?i => k
//			sau dòng này có dc v? trí k 
			swap(x[k], x[i]);  // hoán d?i giá tr? 
//			vì nh?ng th?ng d?ng sau dã dc s?p x?p t? l?n - bé (trái sang ph?i)


//			nên ch? c?n d?i ch? 2 th?ng d?u cu?i tuong ?ng là dc
//			int l = i + 1, r = n;
//			while (l < r){
//				swap(x[l], x[r]);
//				l++;
//				r--;
//			}
//			ho?c sort nh?ng th?ng còn l?i cung dc
			sort (x + i + 1, x + n + 1); // hàm sort m?c d?nh t? bé - l?n (trái - ph?i)
		}
		
		
	}

	return 0;
}
