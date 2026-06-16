#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
    std::string titular;
    float saldo;

public:
    Animal (std::string titular, float saldo) {
        this -> titular = titular;
        this -> saldo = saldo;
    }

    void depositar(float valor) {
        saldo = saldo + valor;
        std::cout << this -> titular << " Depositou : R$" << valor << " ,00" << std::endl;
        cout << titular << " está com: " << saldo << endl;
    }

    void sacar(float valor) {
        saldo = saldo - valor;
        std::cout << this -> titular << " Sacou : R$" << valor << " ,00" << std::endl;
        cout << titular << " está com: " << saldo << endl;
    }
};

int main(){
    
    Animal p1("Eric", 2000);
    
    p1.depositar(400);
    p1.sacar(1500);

    return 0;
}
