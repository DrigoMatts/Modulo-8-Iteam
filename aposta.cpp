#include <iostream>

using namespace std;

const float brasilXegito = 3.0;
const float russiaXmarrocos = 1.1;
const float francaXargentina = 1.2;
const float germainiaXcostademarfim = 4.2;

float timeVez = 0.0;
int jogo = 1; 

int pontos = 0; 
int ptuser1, ptuser2, ptuser3;
float aposta1 = 0; // aposta2, aposta3;

int calculo (float aposta1) {

        int golsCasa = (int)timeVez;             // 3
        int golsVisitante = (int)(timeVez * 10) % 10; // 0

        int c1 = (int)aposta1;             // Gols do Brasil na aposta 1
        int v1 = (int)(aposta1 * 10) % 10; // Gols do Egito na aposta 1

        if (aposta1 == timeVez){
            pontos = pontos + 10;
        } else if ((golsCasa > golsVisitante) && (c1 > v1)){
            pontos = pontos + 5;
        } else if ((golsCasa < golsVisitante) && (c1 < v1)){
            pontos = pontos + 5;
        }

        return pontos;
}

float jogos (int jogo) {

        if (jogo == 1) {
            timeVez = brasilXegito;
        } else if (jogo == 2) {
            timeVez = russiaXmarrocos;
        } else if (jogo == 3) {
            timeVez = francaXargentina;
        } else if (jogo == 4) {
            timeVez = germainiaXcostademarfim;
        }   
    return timeVez;
}


int main() {

    cout << "=== BEM-VINDO AO SISTEMA DE APOSTAS ===" << endl;

    for (int jogador = 1; jogador <= 3; jogador++) {
        
        pontos = 0; 
        for (jogo = 1; jogo <= 4; jogo++) {
            cout << "1º Brasil vs Egito\n";
            cout << "2º Rússia vs Marrocos\n";
            cout << "3º França vs Argentina\n";
            cout << "4º Alemanha vs Costa do Marfim\n";
            cout << "As apostas são em numeros reais. Ex: 1.0 = 1 x 0, 1.1 = 1 x 1\n" << endl;

            // --- LEITURA DAS APOSTAS ---
            cout << "Apostador " << jogador << " - Digite seu palpite para o " << jogo << "º jogo:\n";
            cin >> aposta1;
            jogos(jogo);
            calculo(aposta1);
        }
        if (jogador == 1) {
            ptuser1 = pontos;
        } else if (jogador == 2) {
            ptuser2 = pontos;
        } else if (jogador == 3) {
            ptuser3 = pontos;
        }
        cout << "Apostas do Jogador " << jogador << " Registradas!!\n" << endl;
    }
    
    cout << "=== Placar de acertos: === \n" << endl;
    cout << "Jogador 1: " << ptuser1 << " pontos\n" << endl;
    cout << "Jogador 2: " << ptuser2 << " pontos\n" << endl;
    cout << "Jogador 3: " << ptuser3 << " pontos\n" << endl;
}