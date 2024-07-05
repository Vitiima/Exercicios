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
    float estrutura_sequencial::exer6(float sal, float grat, float imp) {
        sal = 1000;
        float salfree = sal+sal*(grat/100);
        float salliquido = sal-sal*(imp/100);
        float dif = (salfree-sal)+(salliquido-sal);
        sal = sal+dif;
        return sal;
    }
    float estrutura_sequencial::exer7(func& f){
        f.sal = f.sal-f.sal*f.imp;
        f.sal = f.sal+f.grat;
        return f.sal;
    }
    void estrutura_sequencial::exer8(float dep, float tax) {
        std::cout <<"valor do deposito";
        std::cin>>dep;
        std::cout << "valor da taxa";
        std::cin>>tax;
        float rend = dep*(tax/100)
        float total = dep+rend;
        std::cout << rend,total;
    }
    float estrutura_sequencial::exer9(float base, float alt) {
        std::cout << "diga o tamanho da base";
        std::cin>>base;
        std::cout << "diga a altura";
        std::cin>>alt;
        float area =  (base*alt)/2;
        return area;
    }
    float estrutura_sequencial::exer110(float r) {
        float pi = 3.14159265359;
        std::cout << "digite o valor do raio";
        std::cin>>r;
        float area = r*pi;
        return area;
    }




    }





}
