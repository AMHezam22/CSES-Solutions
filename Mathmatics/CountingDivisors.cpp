// https://cses.fi/problemset/task/1713/

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

int getDivisors(ll n) {
	ll ans = 1;
	vector<ll> powersOfPrimeFactors;
	for (int i = 2; i*i <= n; ++i) {
		if (n % i == 0) {
			ll power = 0;
			while(n%i == 0){
				power++;
				n/=i;
			}
			powersOfPrimeFactors.push_back(power);
		}
	}
	if(n!= 1)powersOfPrimeFactors.push_back(1);
	for (auto z:powersOfPrimeFactors) {
		ans *= (z+1);
	}
	return ans;
}

int main() {
	FIO;
	ll t, n;
	cin >> t;
	unordered_map<ll,ll>dp;
	while (t--) {
		cin >> n;
		if(dp.find(n) == dp.end()){
			dp.insert(pair<ll,ll> (n,getDivisors(n)));
		}
		cout<<dp.at(n)<<ln;
	}
	return 0;
}