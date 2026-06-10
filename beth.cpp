#include <iostream>
#include <string>

using namespace std;

// Resultados oficiais dos jogos (usando a sua lógica de float)
const float brasilXegito = 3.0;
const float russiaXmarrocos = 1.1;
const float francaXargentina = 1.2;
const float alemanhaXcostarica = 4.2;

int main() {
    // Variável para controlar o loop da sessão
    bool sessao = true; 
    
    // Variáveis para acumular os pontos de cada um dos 3 apostadores
    int pontosUser1 = 0;
    int pontosUser2 = 0;
    int pontosUser3 = 0;

    while (sessao) {
        // Variáveis para guardar as apostas do jogo Brasil x Egito
        float apostaUser1, apostaUser2, apostaUser3;
        
        cout << "=== BEM-VINDO AO SISTEMA DE APOSTAS ===" << endl;
        cout << "As apostas sao em numeros reais. Ex: 1.0 = 1 x 0, 1.1 = 1 x 1\n" << endl;
        
        // --- LEITURA DAS APOSTAS ---
        cout << "Apostador 1 - Digite seu palpite para Brasil x Egito: ";
        cin >> apostaUser1;

        cout << "Apostador 2 - Digite seu palpite para Brasil x Egito: ";
        cin >> apostaUser2;

        cout << "Apostador 3 - Digite seu palpite para Brasil x Egito: ";
        cin >> apostaUser3;

        cout << "\n=== COMPUTANDO RESULTADOS (Brasil 3 x 0 Egito) ===\n" << endl;

        // --- VERIFICAÇÃO: APOSTADOR 1 ---
        if (apostaUser1 == brasilXegito) {
            cout << "Apostador 1 acertou em cheio! (+3 pontos)" << endl;
            pontosUser1 += 3;
        } else if ((int)(apostaUser1 * 10) % 10 == (int)(brasilXegito * 10) % 10 && (int)(apostaUser1 * 10) % 10 == (int)apostaUser1) {
            cout << "Apostador 1 acertou o empate! (+1 ponto)" << endl;
            pontosUser1 += 1;
        } else {
            cout << "Apostador 1 nao pontuou." << endl;
        }

        // --- VERIFICAÇÃO: APOSTADOR 2 ---
        if (apostaUser2 == brasilXegito) {
            cout << "Apostador 2 acertou em cheio! (+3 pontos)" << endl;
            pontosUser2 += 3;
        } else if ((int)(apostaUser2 * 10) % 10 == (int)(brasilXegito * 10) % 10 && (int)(apostaUser2 * 10) % 10 == (int)apostaUser2) {
            cout << "Apostador 2 acertou o empate! (+1 ponto)" << endl;
            pontosUser2 += 1;
        } else {
            cout << "Apostador 2 nao pontuou." << endl;
        }

        // --- VERIFICAÇÃO: APOSTADOR 3 ---
        if (apostaUser3 == brasilXegito) {
            cout << "Apostador 3 acertou em cheio! (+3 pontos)" << endl;
            pontosUser3 += 3;
        } else if ((int)(apostaUser3 * 10) % 10 == (int)(brasilXegito * 10) % 10 && (int)(apostaUser3 * 10) % 10 == (int)apostaUser3) {
            cout << "Apostador 3 acertou o empate! (+1 ponto)" << endl;
            pontosUser3 += 1;
        } else {
            cout << "Apostador 3 nao pontuou." << endl;
        }

        // --- PLACAR GERAL ---
        cout << "\n=======================================" << endl;
        cout << "PONTUACAO TOTAL DA SESSAO:" << endl;
        cout << "Apostador 1: " << pontosUser1 << " pontos." << endl;
        cout << "Apostador 2: " << pontosUser2 << " pontos." << endl;
        cout << "Apostador 3: " << pontosUser3 << " pontos." << endl;
        cout << "=======================================" << endl;
        
        // Finaliza a sessão para não rodar infinitamente
        sessao = false; 
    }

    return 0;
}

#include <iostream>
#include <string>

using namespace std;

