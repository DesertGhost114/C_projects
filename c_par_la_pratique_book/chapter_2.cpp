//
// Created by moham on 21.09.2026.
//

#include <cmath>
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

void intro()
{
    // todo : convert this to functions and move it to utils.cpp
    //  a, b and c become inputs
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

    double delta = b * b - 4.0 * a * c;
    // double delta(b * b - 4.0 * a * c);

    if (delta < 0)    {
        cout << "There is no real solutions, but 2 compexe ones : " << endl;
        double real = - b / (2.0 * a);
        double complexe = sqrt(abs(delta)) / (2.0 * a);
        std::string c_1 = std::to_string(real) + " + i * " + std::to_string(complexe);
        std::string c_2;
        c_2 = std::to_string(real) + " - i * " + std::to_string(complexe);
        cout << c_1 << " and " << c_2 << endl;
    }
    else if (delta == 0)    {
        double s = - b / (2.0*a);
        cout << "There is one real solution : " << s << endl;

    } else    {
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
    double user_input;
    cout << "Enter a real value: ";
    cin >> user_input;
    if ((user_input > 0 && user_input <= 1) || (user_input >= 2 && user_input < 3) || (user_input >= -10 && user_input <= -2)) {
        cout << user_input << " is included in I" << endl;
    }
    else    {
        cout << user_input << " is not included in I" << endl;
    }
}

void exo_5()
{
    double x;
    cout << "Enter a real value: ";
    cin >> x;

    // Expression 1
    if (x == 0)
    {
        cout << "Expression 1 is not defined for the value " << x << endl;
    } else
    {
        double result_1 = x / (1 - exp(x));
        cout << "The first expression value is " << result_1 << endl;
    }

    // Expression 2
    if (x <= 0 || x == 1)
    {
        cout << "Expression 2 is not defined for the value " << x << endl;
    }
    
    else
    {
        double result_2 = x * log(x) * exp(2/ (x-1));
        cout << "The second expression value is " << result_2 << endl;

    }

    // Expression 3
    if (x < 8 || x == 2)
    {
        cout << "Expression 3 is not defined for the value " << x << endl;
    }
    else
    {
        double result_3 = (-x - sqrt(pow(x, 2) - 8 * x)) / (2 - x) ;
        cout << "The third expression value is " << result_3 << endl;
    }

    // Expression 4
    if (x < 1 || x == 0)
    {
        cout << "Expression 4 is not defined for the value " << x << endl;
    }
    else
    {
        double result_3 = sqrt((sin(x)- x /20) * log(sqrt(x*x-(1/x))));
        cout << "The forth expression value is " << result_3 << endl;
    }
}

int main() {
    // intro();
    // exo_3();
    // exo_4();
    exo_5();
}
