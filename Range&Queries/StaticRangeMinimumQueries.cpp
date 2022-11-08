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
ll arr[2000000];
ll seg[6000000];
void build(ll left,ll right,ll ind){
	if (left == right){seg[ind] = arr[left];return;}
	ll mid = (left+right)/2;
	build(left,mid,2*ind);
	build(mid+1,right,2*ind+1);
	seg[ind] = min(seg[2*ind],seg[2*ind+1]);
}

/// gets the value from an array by given a range using segment tree. you can change the last line to change what you want to get from the tree.
/// \param left where a vertex starts covering from the array. seg[n] covers l - r
/// \param right where a vertex ends covering from the array. seg[n] covers l - r
/// \param quire_left start the quire range
/// \param quire_right end the quire range
/// \param ind the vertex position
/// \return the ..... form an array range
int get(int left, int right, int quire_left, int quire_right, int ind) {
	if (left >= quire_left && right <= quire_right) {
		return seg[ind];
	}else if(right<quire_left || left>quire_right)return MAX;
	else {
		int mid = (left + right) / 2;
		return min(get(left, mid, quire_left, quire_right, ind * 2),
				   get(mid + 1, right, quire_left, quire_right, 2 * ind + 1));
	}
}


int main() {
	FIO;
	ll t,n,x,y;
	cin>>t>>n;
	for (int i = 1; i <= t; ++i) {
		cin>>arr[i];
	}
	build(1,t,1);
	while(n--){
		cin>>x>>y;
		cout<<get(1,t,x,y,1)<<ln;
	}
	
}
