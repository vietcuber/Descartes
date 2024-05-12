#include "Header.h"
#include <iostream>
using namespace std;

int main() {
    Descartes A, B;
    cout << "Point A:" << endl;
    A.enter_x_y();
    A.show();
    cout << "Point B:" << endl;
    B.enter_x_y();
    B.show();
    float dist = A.distance(B);
    cout << "The distance between point A and B is: " << dist << endl;

    return 0;
}
