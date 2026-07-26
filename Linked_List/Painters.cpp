#include <bits/stdc++.h>
using namespace std;

bool canPaint(vector<int>& boards, int k, long long maxTime) {
    int painters = 1;
    long long curr = 0;

    for (int board : boards) {
        if (board > maxTime)
            return false;

        if (curr + board <= maxTime) {
            curr += board;
        } else {
            painters++;
            curr = board;
        }
    }

    return painters <= k;
}

long long paintersPartition(vector<int>& boards, int k) {
    long long low = *max_element(boards.begin(), boards.end());
    long long high = accumulate(boards.begin(), boards.end(), 0LL);

    while (low < high) {
        long long mid = low + (high - low) / 2;

        if (canPaint(boards, k, mid))
            high = mid;
        else
            low = mid + 1;
    }

    return low;
}

int main() {
    vector<int> boards = {10, 20, 30, 40};
    int k = 2;

    cout << paintersPartition(boards, k);
}