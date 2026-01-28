vector<int> findindicesfirstandlastoccurrence(const vector<int>& arr, int target) {
    vector<int> result(2, -1); // Initialize result with -1 for both first and last occurrence
    int left = 0;
    int right = arr.size() - 1;

    
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result[0] = mid; // Update first occurrence
            right = mid - 1; // Continue searching in the left half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    left = 0;
    right = arr.size() - 1;

    // Find last occurrence
    while (left <= right) {
        int mid = left + (right - left) / 2;
        if (arr[mid] == target) {
            result[1] = mid; // Update last occurrence
            left = mid + 1; // Continue searching in the right half
        } else if (arr[mid] < target) {
            left = mid + 1;
        } else {
            right = mid - 1;
        }
    }

    return result;
}