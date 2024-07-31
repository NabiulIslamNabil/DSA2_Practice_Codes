#include <bits/stdc++.h>

using namespace std;

int inversionHelper(int arr[], int i, int mid, int j) {
    int n1 = mid - i + 1;
    int n2 = j - mid;

    int left[n1], right[n2];

    for (int x = 0; x < n1; x++) {
        left[x] = arr[x + i];
    }
    for (int x = 0; x < n2; x++) {
        right[x] = arr[mid + x + 1];
    }

    int x = 0, y = 0, k = i, inversions = 0;

    while (x < n1 && y < n2) {
        if (left[x] <= right[y]) {
            arr[k] = left[x];
            x++;
        } else {
            arr[k] = right[y];
            y++;
            inversions += (n1 - x);
        }
        k++;
    }

    while (x < n1) {
        arr[k] = left[x];
        x++;
        k++;
    }
    while (y < n2) {
        arr[k] = right[y];
        y++;
        k++;
    }

    return inversions;
}

int countInversion(int arr[], int i, int j) {
    int inversions = 0;

    if (i < j) {
        int mid = (i + j) / 2;

        inversions += countInversion(arr, i, mid);
        inversions += countInversion(arr, mid + 1, j);
        inversions += inversionHelper(arr, i, mid, j);
    }

    return inversions;
}

int main() {
    int n;
    cin >> n;

    int arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    int inversion = countInversion(arr, 0, n - 1);

    cout << "Number of inversions: " << inversion << endl;

    return 0;
}
