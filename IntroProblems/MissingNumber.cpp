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
	ll n;
	cin>>n;
	ll arr [n+1]={0};
	int temp;
	n--;
	while (n--){
		cin>>temp;
		arr[temp] = 1;
	}
	int i = 1;
	while (arr[i]){
		i++;
	}
	cout<<i;
	return 0;
}