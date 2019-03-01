#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <limits.h>
#define ll long long int
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
	    ll alph[26] = {0};
	    
	    string s;
	    cin >> s;
	    
	    for(int i = 0;i < s.length();i++) {
	        alph[s[i] - 65] += 1;
	    }
	    ll present = 0;
	    for(int i = 0;i < 26;i++) {
	        if(alph[i] != 0) present += 1;
	    }
	    sort(alph, alph+26, greater<>());
	    ll mini = INT_MAX;
	    for(int i = 1;i <= s.length();i++) {
	        if(s.length() % i == 0 && (s.length() / i) <= 26) {
	            ll sum = 0;
	            ll x = s.length() / i;
	            if(x >= present) {
	                for(int j = 0;j < x;j++) {
	                    sum += abs(alph[j] - i);
	                }
	                ll farak = sum / 2;
	                mini = min(farak, mini);
	            }
	            else {
	                for(int j = 0;j < x;j++) {
	                    sum += abs(alph[j] - i);
	                }
	                for(int j = x;j < present;j++) {
	                    sum += alph[j];
	                }
	                ll farak = sum / 2;
	                mini = min(farak, mini);
	            }
	        }
	    }
	    
	    cout << mini << "\n";
	}
	return 0;
}
