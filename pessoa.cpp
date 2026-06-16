#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
    std::string nome;
    int idade;

public:
    Animal (std::string nome, int idade) {
        this -> nome = nome;
        this -> idade = idade;
    }

    void depositar() {
        std::cout << this -> nome << " Tem :" << idade << " Anos" << std::endl;
    }
};

int main(){
    
    Animal p1("Eric", 20);
    Animal p2("Guilherme", 30);
    Animal p3("Gutierre", 40);
    
    p1.depositar();
    p2.depositar();
    p3.depositar();

    return 0;
    
}
