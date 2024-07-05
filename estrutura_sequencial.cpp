#include "estrutura_sequencial.h"

namespace estrutura_sequencial {

    float exer1(float n1, float n2, float n3, float n4) {
        return n1 + n2 + n3 + n4;
    }

    float exer2(float n1, float n2, float n3) {
        float sum = n1 + n2 + n3;
        return sum / 3;
    }

    float exer3(const N& n1, const N& n2, const N& n3) {
        float totalNotes = n1.nota * n1.peso + n2.nota * n2.peso + n3.nota * n3.peso;
        float totalWeights = n1.peso + n2.peso + n3.peso;
        return totalNotes / totalWeights;
    }

}