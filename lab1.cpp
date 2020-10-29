#include <iostream>
#include <cmath>

struct wektor
{
    void drukuj_wektor() { std::cout << "Wspolrzedne wektora, x: " << x << " y: " << y << "\n" ; }
    double x;
    double y;
    double norm() const { return sqrt(x*x+y*y);}
};

int main()
{
    puts("Hello, World!");
    wektor r;
    r.x = 1.5;
    r.y = 2.85;
    r.drukuj_wektor();
    std::cout << "Dlugosc wektora:" << r.norm();
}
