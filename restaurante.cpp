#include <iostream>
#include <vector>

using namespace std;

class Restaurante {

private:
    string nome;
    vector<string> cardapio;

public:

    Restaurante(string nome, vector<string> cardapio) : nome(nome), cardapio(cardapio) {}

    string getNome() const {return nome;}
    vector<string> getCardapio() const {return cardapio;}

    void setNome(string novo_nome) {
        if (!novo_nome.empty()) {
            nome = novo_nome;
        } else {
            cout << "Nome não pode ser vazio" << endl;
        }
    }




};