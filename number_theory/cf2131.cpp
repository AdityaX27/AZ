#include <bits/stdc++.h>
using namespace std;
#define int long long
#define MOD 1000000007

signed main()
{
    int T;
    cin >> T;
    while (T--)
    {
        int N, k;
        cin >> N >> k;
        vector<int> arr(N), brr(N);
        for (int i = 0; i < N; i++)
        {
            cin >> arr[i];
        }
        for (int i = 0; i < N; i++)
        {
            cin >> brr[i];
            brr[i] %= k; // storing all the remainder terms of b
        }
        map<int, int> freq;
        for (int x : brr) freq[x]++; // counting how many times the freq array gets updated with the remainders

        for (int x : arr)
        {
            int rem = x % k;
            if (freq[rem] > 0)
            {
                freq[rem]--;
            }
            else if (freq[k - rem] > 0) // Note: This might cause issues when rem=0 (k-0 = k, which is not in the map)
            {
                freq[k - rem]--;
            }
        }

        bool valid = true;
        for (auto &pair : freq) // Iterate through each key-value pair in the map
        {
            if (pair.second > 0) // Check the value (count) of the key
            {
                valid = false;
                break;
            }
        }
        cout << (valid ? "YES" : "NO") << endl;
    }
}