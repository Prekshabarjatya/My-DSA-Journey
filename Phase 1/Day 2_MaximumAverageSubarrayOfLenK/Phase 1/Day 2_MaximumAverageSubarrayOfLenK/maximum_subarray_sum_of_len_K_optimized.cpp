#include <bits/stdc++.h>
using namespace std;

int maximumSumSubarray(vector<int>& arr, int k) {
    int sum = 0;
    int max = 0;
    for(int i = 0; i < k; i++) {
        sum += arr[i];
    }
    max = sum;
    for(int i = 1; i <= arr.size() - k; i++) {
        sum -= arr[i - 1];
        sum += arr[i + k - 1];
        if(sum>max)max=sum;
    }
    return max;
}

int main() {
    vector<int> arr = {1, 3, 2, 6, -1, 4, 1, 8, 2};
    int k = 5;
    maximumSumSubarray(arr, k);
    return 0;
}
