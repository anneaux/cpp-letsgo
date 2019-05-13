#include <iostream>
struct complex;  // Klasse deklarieren, wichtig: mit Semikolon!

struct complex {
  complex() = default;
  complex(float r, float i) : real{r}, imag{i} {}
  float real{};  // geschweifte Klammern bedeuten, dass die Klasse von null
                 // ausgeht
  float imag{};
};

std::ostream& operator<<(std::ostream& os, complex z) {
  return os << z.real << " + " << z.imag << "i";
}  // & ist Referenz auf Stream(statt Kopie)

complex operator+(complex a, complex b) {
  return {a.real + b.real, a.imag + b.imag};
}

complex operator-(complex a, complex b) {
  return {a.real - b.real, a.imag - b.imag};
}

complex operator*(complex a, complex b) {
  return {a.real * b.real - a.imag * b.imag, a.real * b.imag + a.imag * b.real};
}

using namespace std;
int main() {
  {
    complex z1{
        3, 5};  // geschweifte Klammern bedeuten, dass der Datentyp konstruiert
                // wurde
    cout << "z = " << z1 << "\n";
    complex z2{1.666, 2.8};
    cout << "z = " << z2 << "\n";
    cout << "z1 + z2 = " << z1 + z2 << "\n"
         << "z1 - z2 = " << z1 - z2 << "\n"
         << "z1 * z2 = " << z1 * z2 << "\n";
  }
}