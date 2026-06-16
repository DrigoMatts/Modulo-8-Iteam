#include <iostream>

using namespace std;

class Apostador {

private:
    string nome;
    int idade;
    double aposta;

public:
    Apostador(string nome, int idade, double aposta) : nome(nome), idade(idade), aposta(aposta) {}

    string getNome() const {return nome;}
    int getIdade() const {return idade;}
    double getNota() const {return aposta;}
    
    void setNome(string novoNome) {
        if (!novoNome.empty()) {
            nome = novoNome;
        } else {
            cout<< "Nome não pode ser vazio" << endl;
        }
    }

    void setIdade (int novaIdade){
        if (novaIdade >= 18 && novaIdade <= 150) {
            idade - novaIdade;
        } else {
            cout << "Idade inválido" << endl;
        }
    }

    void setNota(double novaNota) {
        if (novaNota >= 0 && novaNota <= 10) {
            aposta = novaNota;
        } else {
            cout << "Nota inválida" << endl;
        }
    }
};

int main () {
    Apostador pessoa1("Erika", 28, 8);
}
