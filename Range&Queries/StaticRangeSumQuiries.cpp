#include <iostream>
#include "bits/stdc++.h"

#define FIO ios::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);
#define ll long long
#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
const int INF = 1e9 + 5;
const int MOD = 1e7 + 7;
const int MAX = 1e9;
using namespace std;


int main() {
	FIO;
	ll t,n;
	cin>>t>>n;
	ll arr[t];
	for (int i = 0; i < t; ++i) {
		cin>>arr[i];
	}
	ll sums[t+1];
	sums[0]=0;
	for (ll i = 1; i <=t; ++i) {
		sums[i] = arr[i-1]+sums[i-1];
	}
	int x,y;
	while (n--){
		cin>>x>>y;
		cout<<(sums[y] - sums[x-1])<<ln;
	}
	
}