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
    // todo : find intervalle for sin(x) - x/2^0
    if (x < 1 || x == 0)
    {
        cout << "Expression 4 is not defined for the value " << x << endl;
    }
    else
    {
        double result_3 = sqrt((sin(x)- x / 20) * log(sqrt(pow(x,2) - (1/x))));
        cout << "The forth expression value is " << result_3 << endl;
    }
}

void exo_6() {
    // todo : create a function doing this computation
    // todo : compute epsilon value depending on the ball material and the ground type (hard, soft, ...)
    // todo : compute the energy at each impact and max height reached
    // epsilon indicate the amount of energy lost at each impact with the ground
    // compute the ball height after n bounces
    // if a ball falls form a height h_0, its speed when reaching the ground is
    // m * g * h = 1/2 * m * v^2 -> v = sqrt(2 * g * h)
    int n = 10;
    double h_0 = 25;
    double g = 9.81;
    double epsilon = 0.9; // this coefficient depends on the material of the ball and the ground

    double v_0 = sqrt(2 * g * h_0);
    // state of the ball after bounced up
    cout << "The ball is falling from an initial height of "<< h_0 << " m and will reach the ground with a speed of " << v_0 << " m/s." << endl;
    cout << "#######################################################################################################" << endl;

    double v_1 = v_0;
    double h_1 = h_0;

    for (int i = 1; i <= n; i++) {
        v_1 = v_0 * epsilon;
        cout << "Bounce " << i << " : the speed is " << v_1 << " m/s." << endl;
        h_1 = pow(v_1, 2) / (2 * g);
        cout << "Bounce " << i << " : the ball reached a height of " << h_1 << " m." << endl;
        v_0 = sqrt(2 * g * h_1);
        cout << "Bounce " << i << " : the ball is falling and will reach the ground with a speed of " << v_1 << " m/s." << endl;
        cout << "#######################################################################################################" << endl;
    }
    // after bouncing, the speed is v_1 = epsilon * v_0
    // the ball will reach height h_1
}

void exo_7() {
    // same as exo 6 : compute the number of bounces before the ball height is low or equal to h_final
    int n = 10;
    double h_0 = 25;
    double h_final = 1;
    double g = 9.81;
    double epsilon = 0.9; // this coefficient depends on the material of the ball and the ground

    double v_0 = sqrt(2 * g * h_0);
    double v_1 = v_0;
    double h_1 = h_0;
    int i = 0;
    do
    {
        i += 1;
        v_1 = v_0 * epsilon;
        cout << "Bounce " << i << " : the speed is " << v_1 << " m/s." << endl;
        h_1 = pow(v_1, 2) / (2 * g);
        cout << "Bounce " << i << " : the ball reached a height of " << h_1 << " m." << endl;
        v_0 = sqrt(2 * g * h_1);
        cout << "Bounce " << i << " : the ball is falling and will reach the ground with a speed of " << v_1 << " m/s." << endl;
        cout << "#######################################################################################################" << endl;
    } while (h_1 > h_final);
    cout << "The ball did " << i << " bounces before reaching a height of " << h_1 << " m, lower than the height limit of "<< h_final << " m."<< endl;

}

void exo_8() {
    // example : buying a car with leasing
    double ir = 0.01; // ribaa
    double s_0 = 30100; // total money amount
    double r = 1200; // fixed amount paid back each month
    do
    {
        // ask for a value for a as long as a is null
        cout << "Enter the total amount : " << endl;
        cin >> s_0;
    } while (s_0 <= 0);

    do
    {
        // ask for a value for a as long as a is null
        cout << "Enter the amount to be paid each month: " << endl;
        cin >> r;
    } while (r <= 0);

    do
    {
        // ask for a value for a as long as a is null
        cout << "Enter the interest rate : " << endl;
        cin >> ir;
    } while (ir <= 0 || ir >= 1);


    double s = s_0;
    double total_interest = 0;
    double total_cost = 0;

    // compute the total interest gained by the bank after the total amount was paid back.
    // compute the total amount paid by the person


    // the loop starts here
    // todo : use do while loop
    //  compare s to r : if s < r, if is the last month, compute the cost and stop the iteration at that point.
    int i = 0;
    do {
        i += 1;
        // the person must pay these each month
        double interest = s * ir; // money paid because of interest.
        total_interest += interest;
        // new amount that must be paid
        s -= r;
        cout << "Remaining amount " << s << " Euros." << endl;
        // total amount paid by the person
        total_cost += r;
        total_cost += interest;
    }
    while (s > 0);
    cout << "The person paid the amount back after " << i << " months. In total, it costed him " << total_cost << " Euros." << endl;
    cout << "The person paid " << total_cost - s_0 << " Euros more than the initial amount." << endl;
    cout << "The bank gained from the interest " << total_interest << " Euros."<< endl;

}

int main() {
    // intro();
    // exo_3();
    // exo_4();
    // exo_5();
    // exo_6();
    // exo_7();
    exo_8();
}
