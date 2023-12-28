#include <iostream>
#include <cmath>
#include <limits>
#include <climits>
using namespace std;
int main() {
    int choice;
    // ��������� ����
    cout << "������� ��������:" << endl;
    cout << "1. SUM" << endl;
    cout << "2. PRODUCT" << endl;
    cout << "3. COUNTODD" << endl;
    cout << "4. Parrot2" << endl;
    cout << "5. MENU2" << endl;
    cout << "6. MAX" << endl;
    cout << "7. Fibonacci.txt" << endl;
    cout << "8. HIT2" << endl;
    cout << "9. Factor.txt" << endl;
    cout << "������ ��������� ����� � �������� ENTER: ";
    cin >> choice;
    switch (choice) {
    case 1: {

        double number, sum = 0;
        cout << "������ ����������� ����� �����. ���� � ������ ����:";
        do {
            cin >> number;
            sum += number;
        } while (number != 0);
        cout << "sum = " << sum << endl;
        break;
    }

    case 2: {

        int number = 1;
        int r = 0;
        int product = 1;
        cout << "������ ����������� ����� �����. ���� � ������ ����: ";
        while (true) {
            cin >> number;
            if (number == 0) {
                break;
            }
            if (number % 2 == 0) {
                product *= number; r++;
            }
        }
        if (r != 0) cout << "������� = " << product << endl;
        else cout << "���� ������ �����" << endl;
        break;
    }

    case 3: {

        int num, oddCount = 0;
        cout << "������ ����������� ����� �����. ���� � ������ ����: " << endl;
        while (true) {
            cin >> num;

            if (num == 0) {
                break;
            }

            if (num % 2 != 0) {
                oddCount++;
            }
        }
        cout << "�������� ����� � �����������: " << oddCount << endl;
        break;
    }

    case 4: {

        char text[1000];
        cout << "������ ����� ������: ";
        cin.ignore(32767, '\n');
        do {
            cin.getline(text, 1000);

            if (text[0] != '\0') {
                cout << "�������� �����: " << text << endl;
                cout << "������ ����� ������: ";
            }
        } while (text[0] != '\0');

        cout << "�������� ���������." << endl;
        break;
    }

    case 5: {

        int number;
        while (true) {
            cout << "������ ������������ ������� ���:\n";
            cout << "1. ������ ���\n";
            cout << "2. ������� �����\n";
            cout << "3. ������!\n";
            cout << "0. �����\n";
            cout << "������ ��������� ����� �� �������� enter: ";
            cin >> number;
            switch (number) {
            case 1:
                cout << "�� ������ ������ ���.\n";
                break;
            case 2:
                cout << "�� ������ ������� �����.\n";
                break;
            case 3:
                cout << "�� ������ ������!\n";
                break;
            case 0:
                cout << "�������� ���������!\n";
                return 0;
            default:
                cout << "������� �����. ���� �����, ��������� �� ���.\n";
                break;
            }
            cout << endl;
        }
        break;
    }

    case 6: {

        int number;
        int maxNumber = INT_MIN; // ��������� �������� ������������� �����
        cout << "������ ����������� ����� �����. ���� � ������ ����:" << endl;
        do {
            cin >> number;
            if (number != 0 && number > maxNumber) {
                maxNumber = number;
            }
        } while (number != 0);
        cout << "max = " << maxNumber << endl;
        break;
    }

    case 7: {
        int n, t;
        int a = 0;
        int b = 1;
        do {
            cout << "������ ����� ����� Գ�������: ";
            cin >> n;
            if (n >= 0) {
                if (n < 2) {
                    if (n == 0) cout << "����� Գ������� � ������� " << 0 << ": " << a << endl;
                    else cout << "����� Գ������� � ������� " << 1 << ": " << b << endl;
                }
                else {
                    int originalA = 0;
                    int originalB = 1;
                    for (int i = 2; i <= n; i++) {
                        int temp = a + b;
                        a = b;
                        b = temp;
                    }
                    cout << "����� Գ������� � ������� " << n << ": " << b << endl;
                    a = originalA;
                    b = originalB;
                }
            }
            else {
                cout << "����� �� ���� �������!" << endl;
            }
        } while (n < 0);
        break;
    }
    case 8: {

        double x0, y0; // ���������� ������ ����
        double r; // ����� ����
        cout << "������ ���������� ������ ���� (x0, y0): ";
        cin >> x0 >> y0;
        cout << "������ ����� ���� r: ";
        cin >> r;
        double x, y; // ���������� ����� a
        do {
            cout << "������ ���������� ����� a (x, y): ";
            cin >> x >> y;

            double distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0)); // ³������ �� ����� �� ������ ����

            if (distance <= r) {
                cout << "����� (" << x << ", " << y << ") ��������� � ���� � ������� � ����� (" << x0 << ", " << y0 << ") ������ " << r << endl;
                break;
            }
            else if (distance < r) {
                cout << "������" << endl;
            }
            else {
                cout << "��������" << endl;
            }
        } while (true);
        break;
    }

    case 9: {

        int subChoice;
        cout << "������� ��� ���������:" << endl;
        cout << "1. FACTOR" << endl;
        cout << "2. FACTOR2" << endl;
        cout << "������ ��������� ����� � �������� ENTER: ";
        cin >> subChoice;

        switch (subChoice) {

        case 1: {
            int n;
            cout << "������ �����: ";
            cin >> n;
            int j = 1;
            for (int i = 1; i < n + 1; i++)j = j * i;
            cout << "�������� ����� " << n << ": " << j << endl;
            break;
        }

        case 2: {
            int N;
            while (true) {
                std::cout << "������ ����� N: ";

                if (!(std::cin >> N) || cin.peek() != '\n') {
                    std::cout << "�������: N ������ ���� ����������� ������, �� ������ � �� ������ ������!" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                else if (N <= 0) {
                    std::cout << "�������: N ������ ���� ������� ������, �� ��'�����!" << std::endl;
                }
                else {
                    // �������� �������� � N
                    std::cout << "������� ��������� ����� N: " << N << std::endl;
                    int j = 1;
                    for (int i = 1; i < N + 1; i++) {
                        j = j * i;
                    }
                    std::cout << "�������� ����� " << N << ": " << j << std::endl;
                    break;
                }
            }

        }
              return 0;
        }
    }
    }
}