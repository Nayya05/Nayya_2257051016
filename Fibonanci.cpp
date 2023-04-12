#include <iostream>
#include <cstring>

using namespace std;

struct Fibonacci {
    int first;
    int second;
};

void printFibonacci(int n) {
    Fibonacci* fib = new Fibonacci[n];

    fib[0].first = 0;
    fib[1].first = 1;
    fib[0].second = fib[1].second = 1;

    for (int i = 2; i < n; i++) {
        fib[i].first = fib[i - 1].first + fib[i - 2].first;
        fib[i].second = fib[i - 1].second + fib[i - 2].second;
    }

    cout << "Deret Fibonacci:\n";

    for (int i = 0; i < n; i++) {
        cout << fib[i].first << " ";
    }

    cout << endl << endl << "Deret bilangan yang mengandung digit '1' pada deret Fibonacci:\n";

    for (int i = 0; i < n; i++) {
        char str[10];
        sprintf(str, "%d", fib[i].first);

        if (strstr(str, "1")) {
            cout << fib[i].first << " ";
        }
    }

    delete[] fib;
}

int main() {
    int n;

    cout << "Masukkan jumlah bilangan dalam deret Fibonacci yang ingin ditampilkan: ";
    cin >> n;

    printFibonacci(n);

    return 0;
}
