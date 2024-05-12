#include "Header.h"
#include <cmath>
#include <iostream>

using namespace std;

// Function definitions

void Descartes::enter_x_y() {
    cout << "Enter the value of abscissa: ";
    cin >> abscissa;
    cout << "Enter the value of ordinate: ";
    cin >> ordinate;
}

void Descartes::show() {
    cout << "Position: (" << abscissa << "; " << ordinate << ")" << endl;
}

float Descartes::get_x() {
    return abscissa;
}

void Descartes::set_x(float x) {
    abscissa = x;
}

float Descartes::get_y() {
    return ordinate;
}

void Descartes::set_y(float y) {
    ordinate = y;
}

void Descartes::set_x_y(float x, float y) {
    abscissa = x;
    ordinate = y;
}

void Descartes::get_x_y(float& x, float& y) {
    x = abscissa;
    y = ordinate;
}

float Descartes::distance(Descartes B) {
    return sqrt(pow(abscissa - B.abscissa, 2) + pow(ordinate - B.ordinate, 2));
}
