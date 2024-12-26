#include <iostream>
#include <vector>
using namespace std;

int findPosition(const vector<int>& nums, int target, bool findFirst) {
    int left = 0, right = nums.size() - 1;
    int result = -1;
    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (nums[mid] == target) {
            result = mid;
            if (findFirst) {
                right = mid - 1;
            } else {
                left = mid + 1;
            }
        } else if (nums[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }
    return result;
}

vector<int> findFirstAndLastPosition(const vector<int>& nums, int target) {
    int firstPos = findPosition(nums, target, true);
    int lastPos = findPosition(nums, target, false);
    return {firstPos, lastPos};
}

int main() {
    vector<int> nums = {5, 7, 7, 8, 8, 10};
    int target = 8;

    vector<int> result = findFirstAndLastPosition(nums, target);
    cout << "First Position: " << result[0] << ", Last Position: " << result[1] << endl;

    return 0;
}
