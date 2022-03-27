// You are given four integers n, B, x and y. You should build a sequence a0,a1,a2,…,an where a0=0 and for each i≥1 you can choose:

// either ai=ai−1+x
// or ai=ai−1−y.
// Your goal is to build such a sequence a that ai≤B for all i and ∑i=0nai is maximum possible.

// Input
// The first line contains a single integer t (1≤t≤104) — the number of test cases. Next t cases follow.

// The first and only line of each test case contains four integers n, B, x and y (1≤n≤2⋅105; 1≤B,x,y≤109).

// It's guaranteed that the total sum of n doesn't exceed 2⋅105.

// Output
// For each test case, print one integer — the maximum possible ∑i=0nai.

// Example
// inputCopy
// 3
// 5 100 1 30
// 7 1000000000 1000000000 1000000000
// 4 1 7 3
// outputCopy
// 15
// 4000000000
// -10

#include <bits/stdc++.h>

#include <algorithm>
using namespace std;

int main()
{

    int tc;
    cin >> tc;
    while (tc--)
    {
        long long n, B, x, y;
        cin >> n >> B >> x >> y;
        long long sum = 0;
        long long ans = 0;
        for (int i = 1; i <= n; i++)
        {
            if (ans + x <= B)
            {
                sum += (ans + x);
                ans += x;
            }
            else
            {
                sum += (ans - y);
                ans -= y;
            }
        }

        cout << sum << "\n";
    }

    return 0;
}