#include <iostream>
#include "bits/stdc++.h"

#define ll long long
#define ln '\n'
#define arrayLength(array) (sizeof(array)/sizeof(array[0]))
#define int long long
const int INF = 1e9 + 5;
const int MOD = 1e7 + 7;
const int MAX = 10;
using namespace std;

#undef int
int main() {
#define int long long
	int n;
	cin >>n;
	while(n!=1){
		cout<<n<<" ";
		if(n%2==0){
			n /=2;
		}
		else{
			n *=3;
			n++;
		}
	}
	cout <<1;
	return 0;
}