#include "Triangle.h"
#include "iostream"

void Triangle::print_infoT() {
    std::cout << "�������:" << "\t" << "a = " << a << ", b = " << b << ", c = " << c << std::endl;
    std::cout << "����:" << "\t\t" << "A = " << A << ", B = " << B << ", C = " << C << "\n\n";
};
Triangle::Triangle() {};
Triangle::Triangle(unsigned int T_a, unsigned int T_b, unsigned int T_c, 
    unsigned int T_A, unsigned int T_B, unsigned int T_C) { a = T_a; b = T_b; c = T_c; A = T_A; B = T_B; C = T_C; };
void Triangle::print_T() { std::cout << "�����������: " << std::endl; print_infoT(); };