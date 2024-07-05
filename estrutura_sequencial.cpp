#include "estrutura_sequencial.h"

#include <iostream>

namespace estrutura_sequencial {

    float estrutura_sequencial::exer1(float const n1, float const n2, float const n3, float const n4) {
        return n1 + n2 + n3 + n4;
    }

    float estrutura_sequencial::exer2(float const n1, float const n2, float const n3) {
        float const sum = n1 + n2 + n3;
        return sum / 3;
    }

    float estrutura_sequencial::exer3(const N& n1, const N& n2, const N& n3) {
        float const totalNotes = n1.nota * n1.peso + n2.nota * n2.peso + n3.nota * n3.peso;
        float const totalWeights = n1.peso + n2.peso + n3.peso;
        return totalNotes / totalWeights;
    }
    float estrutura_sequencial::exer4(float sal) {
        sal = sal*1.25;
        return sal;

    }
    float estrutura_sequencial::exer5(float const sal, float const perc) {
        std::cout<<sal*perc<<std::endl;
        float aumen = sal*perc - sal;
        return aumen;
    }



}
