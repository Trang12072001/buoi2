#include <iostream>
#include <cmath>
using namespace std;

// Bài tập 1: Nhập vào 3 số thực a, b, c. In ra theo thứ tự tăng dần.
void sortNumbers() {
    float a, b, c;

    cout << "Nhap vao 3 so thuc a, b, c: ";
    cin >> a >> b >> c;

    if (a <= b && a <= c) {
        cout << a << " ";
        if (b <= c) {
            cout << b << " " << c << endl;
        } else {
            cout << c << " " << b << endl;
        }
    } else if (b <= a && b <= c) {
        cout << b << " ";
        if (a <= c) {
            cout << a << " " << c << endl;
        } else {
            cout << c << " " << a << endl;
        }
    } else {
        cout << c << " ";
        if (a <= b) {
            cout << a << " " << b << endl;
        } else {
            cout << b << " " << a << endl;
        }
    }
}

// Bài tập 2: Giải phương trình bậc hai ax^2 + bx + c = 0
void solveQuadraticEquation() {
    float a, b, c;
    cout << "Nhap vao 3 he so a, b, c cua phuong trinh ax^2 + bx + c = 0: ";
    cin >> a >> b >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Phuong trinh co vo so nghiem." << endl;
            } else {
                cout << "Phuong trinh vo nghiem." << endl;
            }
        } else {
            cout << "Phuong trinh co mot nghiem duy nhat: x = " << -c / b << endl;
        }
    } else {
        float delta = b * b - 4 * a * c;
        if (delta > 0) {
            float x1 = (-b + sqrt(delta)) / (2 * a);
            float x2 = (-b - sqrt(delta)) / (2 * a);
            cout << "Phuong trinh co hai nghiem phan biet: x1 = " << x1 << ", x2 = " << x2 << endl;
        } else if (delta == 0) {
            float x = -b / (2 * a);
            cout << "Phuong trinh co nghiem kep: x1 = x2 = " << x << endl;
        } else {
            cout << "Phuong trinh vo nghiem." << endl;
        }
    }
}

// Bài tập 3: Kiểm tra tam giác
void checkTriangle() {
    float a, b, c;

    cout << "Nhap vao 3 so duong a, b, c: ";
    cin >> a >> b >> c;

    if (a + b > c && a + c > b && b + c > a) {
        if (a == b && b == c) {
            cout << "Day la tam giac deu." << endl;
        } else if (a == b || a == c || b == c) {
            cout << "Day la tam giac can." << endl;
        } else if (a * a + b * b == c * c || a * a + c * c == b * b || b * b + c * c == a * a) {
            cout << "Day la tam giac vuong." << endl;
        } else {
            cout << "Day la tam giac thuong." << endl;
        }
    } else {
        cout << "Ba so " << a << ", " << b << ", " << c << " khong phai la do dai cua cac canh cua tam giac." << endl;
    }
}

// Bài tập 4: Tính tiền đi taxi
void calculateTaxiFare() {
    float km;
    cout << "Nhap vao so km da di: ";
    cin >> km;

    float total_cost = 0;

    if (km <= 0) {
        cout << "So km phai lon hon 0." << endl;
    } else if (km <= 1) {
        total_cost = 15000;
    } else if (km <= 5) {
        total_cost = 15000 + (km - 1) * 13500;
    } else if (km <= 120) {
        total_cost = 15000 + 4 * 13500 + (km - 5) * 11000;
    } else {
        total_cost = (15000 + 4 * 13500 + 115 * 11000) * 0.9;
    }

    cout << "Tong so tien phai tra la: " << total_cost << " VND." << endl;
}

// Bài tập 5: Kiểm tra tháng và năm, và cho biết tháng có bao nhiêu ngày
void checkMonthAndYear() {
    int month, year;
    cout << "Nhap vao thang va nam (nam > 1975): ";
    cin >> month >> year;

    if (year <= 1975) {
        cout << "Nam khong hop le." << endl;
    } else if (month < 1 || month > 12) {
        cout << "Thang khong hop le." << endl;
    } else {
        int days;
        switch (month) {
            case 2:
                days = (year % 400 == 0 || (year % 4 == 0 && year % 100 != 0)) ? 29 : 28;
                break;
            case 4: case 6: case 9: case 11:
                days = 30;
                break;
            default:
                days = 31;
                break;
        }

        cout << "Thang " << month << " nam " << year << " co " << days << " ngay." << endl;
    }
}

int main() {
    int choice;
    do {
        cout << "======================================" << endl;
        cout << "Menu: " << endl;
        cout << "1. Bai tap 1: Sap xep 3 so theo thu tu tang dan." << endl;
        cout << "2. Bai tap 2: Giai phuong trinh bac hai." << endl;
        cout << "3. Bai tap 3: Kiem tra tam giac." << endl;
        cout << "4. Bai tap 4: Tinh tien di taxi." << endl;
        cout << "5. Bai tap 5: Kiem tra thang va nam." << endl;
        cout << "0. Thoat chuong trinh." << endl;
        cout << "======================================" << endl;
        cout << "Nhap lua chon cua ban: ";
        cin >> choice;

        switch (choice) {
            case 1:
                sortNumbers();
                break;
            case 2:
                solveQuadraticEquation();
                break;
            case 3:
                checkTriangle();
                break;
            case 4:
                calculateTaxiFare();
                break;
            case 5:
                checkMonthAndYear();
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
