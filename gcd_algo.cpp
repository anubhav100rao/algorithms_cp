#include<bits/stdc++.h>
using namespace std;
int gcd_algo(int a , int b){
	if(b == 0){
		return a;
	}
	return gcd_algo(b, a % b);
	// this gcd
}
int gcd(int a, int b) 
{ 
    if (a == 0) 
        return b; 
    return gcd(b % a, a); 
} 
int main()
{	
	ios::sync_with_stdio(0);
	# ifndef ONLINE_JUDGE
		freopen("input.txt","r",stdin);
		freopen("output.txt","w",stdout);
	# endif
	cout << "implemting gcd algorithm \n";

	int tt;
	cin >> tt;
	while(tt--){
		int n,m;
		cin >> n >> m;
		cout << gcd_algo(n, m) << "\n";
	}


	return 0;
}


