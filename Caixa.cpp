#include <iostream>
using namespace std;

#include "Funcoes.h"
#include <locale.h>


Caixa::Caixa(){ //heranca
    saldo = 0;
    menu();
}

void Caixa::menu(){
    int opcao = 0;

    do{
        cout << "\n\t MENU" << endl;
        cout << "[ 1 ] Checar saldo" << endl;
        cout << "[ 2 ] Depositar dinheiro" << endl;
        cout << "[ 3 ] Sacar dinheiro" << endl;
        cout << "[ 4 ] Transferir dinheiro" << endl;
        cout << "[ 0 ] Sair" << endl;
        cout << "Opção selecionada: ";
		cin >> opcao;

        acao(opcao);

    }while(opcao);
}

void Caixa::acao(int opcao){
    switch(opcao)
    {
        case 0:
                cout << "\nPrograma encerrado" << endl;
                break;
        case 1:
                checarSaldo();
                break;

        case 2:
                depositar();
                break;

        case 3:
                sacar();
                break;
                
        case 4: 
        		transferir();
        		break;

        default:
                cout << "Opção inválida" << endl;
    }
}

void Caixa::checarSaldo(){
    cout << "\nSaldo atual: R$" << saldo << endl;
}

void Caixa::depositar(){
    double val1;

    cout<< "Valor que deseja depositar: ";
    cin >> val1;

    if(val1 > 0){
        saldo += val1;
        checarSaldo();
    }else{
    	cout << "Valor inválido. Tente novamente" << endl;
	}
}



void Caixa::sacar(){
    double val2;

    cout << "Valor que deseja sacar: ";
    cin >> val2;

    if(val2 <= saldo){
        saldo -= val2;
        checarSaldo();
    }else{
		cout << "Saldo insuficiente" << endl;
	}
}

void Caixa::transferir(){
    double val3, numconta;

    cout << "Número da conta que para qual deseja transferir: ";
    cin >> numconta;
	cout << "Valor que deseja transferir: ";
    cin >> val3;

    if(val3 <= saldo){
        saldo -= val3;
        
        cout << "R$ " << val3 << " transferido para a conta " << numconta << endl;
        
        checarSaldo();
    }else{
    	cout << "Saldo insuficiente" << endl;
	}
}
