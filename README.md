# ⚽ Simulador de Apostas em C++

Este é um projeto de um **Sistema de Apostas / Bolão de Futebol** desenvolvido em C++. O programa simula a validação de palpites para rodadas de jogos internacionais e calcula a pontuação dos apostadores com base no resultado oficial das partidas, utilizando uma lógica criativa com números de ponto flutuante (`float`) para representar os placares.

---

## 🚀 Como Funciona

Os placares dos jogos são representados por números reais (`float`), onde:
* A **parte inteira** representa os gols do time **mandante** (casa).
* A **parte decimal** representa os gols do time **visitante** (fora).

> 💡 **Exemplo:** O placar `3.0` significa **3 x 0** para o mandante. Um palpite de `1.2` significa **1 x 2** para o visitante.

### 📋 Regras de Pontuação

O sistema analisa o palpite do usuário e atribui pontos de acordo com o nível de acerto:

| Condição de Acerto | Pontuação | Descrição |
| :--- | :---: | :--- |
| **Placar Exato** | `+10 pontos` | O apostador acertou em cheio a quantidade de gols de ambos os times. |
| **Tendência de Vitória** | `+5 pontos` | O apostador errou o placar exato, mas acertou qual time venceu a partida. |
| **Erro Total** | `0 pontos` | O apostador errou o vencedor e o placar do jogo. |

---

## 🛠️ Tecnologias e Conceitos Aplicados

O projeto foi construído utilizando conceitos fundamentais e intermediários da linguagem C++:
* **Escopo de Variáveis Globais:** Gerenciamento de pontuações e resultados constantes.
* **Modularização com Funções:** Criação da função `calculo()` para processar as regras de negócio separadamente da função principal.
* **Manipulação de Tipos (`Typecasting`):** Conversão de `float` para `int` e uso do operador de resto (`%`) para isolar os gols de cada time a partir de um número real.
* **Estruturas de Controle:** Loops `while` e condicionais encadeadas (`if / else if / else`).

---

## 💻 Código Fonte Base

O núcleo da lógica de validação de vitória e placar funciona da seguinte forma dentro do programa:

```cpp
if (aposta1 == brasilXegito) {
    ptuser1 = ptuser1 + 10; // Acerto em cheio
} else if ((golsCasa > golsVisitante) && (c1 > v1)) {
    ptuser1 = ptuser1 + 5;  // Acertou o vencedor
}

```
---

## 🔧 Como Executar o Projeto

1. Certifique-se de ter um compilador de C++ instalado (como o g++).
2.Clone este repositório:


```
git clone [https://github.com/seu-usuario/nome-do-repositorio.git](https://github.com/seu-usuario/nome-do-repositorio.git)
```

3. Navegue até a pasta e compile o arquivo:


```
g++ -o programa aposta.cpp
```

4. Execute o programa


```
./programa
```

👥 Contribuidores
Este projeto foi desenvolvido de forma colaborativa pelos seguintes desenvolvedores:

* 🧑‍💻 Gabriel Leal 

* 🧑‍💻 Guilherme Cavalcante 

* 🧑‍💻 Rodrigo Matos 

Pronto para palpitar e gerenciar os pontos do seu bolão! 🏆
---

*Boa Vista, RR — ITEAM 2026*
