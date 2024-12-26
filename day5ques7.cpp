#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, target;

    cout << "Enter the number of elements in the array: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    cout << "Enter the number to search: ";
    cin >> target;

    bool found = false;
    for (int i = 0; i < n; i++) {
        if (arr[i] == target) {
            cout << "Number " << target << " found at position " << i + 1 << "." << endl;
            found = true;
            break;
        }
    }

    if (!found) {
        cout << "Number " << target << " not found in the array." << endl;
    }

    return 0;
}
