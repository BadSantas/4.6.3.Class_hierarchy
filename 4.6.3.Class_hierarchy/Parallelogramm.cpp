#include "Parallelogramm.h"
Parallelogramm::Parallelogramm(unsigned int RQ_a, unsigned int RQ_b, unsigned int RQ_c, unsigned int RQ_d, 
    unsigned int RQ_A, unsigned int RQ_B, unsigned int RQ_C, unsigned int RQ_D) : Quadraangle() {
    if (((RQ_a == RQ_c) && (RQ_b == RQ_d)) && ((RQ_A == RQ_C) && (RQ_B == RQ_D))) {
        a = RQ_a, b = RQ_b, c = RQ_c, d = RQ_d, A = RQ_A, B = RQ_B, C = RQ_C, D = RQ_D;
    }
    else { std::cout << "������������ ��������� ��� ���������������!" << std::endl; }
};

void Parallelogramm::print_PQ() {
    std::cout << "�������������� : " << std::endl;
    print_infoQ();
}