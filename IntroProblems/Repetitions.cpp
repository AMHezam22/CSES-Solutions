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
	string text;
	cin >>text;
	int ans=0 ,count=1;
	for(int i=1;i<text.length();i++){
		if(text[i] == text[i-1]){
			count++;
		}
		else{
			if(ans<count){
				ans=count;
			}
			count=1;
		}
	}
	if(ans<count){
		ans=count;
	}
	cout<<ans;
	return 0;
}