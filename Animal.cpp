#include <iostream>
#include <string>

using namespace std;

class Animal {
    private:
    std::string especie;
    std::string som;

public:
    Animal (std::string titular, std::string som) {
        this -> especie = titular;
        this -> som = som;
    }

    void emitir_som() {
        cout << especie << " faz: " << som << endl;
    }
};

int main(){
    
    Animal a1("Eric", "Eu sou Humano");
    Animal a2("Cachorro", "Au AU");

    a1.emitir_som();
    a2.emitir_som();

    return 0;
}
