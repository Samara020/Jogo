# Jogo
## 🌌 The Last Equivalence: Lumen of Diego
### 1. Nome e sobrenome dos membros do projeto e seus respectivos usuários no GitHub

- Allana Sílvia Gadêlha de Carvalho — [@Allana-Gadêlha](https://github.com/Allana-Gadelha)  
- Carlos Henrique Gonçalves da Silva — [@Carlos-HenriqueDev](https://github.com/Carlos-HenriqueDev)  
- Drielly Santiago dos Santos — [@EllySantiago](https://github.com/EllySantiago)  
- Everton Nunes Batista — [@Everton-creator](https://github.com/Everton-creator)  
- Lara Thaylanne Ho da Silva — [@larathaylanne](https://github.com/larathaylanne)  
- Nicolas de Castro Albuquerque Natario — [@Nicolasnat](https://github.com/Nicolasnat)  
- Samara Mendonça Nunes — [@Samara020](https://github.com/Samara020)  


### 2. Nome da disciplina
Programação Imperativa e Funcional – 2025.2

### 3. Nome da instituição de ensino
CESAR School

### 4. Nome do jogo desenvolvido
The Last Equivalence: Lumen of Diego

“Em um mundo devastado pela dor e pela escuridão, a última esperança renasce através do fogo.”

### 5. Estrutura de pastas
```
📁 Jogo/
 ├── include/       # Headers
 ├── src/           # Código-fonte do jogo
 ├── License        # Licença  
 ├── Makefile       # Script de compilação
 └── README.md
```

### 5. Instruções detalhadas para compilar e executar o jogo
🧩 Pré-requisitos
Certifique-se de ter instalado:

🐧 Linux ou 🍎 macOS
⚙️ GCC (compilador C)
🧰 Make
📦 Biblioteca CLI-lib
Verifique se o GCC e o Make estão instalados:

```
gcc --version
make --version
```
Se não estiverem, instale com:

```
sudo apt install build-essential
```
Clonando o repositório
```
git clone https://github.com/Samara020/Jogo.git
cd Jogo
```
Compilando o jogo

Na raiz do projeto:
```
make
```
Para limpar builds antigos:
```
make clean
```
Executando no Linux/macOS
Entre na pasta build e execute:

```
./lumen-of-diego

```

### Executando no Windows (via Máquina Virtual)

A biblioteca CLI-lib não é compatível com o Windows nativamente. Portanto, é obrigatório o uso de uma máquina virtual para jogar.

Passos:

Instale VirtualBox ou VMware Player

Baixe uma ISO do Ubuntu (ou outra distribuição Linux).

Crie uma máquina virtual e instale o sistema operacional.

Dentro do Linux virtualizado, execute:

Verifique se o compilador e o make estão instalados
```
gcc --version
make --version
```
Baixe o repositório do jogo
```
git clone https://github.com/Samara020/Jogo.git
cd Jogo
```
Compile o projeto (gera o executável dentro da pasta build/)
```
make
```
Execute o jogo
```
cd build
./lumen-of-diego
```
### 6. Breve descrição do jogo, incluindo as regras e como interagir com ele
The Last Equivalence: Lumen of Diego é um jogo de aventura lógica ambientado em um mundo mergulhado em trevas, onde apenas a razão e a última chama da humanidade resistem, e a sua missão é recuperar a lingua perdida.

Você controla Guilherme, o renascido da chama, guiado pela luz do ser superior Diego — a última chama viva, roubada e aprisionada por uma entidade corrompida. Sua missão é recuperar a linguagem perdida (a lógica), e assim liberar as memorias de sua civilização.

#### 🎮 Regras e Interação

Interaja usando o teclado.

Enfrente inimigos respondendo desafios de lógica.

Cada resposta correta recupera fragmentos de alma.

Respostas erradas reduzem sua energia.

A interface da CLI-lib exibe:

Pontuação e progresso

Estado do personagem

Indicadores de vitória ou derrota

### Personagens

* **Guilherme** - Protagonista - renasceu através da última centelha de chama de Diego, um ser superior responsável por manter a luz e a paz do mundo. Guilherme é como um guerreiro da chama da lógica.

* **Diego** - personagem secundário - A história gira em torno de Diego, ele é um ser superior à própria luz, o alfa e o ômega, o equilíbrio do mundo. Ele foi consumido por uma criatura desconhecida, roubando a luz e causando o caos no mundo.

* **Criatura desconhecida**  - vilão - Não identificado, não se sabe sua origem nem mesmo o que é, acredita-se que ela surgiu do próprio mal, um ser inteligente que não busca nada além de corrupção, destruição e caos.

* **Inimigos corrompidos** - NPCs inimigos - seres que caíram em tentação após a perda da luz. Esqueçam de sua língua mãe (linguagem lógica) e se tornaram capachos da criatura desconhecida. Eles estão no caminho de Diego para impedir que ele chegue a Criatura desconhecida.


### Licença

Este arquivo está sobre Licença - confira a licença em [LICENSE.md](https://github.com/Samara020/Jogo?tab=License-1-ov-file) para mais detalhes
