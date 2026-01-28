#include <iostream>
using namespace std;

int main() {
    int arr[5] = {5, 1, 3, 2, 4};
    int min_indx;

    for (int i = 0; i < 5 - 1; i++) {
        min_indx = i;
        for (int j = i + 1; j < 5; j++) {
            if (arr[j] < arr[min_indx]) {
                min_indx = j;
            }
        }
        int temp = arr[min_indx];
        arr[min_indx] = arr[i];
        arr[i] = temp;
    }
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}
