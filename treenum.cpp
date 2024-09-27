#include <bits/stdc++.h>
using namespace std;
unsigned long long n;
long long a[100], tam, j, i,l;
long long s[100], t[100];

// Hàm cộng hai số lớn s và t, kết quả được lưu vào c
void cong(long long s[], long long t[], long long c[])
{
    long long z[100];
        // thay các giá trị mảng z = 0
    memset(z, 0, sizeof(z));
    long long i, nho;
    nho = 0;
    z[0] = max(s[0], t[0]);
    for (i=1; i<=z[0]; i++)
    {
        nho = s[i] + t[i] + nho; // tính tổng chữ số cùng với nho lần trước
        z[i] = nho % 10; // lưu chữ số cuối cùng của nho vào z
        nho = nho / 10;
    }
    if (nho > 0)
    {
        z[0]++; //tăng giá trị z[0]
        z[z[0]] = nho; // mảng đánh dấu z[z[0]] là giá trị của nho
    }
    for (i = 0; i <= z[0]; i++)
    {
        c[i] = z[i]; //sao chép mảng
    }
}

// Hàm nhân số t cho 3, kết quả được lưu vào c
void nhan3(long long t[], long long c[])
{
    long long z[100];
    // thay các giá trị mảng z = 0
    memset(z, 0, sizeof(z));
    long long i, nho;
    nho = 0;
    z[0] = t[0];
    for (i = 1; i <= z[0]; i++)
    {
        nho = t[i] * 3 + nho;
        z[i] = nho % 10;
        nho = nho / 10;
    }
    while (nho > 0)
    {
        z[0]++;
        z[z[0]] = nho % 10;
        nho = nho / 10;
    }
    while (t[0] > 1 && t[t[0]] == 0)
        z[0]--; // remove 0
    for (i = 0; i <= z[0]; i++)
    {
        c[i] = z[i];
    }
}

int main()
{
    ifstream fin("treenum.inp");
    ofstream fout("treenum.out");
    fin >> tam;
    for ( l = 1; l <= tam; l++)
    {
        fin >> n;
        j = -1;
        do
        {
            j++;
            a[j] = n % 2;
            n = n / 2;
        } while (n > 0);

        // Khởi tạo mảng s và t
        for (i = 1; i <= max(s[0], t[0]); ++i)
            s[i] = t[i] = 0;
        t[0] = 1;
        t[1] = 1;
        s[0] = 0;

        // Thực hiện phép nhân và phép cộng tương ứng
        for (i = 0; i <= j; i++)
        {
            if (a[i] == 1)
                cong(s, t, s);
            nhan3(t, t);
        }

        // Hiển thị kết quả
        for (i = s[0]; i >= 1; i--)
            fout << s[i];
        fout << endl;
    }
}
