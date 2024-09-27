#include <bits/stdc++.h>
using namespace std;
#define ll long long
string a;
string revers(string a){
   bool makeUpper = true;
    ll newIndex = 0; // Biến để theo dõi vị trí mới trong chuỗi sau khi loại bỏ khoảng trắng
    // Nếu bạn gọi newIndex++ khi newIndex đang là 3, nó sẽ tăng newIndex lên thành 4, và giá trị trả về sẽ là 3 (giá trị của newIndex trước khi tăng).
    for (size_t i = 0; i < a.length(); ++i) {
        if (makeUpper && isalpha(a[i])) { // check neu cai bat dau in hoa == true va isalpha ( check no co phai chu cai hay k )
            a[newIndex++] = toupper(a[i]);
            makeUpper = false;
        } else if (a[i] == ' ') {
            makeUpper = true;
        } else if (isalpha(a[i])) {
            a[newIndex++] = a[i];
            makeUpper = false;
        }
    }

    // Chuỗi mới sẽ có độ dài newIndex (sau khi loại bỏ khoảng trắng)
    a.resize(newIndex);

    return a;
}
bool upper=false;
ll i,s,d;
int main()
{
    getline(cin,a);
    cout <<revers(a);

}
