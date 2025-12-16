#include "aluno.h"

Aluno::Aluno(string nome, int ID, int nota1, int nota2){
    this->nome = nome;
    this->ID = ID;
    this->nota1 = nota1;
    this->nota2 = nota2;
    
    
   
}

void Aluno::get(){
    cout<< nome << ID << nota1 << nota2;
}

Aluno::Aluno() : nome(""), ID(0), nota1(0), nota2(0) {}

Aluno::~Aluno(){
    
}
