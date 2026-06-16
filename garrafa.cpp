#include <iostream>
#include <string>

using namespace std;

class Garrafa {
    private:
    std::string cor;

public:

    Garrafa (std::string cor) {
        this -> cor = cor;
    }

    void abriTampa() {
        std::cout << this -> cor << " *Tup, gut gut gut" << std::endl;
    }
};

int main(){
    
    Garrafa g1("Galão Azul");
    Garrafa g2("Garrafinha Preta");

    g1.abriTampa();
    g2.abriTampa();

    return 0;
    
}
