//
// Created by moham on 20.09.2026.
//

/*
multi line comment
 */


#include <iostream>
using namespace std;


void intro() {
 int i;

 double p(3.14);

 double j(7.6);

 int k(6);

 int l = k+3;

 double temperature;
 double temperature_user;

 temperature = 22.6;

 cout << "Let's start!" << endl;

 cout << "Please enter the estimated room temperature :" << endl;
 cin >> temperature_user;
 if (temperature_user == temperature) {
  cout << "You guessed correctly. The room temperature is indeed "<< temperature << " degrees (°C)." << endl;
 }
 else {
  cout << "Current room temperature is "<< temperature << " degrees (°C)." << endl;
  cout << "You thought it was "<< temperature_user << " degrees (°C)." << endl;
 }

}

void exo_1() {
 // Exo 1
 int age;

 cout << "Please enter your age :" << endl;
 cin >> age;
 int birth_year = 2026 - age;
 cout << "You were born in "<< birth_year << " ." << endl;

}

void exo_2() {
 // Exo 2
 int x,y;
 double a,b,c, d;
 x=2;
 y=4;
 a = x + y;
 b = x - y;
 c = x * y;
 d = x / y;
 cout << "a: " << a << "b: " << b << "c: " << c << "d: " << d << endl;
}

int main() {
 intro();
 exo_1();
 exo_2();
}
