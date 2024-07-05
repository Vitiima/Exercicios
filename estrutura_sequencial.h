#ifndef ESTRUTURA_SEQUENCIAL_H
#define ESTRUTURA_SEQUENCIAL_H

namespace estrutura_sequencial {

    struct N {
        float nota;
        float peso;
    };
    struct func {
        float sal;
        float im;
        float imp = im/100;
        float grat;
    };

    class estrutura_sequencial {
    public:
        estrutura_sequencial() = default;
        ~estrutura_sequencial() = default;

        float static exer1(float n1, float n2, float n3, float n4);
        float static exer2(float n1, float n2, float n3);
        float static exer3(const N& n1, const N& n2, const N& n3);
        float static exer4(float sal);
        float static exer5(float sal, float perc);
        float static exer6(float sal, float grat, float imp);
        float static exer7(func& f);
    };

}

#endif