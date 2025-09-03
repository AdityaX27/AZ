#include <bits/stdc++.h>
using namespace std;
#define int long long
const int MAX = 1000000; // Since sqrt(10^12) is 10^6

vector<int> primes; // Store primes up to sqrt(R)

void sieve(int n) {
    vector<bool> isPrime(n+1, true);
    isPrime[0] = isPrime[1] = false;
    for (int i = 2; i <= n; i++) {
        if (isPrime[i]) {
            primes.push_back(i);
            for (int j = i*i; j <= n; j += i) {
                isPrime[j] = false;
            }
        }
    }
}

signed main() {
    int L, R;
    cin >> L >> R;
    int sqrtR = sqrt(R);
    sieve(MAX);
    
    int n = R - L + 1;
    vector<bool> seg(n, true);
    
    if (L == 1) {
        seg[0] = false;
    }
    
    for (int p : primes) {
        int start = max(p * p, ((L + p - 1) / p) * p);
        for (int j = start; j <= R; j += p) {
            seg[j] = false;
        }
    }
    
    int count = 0;
    for (int i = L; i <=R; i++) {
        if (seg[i]) {
            count++;
        }
    }
    cout << count << endl;
    
    for (int i = L; i <=R; i++) {
        if (seg[i]) {
            cout << i << " ";
        }
    }
    cout << endl;
    
    return 0;
}