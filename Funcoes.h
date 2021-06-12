#ifndef FUNCOES_H
#define FUNCOES_H


class Caixa
{
    private:
    	double saldo;
    
	public:
        Client();
        void menu();
        void acao(int);
        void checarSaldo();
        void transferir();
		void depositar();
        void sacar();

};

#endif
