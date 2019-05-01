# Bingo-em-C
Jogo do bingo em C
Bingo

Construa um programa que gere e exiba, pelo menos, seis cartelas de bingo. Feito isso,
realize o sorteio das dezenas e simule a marcação em tela. São três prêmios, sorteados do
terceiro para o primeiro. Ganha o prêmio aquele que primeiro marcar: uma linha, uma coluna, os
quatro cantos ou uma diagonal. Após haver ganhador para qualquer prêmio, uma nova partida
(com novas cartelas) é iniciada.
Cada cartela é composta por 25 números, divididos em 5 colunas. A primeira coluna abriga
números numa escala de 1 a 10, a segunda de 11 a 20, e assim sucessivamente até a última, de
41 a 50. Em cada coluna os números estão em ordem crescente, para facilitar a marcação.

B I N G O
2 11 23 32 44
4 13 25 34 46
6 14 27 36 47
7 18 29 37 48
9 20 30 39 50

Sugerem-se os seguintes passos para a confecção da cartela:
 Preencha totalmente uma coluna por vez, da esquerda para a direita;
 Sorteie um número dentro da escala daquela coluna. Se o número não estiver presente na
coluna, insira-o na ordem correta. Caso contrário, repita este passo;
 Quando as cinco casas da coluna estiverem preenchidas, passe para a próxima coluna;
 Depois de preencher a última coluna, apresente a cartela ao jogador.
