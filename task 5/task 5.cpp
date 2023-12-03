// task 5.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <vector>
#include <cmath>
using namespace std;

double max_abs_element(vector<double>& arr) {
    double max_abs = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (abs(arr[i]) > max_abs) {
            max_abs = abs(arr[i]);
        }
    }
    return max_abs;
}

double sum_between_positive(vector<double>& arr) {
    int first_positive = -1;
    int second_positive = -1;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] > 0) {
            if (first_positive == -1) {
                first_positive = i;
            }
            else if (second_positive == -1) {
                second_positive = i;
                break;
            }
        }
    }
    double sum = 0;
    if (first_positive != -1 && second_positive != -1) {
        for (int i = first_positive + 1; i < second_positive; i++) {
            sum += arr[i];
        }
    }
    return sum;
}

void rearrange_zeroes(vector<double>& arr) {
    int j = 0;
    for (int i = 0; i < arr.size(); i++) {
        if (arr[i] != 0) {
            arr[j++] = arr[i];
        }
    }
    while (j < arr.size()) {
        arr[j++] = 0;
    }
}

int main() {
    vector<double> arr = { 0, -2.5, 5.1, -2, -1.2, 2.4, 0, -3.7, -4.2, 0 };
    cout << "Max element by module: " << max_abs_element(arr) << endl;
    cout << "the sum of elements that are located between the first and second positive number: " << sum_between_positive(arr) << endl;
    rearrange_zeroes(arr);
    cout << "Array after chanched: ";
    for (int i = 0; i < arr.size(); i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}


// Запуск программы: CTRL+F5 или меню "Отладка" > "Запуск без отладки"
// Отладка программы: F5 или меню "Отладка" > "Запустить отладку"

// Советы по началу работы 
//   1. В окне обозревателя решений можно добавлять файлы и управлять ими.
//   2. В окне Team Explorer можно подключиться к системе управления версиями.
//   3. В окне "Выходные данные" можно просматривать выходные данные сборки и другие сообщения.
//   4. В окне "Список ошибок" можно просматривать ошибки.
//   5. Последовательно выберите пункты меню "Проект" > "Добавить новый элемент", чтобы создать файлы кода, или "Проект" > "Добавить существующий элемент", чтобы добавить в проект существующие файлы кода.
//   6. Чтобы снова открыть этот проект позже, выберите пункты меню "Файл" > "Открыть" > "Проект" и выберите SLN-файл.
