#include <iostream>
#include <climits>

struct Pair {
    int min;
    int max;
};

Pair maxmin(int arr[], int i, int j) {
    Pair result;
    if (i == j) {
        result.max = arr[i];
        result.min = arr[i];
        return result;
    }
    
    if (i == j - 1) {
        if (arr[i] < arr[j]) {
            result.min = arr[i];
            result.max = arr[j];
        } else {
            result.max = arr[i];
            result.min = arr[j];
        }
        return result;
    }
    int mid = (i + j) / 2;
    
    Pair left = maxmin(arr, i, mid);
    Pair right = maxmin(arr, mid + 1, j);
    result.min = (left.min < right.min) ? left.min : right.min;
    result.max = (left.max > right.max) ? left.max : right.max;

    return result;
}

int main() {
    int arr[] = {1, 3, 5, 2, 4, 8, 7, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    Pair result = maxmin(arr, 0, n - 1);
    std::cout << "Minimum: " << result.min << std::endl;
    std::cout << "Maximum: " << result.max << std::endl;
    return 0;
}
