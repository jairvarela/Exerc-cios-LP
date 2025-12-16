#ifndef ALUNO_H
#define ALUNO_H

#include <iostream>
using namespace std;

struct Aluno {
    string nome;
    int nota1;
    int nota2;
    int ID;
    
    void get();
    Aluno();
    Aluno(string nome, int ID, int nota1, int nota2);
     ~Aluno();
    
};




#endif







