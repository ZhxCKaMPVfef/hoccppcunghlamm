#include <iostream>
using namespace std;

int main() {
    long long int N;
    cin >> N;

    // Tính số lượt chơi
    long long int numberOfThrows = (N + 6) / 7;

    // Tính điểm nhỏ nhất và lớn nhất của B
    long long int minScoreB = numberOfThrows * 2 - (N % 7 == 6);
    long long int maxScoreB = numberOfThrows * 6 - (N % 7 == 1);

    cout << minScoreB << " " << maxScoreB << endl;

    return 0;
}
