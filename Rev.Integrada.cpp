#include <iostream>
#include <string>

using namespace std;


string codigo = "4548";
string user = "eric.leal";
string senha;
bool block = false;

int main() {
    
    for (int tent = 1; tent <= 3; tent++) {
        try { 

            cout << "\nTentativa " << tent << " de 3. Digite sua senha: ";
            cin >> senha;

            if (tent == 3 && senha != codigo) {
                block = true;
                throw runtime_error("Limite de tentativas excedido. Usuário bloqueado");
            }
            
            if (senha == codigo) {
                cout << "Acesso concedido! Bem vindo ao sistema. \n";
                break;
            } else {
                throw invalid_argument("Senha incorreta");
            }
        
        } catch (const invalid_argument& e) {
            cerr << "Erro: " << e.what() << " Tente novamente.\n";

        } catch (const runtime_error& e) {
            cerr << "Acesso negado: " << e.what() << "\n";
        }
        
    
    }

    if (block) {
        cout << "Por favor, contate o suporte para desbloquear sua conta. \n";
    }

    return 0;
}
