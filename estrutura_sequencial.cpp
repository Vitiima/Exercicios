#include "estrutura_sequencial.h"

#include <cmath>
#include <iostream>
#include <ctime>

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
        float rend = dep*(tax/100);
        float total = dep+rend;
        std::cout << rend,total<<endl;
    }
    float estrutura_sequencial::exer9(float base, float alt) {
        std::cout << "diga o tamanho da base";
        std::cin>>base;
        std::cout << "diga a altura";
        std::cin>>alt;
        float area =  (base*alt)/2;
        return area;
    }
    float estrutura_sequencial::exer10(float r) {
        float pi = 3.14159265359;
        std::cout << "digite o valor do raio";
        std::cin>>r;
        float area = r*pi;
        return area;
    }
    void estrutura_sequencial::exer11(float num) {
        std::cout << "digite o numero desejado";
        std::cin>> num;
        if (num <= 0) {
            std::cout << "esse numero não é valido, use um numero maior que zero";
            return;
        }
        std::cout << pow(num,2);
        std::cout << pow(num,3);
        std::cout << sqrt (num);
        std::cout << cbrt(num);
        return;
    }
    void estrutura_sequencial::exer12(float num1, float num2) {
        std::cout << "insira o primeiro numero";
        std::cin>>num1;
        if (num1 == 0) {
            std::cout <<"numero não aceito, insira um numero real diferente de zero" ;
            return;
        }
        std::cout << "insira o segundo numero";
        std::cin>>num2;
        if (num2 == 0) {
            std::cout <<"numero não aceito, insira um numero real diferente de zero" ;
            return;
        }
        std::cout <<pow(num1,num2) ;
        std::cout << pow(num2,num1);
        return;
   }
    void estrutura_sequencial::exer13() {
        float pes;
        std::cout << "diga a quantidade a medida à ser tranformada em pes";
        std::cin>>pes;
        float jarda = 3*pes;
        float milha = 1760*jarda;
        std::cout << milha,"quatidade em milha"<< endl;
        std::cout << jarda,"quantidade em jarda"<< endl;
        return;
    }
    void estrutura_sequencial::exer14(tm d1, p n1){
        int ano = d1.tm_year+1900;
        std::cout << "insira seu nome";
        std::cin >> n1.name;
        std::cout << "insira o seu ano de nascimento";
        std::cin >> n1.nasc;
        cout << "Sua idade é " << (ano - n1.nasc) << endl;
        cout << "Você terá " << (2050 - n1.nasc) << " anos em 2050." << endl;
    }
    void estrutura_sequencial::exer15() {
        float pFabric;
        float plDistr;
        float imp;
        float lDistr;
        float cimp;
        float pf;

        std::cout << "insira o valor de fabrica do veiculo";
        std::cin >> pFabric;
        std::cout << "agora o percentual do distribuidor";
        std::cin >> plDistr;
        plDistr = plDistr/100;
        std::cout << "por ultimo o percentual de imposto";
        std::cin >> imp;
        imp = imp/100;
        lDistr = pFabric*plDistr;
        cimp = pFabric*imp;
        pf = pFabric+lDistr+cimp;

        std::cout << "valor do imposto", cimp <<endl;
        std::cout << "valor do lucro do distribuidor",lDistr << endl;
        std::cout << "valor totoal do veiculo",pf << endl;
    }



    }

