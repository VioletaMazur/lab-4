#include <iostream>
#include <cmath>
#include <limits>
#include <climits>
using namespace std;
int main() {
    int choice;
    // Виведення меню
    cout << "Виберіть завдання:" << endl;
    cout << "1. SUM" << endl;
    cout << "2. PRODUCT" << endl;
    cout << "3. COUNTODD" << endl;
    cout << "4. Parrot2" << endl;
    cout << "5. MENU2" << endl;
    cout << "6. MAX" << endl;
    cout << "7. Fibonacci.txt" << endl;
    cout << "8. HIT2" << endl;
    cout << "9. Factor.txt" << endl;
    cout << "Введіть відповідний номер і натисніть ENTER: ";
    cin >> choice;
    switch (choice) {
    case 1: {

        double number, sum = 0;
        cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця:";
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
        cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця: ";
        while (true) {
            cin >> number;
            if (number == 0) {
                break;
            }
            if (number % 2 == 0) {
                product *= number; r++;
            }
        }
        if (r != 0) cout << "ДОБУТОК = " << product << endl;
        else cout << "Нема парних чисел" << endl;
        break;
    }

    case 3: {

        int num, oddCount = 0;
        cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця: " << endl;
        while (true) {
            cin >> num;

            if (num == 0) {
                break;
            }

            if (num % 2 != 0) {
                oddCount++;
            }
        }
        cout << "Непарних чисел у послідовності: " << oddCount << endl;
        break;
    }

    case 4: {

        char text[1000];
        cout << "Введіть рядок тексту: ";
        cin.ignore(32767, '\n');
        do {
            cin.getline(text, 1000);

            if (text[0] != '\0') {
                cout << "Введений рядок: " << text << endl;
                cout << "Введіть рядок тексту: ";
            }
        } while (text[0] != '\0');

        cout << "Програма завершена." << endl;
        break;
    }

    case 5: {

        int number;
        while (true) {
            cout << "Працює інформаційна система ФПМ:\n";
            cout << "1. Новини дня\n";
            cout << "2. Анекдот тижня\n";
            cout << "3. Автора!\n";
            cout << "0. Вихід\n";
            cout << "Введіть відповідний номер та натисніть enter: ";
            cin >> number;
            switch (number) {
            case 1:
                cout << "Ви обрали Новини дня.\n";
                break;
            case 2:
                cout << "Ви обрали Анекдот тижня.\n";
                break;
            case 3:
                cout << "Ви обрали Автора!\n";
                break;
            case 0:
                cout << "Програма завершена!\n";
                return 0;
            default:
                cout << "Невірний номер. Будь ласка, спробуйте ще раз.\n";
                break;
            }
            cout << endl;
        }
        break;
    }

    case 6: {

        int number;
        int maxNumber = INT_MIN; // початкове значення максимального числа
        cout << "Введіть послідовність цілих чисел. Нуль – ознака кінця:" << endl;
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
            cout << "Введіть номер числа Фібоначчі: ";
            cin >> n;
            if (n >= 0) {
                if (n < 2) {
                    if (n == 0) cout << "Число Фібоначчі з номером " << 0 << ": " << a << endl;
                    else cout << "Число Фібоначчі з номером " << 1 << ": " << b << endl;
                }
                else {
                    int originalA = 0;
                    int originalB = 1;
                    for (int i = 2; i <= n; i++) {
                        int temp = a + b;
                        a = b;
                        b = temp;
                    }
                    cout << "Число Фібоначчі з номером " << n << ": " << b << endl;
                    a = originalA;
                    b = originalB;
                }
            }
            else {
                cout << "Число має бути додатне!" << endl;
            }
        } while (n < 0);
        break;
    }
    case 8: {

        double x0, y0; // Координати центра кола
        double r; // Радіус кола
        cout << "Введіть координати центра кола (x0, y0): ";
        cin >> x0 >> y0;
        cout << "Введіть радіус кола r: ";
        cin >> r;
        double x, y; // Координати точки a
        do {
            cout << "Введіть координати точки a (x, y): ";
            cin >> x >> y;

            double distance = sqrt((x - x0) * (x - x0) + (y - y0) * (y - y0)); // Відстань від точки до центра кола

            if (distance <= r) {
                cout << "Точка (" << x << ", " << y << ") потрапила в коло з центром у точці (" << x0 << ", " << y0 << ") радіуса " << r << endl;
                break;
            }
            else if (distance < r) {
                cout << "Тепліше" << endl;
            }
            else {
                cout << "Холодніше" << endl;
            }
        } while (true);
        break;
    }

    case 9: {

        int subChoice;
        cout << "Виберіть тип факторіалу:" << endl;
        cout << "1. FACTOR" << endl;
        cout << "2. FACTOR2" << endl;
        cout << "Введіть відповідний номер і натисніть ENTER: ";
        cin >> subChoice;

        switch (subChoice) {

        case 1: {
            int n;
            cout << "Введіть число: ";
            cin >> n;
            int j = 1;
            for (int i = 1; i < n + 1; i++)j = j * i;
            cout << "Факторіал числа " << n << ": " << j << endl;
            break;
        }

        case 2: {
            int N;
            while (true) {
                std::cout << "Введіть число N: ";

                if (!(std::cin >> N) || cin.peek() != '\n') {
                    std::cout << "Помилка: N мусить бути натуральним числом, не рядком і не дійсним числом!" << std::endl;
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                }
                else if (N <= 0) {
                    std::cout << "Помилка: N мусить бути додатнім числом, не від'ємним!" << std::endl;
                }
                else {
                    // Виконати операції з N
                    std::cout << "Введено правильне число N: " << N << std::endl;
                    int j = 1;
                    for (int i = 1; i < N + 1; i++) {
                        j = j * i;
                    }
                    std::cout << "Факторіал числа " << N << ": " << j << std::endl;
                    break;
                }
            }

        }
              return 0;
        }
    }
    }
}