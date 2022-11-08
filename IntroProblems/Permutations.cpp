#include <iostream>
#include "bits/stdc++.h"

#define ll long long
#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
const int INF = 1e9 + 5;
const int MOD = 1e7 + 7;
const int MAX = 10;
using namespace std;

inline void print(int arr[],int n) {
	for (int i = 0; i < n; i++) {
		cout << arr[i] << " ";
	}
}
int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	ll n;
	cin >> n;
	if (n==1){
		cout<<1;
		return 0;
	}
	else if (n <= 3) {
		cout << "NO SOLUTION";
		return 0;
	}
	int m=n;
	int arr[n];
	if (n % 2 == 0) {
		int i=0;
		while(m){
			arr[i] = m;
			if (m==2){
				swap(arr[i],arr[i-1]);
			}
			m-=2;
			i++;
		}
		m++;
		while (m<n){
			arr[i++] = m;
			m+=2;
		}
	}else{
		int i=0;
		while(m!=-1){
			arr[i++] = m;
			m-=2;
		}
		m=2;
		while (m<n){
			arr[i] = m;
			if (m==4){
				swap(arr[i],arr[i-1]);
			}
			i++;
			m+=2;
		}
	}
	print(arr,n);
	return 0;
}