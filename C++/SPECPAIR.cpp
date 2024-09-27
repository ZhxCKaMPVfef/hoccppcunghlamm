#include <iostream>
#include <unordered_map>
using namespace std;

int countSpecialPairs(int arr[], int n) {
    unordered_map<int, int> frequency; // Map lưu trữ tần suất xuất hiện của từng chữ số

    int countPairs = 0; // Biến đếm số cặp chỉ số thỏa mãn điều kiện

    for (int i = 0; i < n; ++i) {
        int num = arr[i];

        int digit = num % 10; // Lấy chữ số cuối cùng của số hiện tại

        // Đếm số cặp chỉ số thỏa mãn điều kiện
        countPairs += frequency[num - digit];

        // Tăng tần suất xuất hiện của chữ số cuối cùng
        frequency[digit]++;
    }

    return countPairs;
}

int main() {
    int n;
    cin >> n;

    int arr[n];
    for (int i = 0; i < n; ++i) {
        cin >> arr[i];
    }

    int result = countSpecialPairs(arr, n);
    cout << result << endl;

    return 0;
}
