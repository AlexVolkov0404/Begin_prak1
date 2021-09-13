// Begin_prak1.cpp : Этот файл содержит функцию "main". Здесь начинается и заканчивается выполнение программы.
//

#include <iostream>
#include <cmath>
using namespace std;
//task12
void find_perimetr_and_third_side()
{
    double a, b, c;
    cout << "task12" << endl;
    cout << "enter first side:";
    cin >> a;
    cout << "enter second side:";
    cin >> b;
    c = sqrt(pow(a, 2) + pow(b, 2));

    double P;
    P = a + b + c; ;
    cout << "Your perimetr is " << P;
    cout << endl;
    cout << "Your third side is " << c;
    cin.get();
    cin.get();

}
//task16
void find_lenth()
{
    cout << "task16" << endl;
    int x1, x2, l;
    cout << "x1= ";
    cin >> x1;
    cout << "x2= ";
    cin >> x2;
    l = abs(x2 - x1);
    cout << "l= " << l << endl;
    cin.get();
    cin.get();

}
//task23
void exchange_your_numbers()
{
    int A, B, C, x;
    cout << "task23" << endl;
    cout << "enter A: ";
    cin >> A;
    cout << "enter B: ";
    cin >> B;
    cout << "enter C: ";
    cin >> C;
    x = A;
    A = C;
    cout << "A= " << A << endl;

    C = B;
    cout << "C= " << C << endl;

    B = x;
    cout << "B= " << B << endl;
    cin.get();
    cin.get();
}
//task26
void find_your_Y()
{
    double x, y;
    cout << "task26" << endl;
    cout << "x= ";
    cin >> x;
    y = 4 * pow((x - 3), 6) - 7 * pow((x - 3), 3) + 2;
    cout << "y= " << y << endl;
    cin.get();
    cin.get();
}
//task 28
void find_A_15()
{
    int A, x, y;
    cout << "task28" << endl;
    cout << "A= ";
    cin >> A;
    x = A * A;
    cout << "A^2= " << x << endl;
    y = x * A;
    cout << "A^3= " << y << endl;
    x = x * y;
    cout << "A^5= " << x << endl;
    y = x * x;
    cout << "A^10= " << y << endl;
    x = x * y;
    cout << "A^15= " << x << endl;
    cin.get();
    cin.get();
}
int main()
{
    find_perimetr_and_third_side();//task12
    find_lenth();//task16
    exchange_your_numbers();//task23
    find_your_Y();//task26
    find_A_15();//task28
    return 0;
}