// Resultados oficiais dos jogos (Lógica float: X.Y)
const float brasilXegito = 3.0; // Brasil ganhou (3 > 0)

int main() {
    bool sessao = true; 
    
    int pontosUser1 = 0;
    int pontosUser2 = 0;
    int pontosUser3 = 0;

    while (sessao) {
        float apostaUser1, apostaUser2, apostaUser3;
        
        cout << "=== SISTEMA DE APOSTAS (VALIDACAO DE VENCEDOR) ===" << endl;
        cout << "Exemplo: 3.0 = 3x0 | 2.1 = 2x1 | 2.2 = 2x2\n" << endl;
        
        cout << "Apostador 1 - Palpite Brasil x Egito: ";
        cin >> apostaUser1;

        cout << "Apostador 2 - Palpite Brasil x Egito: ";
        cin >> apostaUser2;

        cout << "Apostador 3 - Palpite Brasil x Egito: ";
        cin >> apostaUser3;

        cout << "\n=== RESULTADO DO JOGO: Brasil 3 x 0 Egito ===" << endl;

        // --- DADOS DO RESULTADO OFICIAL (Brasil vs Egito) ---
        int oficialMandante = (int)brasilXegito;             // 3
        int oficialVisitante = (int)(brasilXegito * 10) % 10; // 0

        // --- PROCESSANDO APOSTADOR 1 ---
        int m1 = (int)apostaUser1;             // Gols do Brasil na aposta 1
        int v1 = (int)(apostaUser1 * 10) % 10; // Gols do Egito na aposta 1

        if (m1 == oficialMandante && v1 == oficialVisitante) {
            cout << "Apostador 1: Acertou o placar exato! (+3 pontos)" << endl;
            pontosUser1 += 3;
        } 
        // Se o Brasil ganhou na vida real (3 > 0) E o apostador previu vitória do Brasil (m1 > v1)
        else if ((oficialMandante > oficialVisitante) && (m1 > v1)) {
            cout << "Apostador 1: Errou o placar, mas acertou que o Brasil ganharia! (+1 ponto)" << endl;
            pontosUser1 += 1;
        } 
        else {
            cout << "Apostador 1: Errou o vencedor/empate. (0 pontos)" << endl;
        }





        // --- PROCESSANDO APOSTADOR 2 ---
        int brasil2 = (int)apostaUser2;
        int egito2 = (int)(apostaUser2 * 10) % 10;

        if (m2 == oficialMandante && v2 == oficialVisitante) {
            cout << "Apostador 2: Acertou o placar exato! (+3 pontos)" << endl;
            pontosUser2 += 3;
        } 
        else if ((oficialMandante > oficialVisitante) && (m2 > v2)) {
            cout << "Apostador 2: Errou o placar, mas acertou que o Brasil ganharia! (+1 ponto)" << endl;
            pontosUser2 += 1;
        } 
        else {
            cout << "Apostador 2: Errou o vencedor/empate. (0 pontos)" << endl;
        }







        // --- PROCESSANDO APOSTADOR 3 ---
        int m3 = (int)apostaUser3;
        int v3 = (int)(apostaUser3 * 10) % 10;

        if (m3 == oficialMandante && v3 == oficialVisitante) {
            cout << "Apostador 3: Acertou o placar exato! (+3 pontos)" << endl;
            pontosUser3 += 3;
        } 
        else if ((oficialMandante > oficialVisitante) && (m3 > v3)) {
            cout << "Apostador 3: Errou o placar, mas acertou que o Brasil ganharia! (+1 ponto)" << endl;
            pontosUser3 += 1;
        } 
        else {
            cout << "Apostador 3: Errou o vencedor/empate. (0 pontos)" << endl;
        }

        // --- PLACAR GERAL ---
        cout << "\n=======================================" << endl;
        cout << "PONTUACAO DA RODADA:" << endl;
        cout << "Apostador 1: " << pontosUser1 << " pts" << endl;
        cout << "Apostador 2: " << pontosUser2 << " pts" << endl;
        cout << "Apostador 3: " << pontosUser3 << " pts" << endl;
        cout << "=======================================" << endl;
        
        sessao = false; 
    }

    return 0;
}