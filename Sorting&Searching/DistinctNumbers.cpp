#include <iostream>
#include "bits/stdc++.h"

#define ll long long
#define FIO ios::sync_with_stdio(0);    cin.tie(0);    cout.tie(0);
#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
const int INF = 1e9 + 5;
const int MOD = 1e7 + 7;
const int MAX = 10;
using namespace std;

int main() {
	FIO;
	set<ll> s;
	ll t,n;
	cin>>t;
	while (t--){
		cin>>n;
		s.insert(n);
	}
	cout<<s.size();
	return 0;
}