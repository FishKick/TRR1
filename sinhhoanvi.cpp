#include <bits/stdc++.h>
#include <math.h>

#define ll long long
using namespace std;

int main(){
	int n; cin >> n;
	int x[n+1];
	for (int i = 1; i <= n; i++) x[i] = i;
	while (1){
		for (int i = 1; i <= n; i++) cout << x[i]; cout << " "; // in ra c?u h�nh hi?n t?i
//		t�nh t? ph?i sang tr�i 
//		t�m ra ph?n t? g�y (i l?n  nh?t m� x[i] < x[i+1]) 
		int i = n-1;
		while (x[i] > x[i+1] && i > 0) i--; // n?u c�n l?n hon th� b? qua
//		sau d�ng n�y s? t�m dc v? tr� i 

		if (i == 0) break; // d� ? c?u h�nh cu?i c�ng 
		
		else {
			int k = n;
			while (x[k] < x[i]) k--; //t�m th?ng b� nh?t m� l?n hon th?ng x[i] ? tr�n trong d?ng c�n l?i => k
//			sau d�ng n�y c� dc v? tr� k 
			swap(x[k], x[i]);  // ho�n d?i gi� tr? 
//			v� nh?ng th?ng d?ng sau d� dc s?p x?p t? l?n - b� (tr�i sang ph?i)


//			n�n ch? c?n d?i ch? 2 th?ng d?u cu?i tuong ?ng l� dc
//			int l = i + 1, r = n;
//			while (l < r){
//				swap(x[l], x[r]);
//				l++;
//				r--;
//			}
//			ho?c sort nh?ng th?ng c�n l?i cung dc
			sort (x + i + 1, x + n + 1); // h�m sort m?c d?nh t? b� - l?n (tr�i - ph?i)
		}
		
		
	}

	return 0;
}
