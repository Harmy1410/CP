#include <bits/stdc++.h>
using namespace std;

#define ar array
#define ll long long

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int tc = 1, ans = 0;
	cin >> tc;
    while(tc--) {
		string s;
		cin >> s;
		if(s[1] == '+'){
			++ans;
			continue;
		}
		--ans;
    }
	cout << ans;
}