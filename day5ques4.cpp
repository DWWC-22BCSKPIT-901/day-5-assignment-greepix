#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

pair<int, int> closestPairSumToZero(vector<int>& arr) {
    if (arr.size() < 2) {
        return {0, 0}; 
    }

    sort(arr.begin(), arr.end());

    int left = 0, right = arr.size() - 1;
    int closestSum = INT_MAX;
    pair<int, int> closestPair;

    while (left < right) {
        int sum = arr[left] + arr[right];

        if (abs(sum) < abs(closestSum)) {
            closestSum = sum;
            closestPair = {arr[left], arr[right]};
        }
        if (sum < 0) {
            left++; 
        } else {
            right--; 
        }
    }

    return closestPair;
}

int main() {
    vector<int> arr = {1, 60, -10, 70, -80, 85};
    pair<int, int> result = closestPairSumToZero(arr);

    cout << "The pair closest to zero sum is: (" << result.first << ", " << result.second << ")" << endl;
    return 0;
}
