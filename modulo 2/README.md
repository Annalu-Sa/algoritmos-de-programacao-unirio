# Módulo 2: Tipos de dados, variáveis, operadores, entrada e saída
## Memória Principal: RAM
Também conhecida como memória RAM, é componente do computador responsável por armazenar dados.
- **Arquitetura de von Neumann:** programas são tratados como dados (ficam na mesma memória). Essa arquitetura é que permite compilar um programa e convertê-lo para uma outra linguagem.
  - **Compilação** é justamente traduzir para _assembly_ o código, para a máquina ser capaz de compreender o programa e realizar as tarefas dele.

Memória é dividida em células, cada célula é identificada por um endereço.
### Memória principal em células:
| 01011001 | 10111010 | 11000101 | 00011010 |(...etc)|
|--------|--------|--------|--------|--------|
| 0 | 1 | 2 | 3 |(...etc)|
- Se eu quiser armazenar números decimais na célula 01011001 (de índice "0"), então, em decimal, teremos '89'.
- Se eu quiser armazenar letras ou símbolos na célula  10111010 (de índice "2"), então, em ASCII, teremos '║' (traço duplo).

## Tipos e Variáveis
O que eram aqueles '0's e '1's das células de memória?
**Variável!**
- Uma variável é uma localização de memória na qual armazenamos um dado qualquer.
- Toda variável obrigatoriamente possui:
  - um **nome**, usado para nos referirmos a ela ao longo do nosso programa;
  - um **tipo**, que determina de forma padronizada como entendemos essa variável e o que podemos fazer com ela;
    - Tipos de dados podem ser:
      - Primitivos: tipos básicos padronizados para a linguagem:
        - Booleano: representa valores lógicos (verdadeiro ou falso);
        - Inteiro: representa números inteiros;
        - Ponto flutuante: representa números reais;
        - Caracter: representa letras e outros símbolos (incluindo símbolos numéricos);
        - Derivados: tipos customizados que combinam outros tipos (ex. structs).
  - um **valor**: o que realmente está guardado lá em um dado momento.
C possui palavras reservadas para representar os tipos primitivos: _bool_, _int_, _float_, _double_, _char_.
C também possui palavras reservadas para representar alguns modificadores: _unsigned_, _signed, short, long, long long_.

#### Tipos inteiros com sinal
| Tipo | # bytes usual | Valores |
|------|--------------|---------|
| `short` / `short int` | 16 bits = 2 bytes | -32.768 a 32.767 |
| `int` | 32 bits = 4 bytes | -2.147.483.648 a 2.147.483.647 |
| `long` / `long int` | 32 bits = 4 bytes | -2.147.483.648 a 2.147.483.647 |
| | 64 bits = 8 bytes | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 |
| `long long` / `long long int` | 64 bits = 16 bytes | -9.223.372.036.854.775.808 a 9.223.372.036.854.775.807 |
| | 128 bits = 16 bytes | ≈ -1.7 × 10³⁸ a ≈ 1.7 × 10³⁸ |

> ⚠️ O número de bytes depende do compilador.

#### Tipos inteiros sem sinal
| Tipo | # bytes usual | Valores |
|------|--------------|---------|
| `unsigned short` | 16 bits = 2 bytes | até 65.535 |
| `unsigned` / `unsigned int` | 32 bits = 4 bytes | até 4.294.967.295 |
| `unsigned long` | 32 bits = 4 bytes | até 4.294.967.295 |
| | 64 bits = 8 bytes | até 18.446.744.073.709.551.615 |
| `unsigned long long` | 64 bits = 16 bytes | até 18.446.744.073.709.551.615 |
| | 128 bits = 16 bytes | até ≈ 3.4 × 10³⁸ |

#### Tipos de ponto flutuante
Tipos de ponto flutuante representam número reais de várias magnitudes.
- IEEE 754: padrão habitual de especificação;
- Representação similar a notação científica;
- Cuidado: cálculos não são exatos.

| Tipo | # bytes usual | Precisão | Magn. máxima | Magn. mínima (não-norm.) |
|------|--------------|----------|--------------|--------------------------|
| `float` | 32 bits | 24 bits | ≈ ±3.4 × 10³⁸ | ≈ ±1.17 × 10⁻³⁸ |
| `double` | 64 bits | 53 bits | ≈ ±1.79 × 10³⁰⁸ | ≈ ±2.22 × 10⁻³⁰⁸ |
| `long double` | 80 bits | 64 bits | ≈ ±1.18 × 10⁴⁹³² | ≈ ±3.65 × 10⁻⁴⁹⁵¹ |

