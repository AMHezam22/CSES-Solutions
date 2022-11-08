//
// Created by AMHezam on 10/1/2022.
//
// by 1)fermat's little theorem:
// 		https://www.geeksforgeeks.org/fermats-little-theorem/
//	  2)Binary Exponentiation:
//		https://cp-algorithms.com/algebra/binary-exp.html


#include <iostream>
#include "bits/stdc++.h"

#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
#define ll long long
using namespace std;
ll MOD = 1e9 + 7;


ll solve(int base, int exponent, int mod) {
	if (exponent == 0) {
		return 1;
	}
	ll result = solve(base, exponent / 2, mod);
	if (exponent % 2 == 1) {
		return (((result * result) % mod) * base) % mod;
	} else {
		return (result * result) % mod;
	}
}


int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int q;
	cin >> q;
	ll a, b, c;
	while (q--) {
		cin >> a >> b >> c;
		cout << solve(a, solve(b, c, MOD - 1), MOD) << ln;
	}
	return 0;
}
