#include <Windows.h>
#include <math.h>
#include <iostream>
#include <fstream>
#include <string>
#include <clocale>
#include <iomanip>
using namespace std;

void checkValidInput()
{
    if (cin.fail())
    {
        throw 2;
    }
}

void checkValidParams(double a, double b) {
    if (a > b) {
        throw 1;
    }
}

void checkValidParams_h(double h) {
    if (h <= 0) {
        throw 1;
    }
}

void checkValidParams_n(double n)
{
    if (n < 4)
    {
        throw 1;
    }
}

void checkValidParams_choose(int choose)
{
    if (choose != 0 && choose != 1)
    {
        throw 1;
    }
}

double calc(double x, double n)
{
    double y;
    if (x < 0) {
        y = 1;
        for (int j = 2; j <= n - 2; j++) {
            y *= j * j;
        }
        return y;
    }
    else if (x >= 0) {
        y = 0;
        for (int i = 0; i <= n - 1; i++) {
            double p = 1;
            for (int j = 0; j <= n - 1; j++) {
                p *= x + i * i + j;
            }
            y += p;
        }
        return y;
    }
}

void print(double a, double b, double h, double n, int choose) {
    ofstream fout("result.txt");
    for (double x = a; x <= b; x += h)
    {
        double y = calc(x, n);
        cout << "x = " << x << ";  y = " << y << '\n';
        if (choose == 1) {
            fout << "x = " << setw(3) <<  x << " y = " << setw(3) << y << '\n';
        }
    }
}


int main()
{
    double a, b, h, n;
    int choose;
    try
    {
        cout << "Input n \n";
        cin >> n;
        checkValidInput();
        checkValidParams_n(n);

        cout << "Input a \n";
        cin >> a;
        checkValidInput();

        cout << "Input b \n";
        cin >> b;
        checkValidInput();
        checkValidParams(a, b);

        cout << "Input h \n";
        cin >> h;
        checkValidInput();
        checkValidParams_h(h);

        cout << "Enter 1, if you want to write the results to a file" << '\n' << "Enter 0, if you don't want to write the results to a file" << '\n';
        cin >> choose;
        checkValidInput();
        checkValidParams_choose(choose);

        print(a, b, h, n, choose);
    }
    catch (int x) {
        if (x == 2) {
            cout << "Incorrect input";
        }
        if (x == 1) {
            cout << "Incorrect data";
        }
        return -1;
    }
    catch (...)
    {
        cout << "Unknown Error" << '\n';
        return -2;
    }
}
