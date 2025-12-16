/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>
#include "aluno.h"

int main()
{
    Aluno jair[10];
    int opcao = 1000;
    int qtd = 0;
    string nome;
    int nota1;
    int nota2;
    

    while(opcao>0){
    cout<< "Menu"<<endl;
    cout << "1 - Cadastrar aluno";
    cout << "2 - Lista alunos";
    cout<< "3 - Listar média Alunos";
    
    cin>> opcao;
        switch(opcao){
            case 1:
            

            cout<< "Insira o nome do aluno: ";
            cin>>nome;
            cout<< "Insira nota 1 do aluno: ";
            cin>>nota1;
            cout<< "Insira nota 2 do aluno: ";
            cin>>nota2;

            jair[qtd]= Aluno(nome, qtd+1, nota1, nota2);
            qtd++;
            break;
            
            case 2:
            for(int i=0;i<qtd;i++){
                jair[i].get();
            };
            
            break;

        }
    }
    
    

    return 0;
}