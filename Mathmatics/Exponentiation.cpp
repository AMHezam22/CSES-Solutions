// https://cses.fi/problemset/task/1095
// Created by AMHezam on 9/30/2022.
//
//the challenge was how to find the ans of x^y with time complexity less than O(n).
// and you can find the solution by Binary Exponentiation with O(log y) time complexity.
// the Algorithm -> https://cp-algorithms.com/algebra/binary-exp.html#algorithm

#include <iostream>
#include "bits/stdc++.h"
#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
#define ll long long
using namespace std;
ll n;
ll MOD =1e9 +7 ;

ll solve(int base, int exponent) {
	if (exponent == 0) {
		return 1;
	}
	ll result = solve(base, exponent / 2);
	if (exponent % 2 == 1) {
		return( ((result * result) % MOD)*base)%MOD;
	}else{
		return (result*result)%MOD;
	}
}


int main() {
	ios_base::sync_with_stdio(false); // to make I/O faster
	cin.tie(NULL);   // to make I/O faster
	int q;
	cin >> q;
	ll a,b;
	while (q) {
		cin >> a >> b;
		cout << solve(a,b)<<ln;
		--q;
	}
	return 0;
}