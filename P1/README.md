# 1° Prova - 13/05/26
## Questão 1
Escreva um programa que lê um número inteiro positivo e imprime quantos dígitos iguais a 0 este número possui. Seu programa não pode usar comandos de bibliotecas, exceto **stdio**.
## Questão 2
Em um polígono qualquer de n lados, a soma dos ângulos interiores é sempre igual a (n-2) × 180°. Este é um resultado milenar, originário da obra Elementos, do matemático grego Euclides. 
Escreva um programa que lê um número inteiro, calcula e imprime, com 5 casas de precisão, o valor dos ângulos interiores de um polígono regular de n lados. (Um polígono regular possui todos os lados iguais.)
| Exemplo de Entrada | Exemplo de Saída |
|--------------------|------------------|
| 3 | 60.00000 |
| 5 | 108.00000 |
| 7 | 128.57143 |
## Questão 3
Escreva um programa que lê uma string de até 1000 caracteres, contendo apenas letras sem acento, e imprime uma versão que alterne letras maiúsculas e minúsculas (começando com letra minúscula).
A string resultante deve ser impressa em um único comando.
| Exemplo de Entrada | Exemplo de Saída |
|--------------------|------------------|
| Algoritmos | aLgOrItMoS |
| programaCAO | pRoGrAmAcAo |
## Questão 4
Escreva um programa que lê um inteiro N, seguido de uma matriz N x N de inteiros e imprime o produto dos valores em cada coluna. 
A matriz é fornecida em N linhas de entrada, cada uma contendo N inteiros de uma linha da matriz separados por espaços.
| Exemplo de Entrada | Exemplo de Saída |
|--------------------|------------------|
| 3 | 1a coluna: -15 |
| 1 -2 9 | 2a coluna: 18 |
| 3 -1 6 | 3a coluna: -378 |
| -5 9 -7 |   |
## Questão 5
Você é o desenvolvedor de um novo jogo de plataforma chamado Super Binário. Nesse jogo, Super Binário, seu personagem principal, precisa saltar entre plataformas para pegar uma estrela no final da fase.
Porém, seus designers vivem criando fases impossíveis de se completar só para te encher o saco.
Em cada fase, as plataformas aparecem em ordem, da esquerda para a direita, então Super Binário só precisa andar para a direita e saltar de cada plataforma para a seguinte. 
Todas as plataformas têm alturas inteiras e a fase começa em uma plataforma na altura 0.
Super Binário é um pouquinho ágil: se ele der uma corridinha e pegar um pouco de impulso, ele consegue "saltar" por cima de uma plataforma e ir direto para a seguinte (mas só uma plataforma por vez,
já que ele ainda não conseguiu a capa que ajuda a voar).
Porém, Super Binário não tem um pulo muito alto, então ele só alcança plataformas que estiverem dois ou menos acima de onde ele está.
(Saltar para baixo não é problema, ele não perde uma vida porque a plataforma é uma nuvem, bem acolchoada.)
Escreva um programa que leia um inteiro N, seguido de N inteiros positivos representando as alturas de cada plataforma, e imprima OK se Super Binário consegue concluir a fase, ou IMPOSSIVEL se não conseguir.
| Exemplo de Entrada | Exemplo de Saída | Explicação |
|--------|--------|--------|
| 5 / 2 4 1 3 5 | OK | Ver a primeira figura. |
| 5 / 1 3 1 5 1 | OK | Ver segunda figura. Super Binário consegue chegar na 4ª plataforma saltando direto da 2ª plataforma. |
| 5 / 2 4 2 1 5 | IMPOSSIVEL | Ver terceira figura. Super Binário não consegue alcançar a última plataforma. |
