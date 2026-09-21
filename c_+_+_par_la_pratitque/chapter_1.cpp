//
// Created by moham on 20.09.2026.
//

/*
multi line comment
 */


#include <iostream>
using namespace std;

int i;

double x(3.14);

double j(7.6);

int k(6);

int l = k+3;


int main() {
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