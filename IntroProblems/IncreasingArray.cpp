#include <iostream>
#include "bits/stdc++.h"

#define ll long long
#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
const int INF = 1e9 + 5;
const int MOD = 1e7 + 7;
const int MAX = 10;
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	int n;
	cin >>n;
	ll per,now,ans = 0,temp;
	cin>>per;
	--n;
	while(n--){
		cin>>now;
		if(now<per){
			temp=per-now;
			ans+=temp;
			now+=temp;
		}
		per = now;
	}
	cout<<ans;


	return 0;
}