#include <iostream>
#include <string>
using namespace std;

// Hàm thực hiện phép cộng hai chuỗi nhị phân và trả về tổng số lần nhớ
long long addBinary(string a, string b) {
    long long total = 0;  // Tổng số lần nhớ
    int carry = 0;  // Biến nhớ của phép cộng
    int i = a.size() - 1;  // Chỉ số của ký tự cuối cùng trong chuỗi a
    int j = b.size() - 1;  // Chỉ số của ký tự cuối cùng trong chuỗi b

    // Duyệt qua từng cặp bit tương ứng của a và b cùng với giá trị carry
    while (i >= 0 || j >= 0 || carry > 0) {
        int sum = carry;

        // Nếu còn bit trong chuỗi a, thêm vào sum
        if (i >= 0) {
            sum += a[i--] - '0';
        }

        // Nếu còn bit trong chuỗi b, thêm vào sum
        if (j >= 0) {
            sum += b[j--] - '0';
        }

        // Lưu phần dư của sum khi chia cho 2 vào kết quả
        // và cập nhật giá trị carry cho lần lặp tiếp theo
        total += sum % 2;
        carry = sum / 2;
    }

    // Trả về tổng số lần nhớ
    return total;
}
int main() {
    string a;
    string b;
    getline(cin, a);
    getline(cin, b);
    long long result = addBinary(a, b);

    cout <<result << endl;

    return 0;
}
