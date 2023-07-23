#include <iostream>
#include <cmath>
using namespace std;

// Bài tập 1: Tìm số nút của số xe
void findDigitsOfCarNumber() {
    int carNumber;
    cout << "Nhap so xe (4 chu so): ";
    cin >> carNumber;

    int digits = 0;
    while (carNumber > 0) {
        digits++;
        carNumber /= 10;
    }

    cout << "So xe cua ban co " << digits << " chu so." << endl;
}

// Bài tập 2: Chuyển ký tự chữ thường thành chữ hoa
void convertToLowercaseToUppercase() {
    char lowercaseChar;
    cout << "Nhap mot ky tu chu thuong: ";
    cin >> lowercaseChar;

    char uppercaseChar = toupper(lowercaseChar);
    cout << "Ky tu chua hoa tuong ung la: " << uppercaseChar << endl;
}

// Bài tập 3: Tìm số lớn nhất và nhỏ nhất
void findMaxAndMin() {
    int a, b, c;
    cout << "Nhap 3 so nguyen: ";
    cin >> a >> b >> c;

    int maxNum = max(max(a, b), c);
    int minNum = min(min(a, b), c);

    cout << "So lon nhat la: " << maxNum << endl;
    cout << "So nho nhat la: " << minNum << endl;
}

// Bài tập 4: Tính giá trị của biểu thức
void calculateExpressions() {
    float x;
    cout << "Nhap so thuc x: ";
    cin >> x;

    float y1 = 4 * (x * x + 10 * x * sqrt(x) + 3 * x + 1);
    float y2 = (sin(x * x) + sqrt(x * x + 1)) / (exp(2 * x) + cos(M_PI / 4 * x));

    cout << "Gia tri cua bieu thuc y1 = 4(x^2 + 10x * sqrt(x) + 3x + 1) la: " << y1 << endl;
    cout << "Gia tri cua bieu thuc y2 = (sin(x^2) + sqrt(x^2 + 1)) / (e^(2x) + cos((pi/4) * x)) la: " << y2 << endl;
}

// Bài tập 5: Thực hiện cộng và trừ hai giờ
struct Time {
    int hour;
    int minute;
    int second;
};

void addTwoTimes() {
    Time time1, time2;
    cout << "Nhap gio, phut, giay cua gio thu nhat: ";
    cin >> time1.hour >> time1.minute >> time1.second;

    cout << "Nhap gio, phut, giay cua gio thu hai: ";
    cin >> time2.hour >> time2.minute >> time2.second;

    int totalSeconds1 = time1.hour * 3600 + time1.minute * 60 + time1.second;
    int totalSeconds2 = time2.hour * 3600 + time2.minute * 60 + time2.second;

    int sumSeconds = totalSeconds1 + totalSeconds2;
    int diffSeconds = abs(totalSeconds1 - totalSeconds2);

    Time sumTime, diffTime;

    sumTime.hour = sumSeconds / 3600;
    sumSeconds %= 3600;
    sumTime.minute = sumSeconds / 60;
    sumTime.second = sumSeconds % 60;

    diffTime.hour = diffSeconds / 3600;
    diffSeconds %= 3600;
    diffTime.minute = diffSeconds / 60;
    diffTime.second = diffSeconds % 60;

    cout << "Tong hai gio la: " << sumTime.hour << " gio " << sumTime.minute << " phut " << sumTime.second << " giay." << endl;
    cout << "Hieu hai gio la: " << diffTime.hour << " gio " << diffTime.minute << " phut " << diffTime.second << " giay." << endl;
}

int main() {
    int choice;
    do {
        cout << "======================================" << endl;
        cout << "Menu: " << endl;
        cout << "1. Bai tap 1: Tim so nut cua so xe." << endl;
        cout << "2. Bai tap 2: Chuyen ky tu chu thuong thanh chu hoa." << endl;
        cout << "3. Bai tap 3: Tim so lon nhat va nho nhat." << endl;
        cout << "4. Bai tap 4: Tinh gia tri cua cac bieu thuc." << endl;
        cout << "5. Bai tap 5: Cong va tru hai gio." << endl;
        cout << "0. Thoat chuong trinh." << endl;
        cout << "======================================" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                findDigitsOfCarNumber();
                break;
            case 2:
                convertToLowercaseToUppercase();
                break;
            case 3:
                findMaxAndMin();
                break;
            case 4:
                calculateExpressions();
                break;
            case 5:
                addTwoTimes();
                break;
            case 0:
                cout << "Ket thuc chuong trinh." << endl;
                break;
            default:
                cout << "Lua chon khong hop le. Vui long chon lai." << endl;
                break;
        }
    } while (choice != 0);

    return 0;
}
