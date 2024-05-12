#pragma once

class Descartes {
private:
    float abscissa, ordinate;
public:
    // Function prototypes
    void enter_x_y();
    void show();
    float get_x();
    void set_x(float x);
    float get_y();
    void set_y(float y);
    void set_x_y(float x, float y);
    void get_x_y(float& x, float& y);
    float distance(Descartes B);
};