#### Tipos de caracteres
Caracteres são representados segundo a tabela ASCII.
- Representação com 1 byte, análogo a número ≤127;
- Inclui caracteres não-simbólicos (pular linha, backspace, etc.)
Abaixo temos a tabela completa (0-127): 
##### Tabela ASCII
| Dec | Hex | Caractere | | Dec | Hex | Caractere | | Dec | Hex | Caractere | | Dec | Hex | Caractere |
|-----|-----|-----------|-|-----|-----|-----------|-|-----|-----|-----------|-|-----|-----|-----------|
| 0 | 00 | NUL | | 32 | 20 | (espaço) | | 64 | 40 | @ | | 96 | 60 | ` |
| 1 | 01 | SOH | | 33 | 21 | ! | | 65 | 41 | A | | 97 | 61 | a |
| 2 | 02 | STX | | 34 | 22 | " | | 66 | 42 | B | | 98 | 62 | b |
| 3 | 03 | ETX | | 35 | 23 | # | | 67 | 43 | C | | 99 | 63 | c |
| 4 | 04 | EOT | | 36 | 24 | $ | | 68 | 44 | D | | 100 | 64 | d |
| 5 | 05 | ENQ | | 37 | 25 | % | | 69 | 45 | E | | 101 | 65 | e |
| 6 | 06 | ACK | | 38 | 26 | & | | 70 | 46 | F | | 102 | 66 | f |
| 7 | 07 | BEL | | 39 | 27 | ' | | 71 | 47 | G | | 103 | 67 | g |
| 8 | 08 | BS | | 40 | 28 | ( | | 72 | 48 | H | | 104 | 68 | h |
| 9 | 09 | HT | | 41 | 29 | ) | | 73 | 49 | I | | 105 | 69 | i |
| 10 | 0A | LF | | 42 | 2A | * | | 74 | 4A | J | | 106 | 6A | j |
| 11 | 0B | VT | | 43 | 2B | + | | 75 | 4B | K | | 107 | 6B | k |
| 12 | 0C | FF | | 44 | 2C | , | | 76 | 4C | L | | 108 | 6C | l |
| 13 | 0D | CR | | 45 | 2D | - | | 77 | 4D | M | | 109 | 6D | m |
| 14 | 0E | SO | | 46 | 2E | . | | 78 | 4E | N | | 110 | 6E | n |
| 15 | 0F | SI | | 47 | 2F | / | | 79 | 4F | O | | 111 | 6F | o |
| 16 | 10 | DLE | | 48 | 30 | 0 | | 80 | 50 | P | | 112 | 70 | p |
| 17 | 11 | DC1 | | 49 | 31 | 1 | | 81 | 51 | Q | | 113 | 71 | q |
| 18 | 12 | DC2 | | 50 | 32 | 2 | | 82 | 52 | R | | 114 | 72 | r |
| 19 | 13 | DC3 | | 51 | 33 | 3 | | 83 | 53 | S | | 115 | 73 | s |
| 20 | 14 | DC4 | | 52 | 34 | 4 | | 84 | 54 | T | | 116 | 74 | t |
| 21 | 15 | NAK | | 53 | 35 | 5 | | 85 | 55 | U | | 117 | 75 | u |
| 22 | 16 | SYN | | 54 | 36 | 6 | | 86 | 56 | V | | 118 | 76 | v |
| 23 | 17 | ETB | | 55 | 37 | 7 | | 87 | 57 | W | | 119 | 77 | w |
| 24 | 18 | CAN | | 56 | 38 | 8 | | 88 | 58 | X | | 120 | 78 | x |
| 25 | 19 | EM | | 57 | 39 | 9 | | 89 | 59 | Y | | 121 | 79 | y |
| 26 | 1A | SUB | | 58 | 3A | : | | 90 | 5A | Z | | 122 | 7A | z |
| 27 | 1B | ESC | | 59 | 3B | ; | | 91 | 5B | [ | | 123 | 7B | { |
| 28 | 1C | FS | | 60 | 3C | < | | 92 | 5C | \ | | 124 | 7C | \| |
| 29 | 1D | GS | | 61 | 3D | = | | 93 | 5D | ] | | 125 | 7D | } |
| 30 | 1E | RS | | 62 | 3E | > | | 94 | 5E | ^ | | 126 | 7E | ~ |
| 31 | 1F | US | | 63 | 3F | ? | | 95 | 5F | _ | | 127 | 7F | DEL |

#### Pontos importantes
Toda variável precisa ser declarada antes de ser utilizada em qualquer comando.
- Erro: undeclared variable
A inicialização (primeira atribuição de valor) de qualquer variável é muito importante.
- Sem inicializar, a variável contém um valor arbitrário e isso pode causar bugs.
C possui regras para nomes de variáveis:
- Devem usar apenas letras, dígitos, e underscore;
- Não podem começar com dígitos;
- Case-sensitive: maiúsculas e minúsculas são diferentes.

## Conversão de tipos
Hierarquia de conversão: short -> int -> long -> long long -> float -> double -> long double
- sempre do menor para o maior.
#### Como operadores funcionam?
A operação é calculada antes da atribuição!
- Exemplo: float A = (int a + int b)/2; é como se a operação fosse "guardada" em uma caixa _temporária_ para fazer o cálculo e só depois o resultado é atribuído à variável float. Então, mesmo o resultado into para a "caixa float", a operação é _inteira_, pois envolve somente variáveis inteiras.

**Como corrigir este erro?**
- Multiplicar por float: ```float A = 1.0f*(int a + int b)/2;```
- Fazer casting de um dos operandos: ```float A = (float)(int a + int b)/2```
## Operadores
Operadores aritméticos importantes:
- +: soma
- -: subtração
- *: multiplicação
- /: divisão
- %: resto de divisão
- -: complemento
## Entrada e Saída de dados
Os comandos printf e scanf são os principais para imprimir e ler dados em C
- printf = impressão formatada -> "printf("<especificador>", <nome da variável>);"
- scanf = varredura formatada-> "scanf(<especificador>, &<nome da variável>);"

**Formato simples de um especificador: %[tipo]
Exemplos mais importantes:**
- %d = inteiro (formato decimal)
- %u = inteiro (sem sinal)
- %ld = inteiro (long)
- %lld = inteiro (long long)
- %f = ponto flutuante (float)
- %lf = ponto flutuante (double) -> para printar double use "%f"
- %Lf = ponto flutuante (long double)
- %e = float/double notação científica
- %c = caracter
%s = string
