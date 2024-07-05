#ifndef ESTRUTURA_SEQUENCIAL_H
#define ESTRUTURA_SEQUENCIAL_H

namespace estrutura_sequencial {

    struct N {
        float nota;
        float peso;
    };

    class estrutura_sequencial {
    public:
        estrutura_sequencial() {

        }
        ~estrutura_sequencial() {

        }

        float exer1(float n1, float n2, float n3, float n4);
        float exer2(float n1, float n2, float n3);
        float exer3(const N& n1, const N& n2, const N& n3);
        float exer4();
    };

}

#endif