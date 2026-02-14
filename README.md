# Super Trunfo - Jogo de Cartas

Um jogo de cartas Super Trunfo implementado em C onde você cadastra duas cartas com informações de cidades e compara seus atributos.

## Como Compilar e Executar

### Pré-requisitos
- Compilador C (clang ou gcc)
- Terminal/linha de comando

### Passos para executar:

1. **Navegue até o diretório do projeto:**
   ```bash
   cd /Users/rafaelfigueiredo/projects/estacio/1_semestre/IAPDC/tema2/novato/desafio_cartas_do_super_trunfo
   ```

2. **Compile o programa:**
   ```bash
   clang main.c -o main
   ```
   Ou usando gcc:
   ```bash
   gcc main.c -o main
   ```

3. **Execute o programa:**
   ```bash
   ./main
   ```

### Comando único (compilar e executar):
```bash
clang main.c -o main && ./main
```

## Como Jogar

O programa solicitará que você insira os dados para duas cartas:

### Dados necessários para cada carta:
- **Código do estado**: Letra entre A-H
- **Código da carta**: Ex: A01, B02
- **Nome da cidade**: Até 15 caracteres
- **População**: Número inteiro (ex: 1000000)
- **Área**: Valor decimal em km² (ex: 1000.5)
- **PIB**: Valor decimal em bilhões de reais (ex: 100.5)
- **Número de pontos turísticos**: Número inteiro (ex: 10)

### Exemplo de execução:
```
Super Trunfo:
Por favor insira os dados da primeira carta:
Insira o código do estado (A-H):
B
Insira o código da carta (ex: A01):
A04
Insira o nome da cidade (até 15 caracteres):
Belo Horizonte
Insira a população (Ex: 1000000):
12323
Insira a área (Ex: 1000.5):
123.23
Insira o PIB (em bilhões de reais ex: 100.5):
123.2
Insira o número de pontos turísticos (Ex: 10):
20
```

Após inserir os dados das duas cartas, o programa exibirá todas as informações cadastradas.

## Estrutura do Projeto

```
desafio_cartas_do_super_trunfo/
├── main.c          # Arquivo principal do jogo
├── main            # Executável compilado
└── README.md       # Este arquivo
```

## Desenvolvimento

O programa foi desenvolvido em C puro utilizando:
- `stdio.h` para funções de entrada e saída
- Variáveis para armazenar os atributos das cartas
- `scanf()` e `fgets()` para captura de dados do usuário
- `printf()` para exibição das informações
