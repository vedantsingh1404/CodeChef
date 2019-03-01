#include <iostream>
#define ll long long int
#define limit 1000000000
using namespace std;

int main() {
  ios_base::sync_with_stdio(false);
  cin.tie(NULL);
  cout.tie(NULL);
	int t;
	cin >> t;
	while(t--) {
	    ll man[7];
	    
	    cout << "Q " << 0 << " " << 0 <<endl <<  flush;
	    cin >> man[0];
	    cout << "Q " << limit << " " << 0 << endl << flush;
	    cin >> man[1];
	    cout << "Q " << limit << " " << limit << endl << flush;
	    cin >> man[2];
	    
	    ll xmid = (limit + man[0] - man[1]) / 2;
	    ll ymid = (limit + man[1] - man[2]) / 2;
	    
	    cout << "Q " << xmid << " " << 0 << endl << flush;
	    cin >> man[3];
	    cout << "Q " << 0 << " " << ymid << endl << flush;
	    cin >> man[4];
	    
	    ll yl = man[3];
	    ll xl = man[4];
	    
	    cout << "Q " << xmid << " " << limit << endl << flush;
	    cin >> man[5];
	    cout << "Q " << limit << " " << ymid << endl << flush;
	    cin >> man[6];
	    
	    ll yu = limit - man[5];
	    ll xu = limit - man[6];
	    
	    cout << "A " << xl << " " << yl << " " << xu << " " << yu << endl << flush;
	    
	    int response;
	    cin >> response;
	    if(response != 1) break;
	}
	return 0;
}
