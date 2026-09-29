//
// Created by moham on 21.09.2026.
//

#include <cmath>
#include <iostream>
using namespace std;

void intro()
{
    double a(1.0);
    double b(0.0);
    double c(0.0);
    do
    {
        // ask for a value for a as long as a is null
        cout << "Enter a value for a : " << endl;
        cin >> a;
    } while (a == 0);

    cout << "Enter a value for b : " << endl;
    cin >> b;
    cout << "Enter a value for c : " << endl;
    cin >> c;

    // double delta = b * b - 4.0 * a * c;
    double delta(b * b - 4.0 * a * c);

    if (delta < 0)
    {
        cout << "There is no real solutions" << endl;
    } else if (delta == 0)
    {
        cout << "There is one real solution : " << endl;
        double s = - b / (2.0*a);
    } else
    {
        cout << "There is 2 real solutions : " << endl;
        double s_1 = (- b + sqrt(delta)) / (2.0*a);
        double s_2 = (- b - sqrt(delta)) / (2.0*a);
        cout << s_1 << " and " << s_2 << endl;

    }
}

void exo_3()
{
    cout << "Multiplication tables" << endl;
    for (int i = 2; i <= 10; i++)
    {
        cout << "Table of " << i << " : "<< endl;
        for (int j = 1; j <= 10; j++)
            cout << j << " * " << i << " = " << j * i << endl;
        cout << "##############################"<< endl;
    }
}

void exo_4()
{
       
}

int main() {
    // intro();
    exo_3();
    exo_4();
}
