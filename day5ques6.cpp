#include <iostream>
#include <vector>
#include <algorithm>
#include <climits>
using namespace std;

double findMedianSortedArrays(const vector<int>& nums1, const vector<int>& nums2) {
    vector<int> merged(nums1.size() + nums2.size());
    merge(nums1.begin(), nums1.end(), nums2.begin(), nums2.end(), merged.begin());

    int n = merged.size();
    if (n % 2 == 0) {
        return (merged[n / 2 - 1] + merged[n / 2]) / 2.0;
    } else {
        return merged[n / 2];
    }
}

int main() {
    int n1, n2;
    cout << "Enter the number of elements in the first array: ";
    cin >> n1;

    vector<int> nums1(n1);
    cout << "Enter the elements of the first sorted array: ";
    for (int i = 0; i < n1; i++) {
        cin >> nums1[i];
    }

    cout << "Enter the number of elements in the second array: ";
    cin >> n2;

    vector<int> nums2(n2);
    cout << "Enter the elements of the second sorted array: ";
    for (int i = 0; i < n2; i++) {
        cin >> nums2[i];
    }

    double median = findMedianSortedArrays(nums1, nums2);
    cout << "Median: " << median << endl;

    return 0;
}
