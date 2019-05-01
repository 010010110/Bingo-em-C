#include <stdio.h>
#include <stdlib.h>
#include <time.h>


typedef struct{
	int cartelas[5][5];
}Cartela;

//verifica se o numero sorteado para a cartela já não existe na mesma
int VerificaRepitido(int cart[5][5], int num, int linha, int coluna){
	
	int j;
	for (j=0;j<=coluna;j++){
		if(cart[j][linha] == num){
			return 1;
		}
	}	
	return 0;
}

//apenas usada para printar a tabela gerada
void PrintTabela (int cartelas[5][5]){
	
	int i, j, t;
		printf("\n\n");
		for (i=0;i<5;i++){
			printf("\n");
			for(j=0;j<5;j++){
			printf("[%d]", cartelas[i][j]);
			}
		}
}

//coloca numero das linhas em ordem crescente 
void Ordena(int cartela[5][5]){

	int i=0, aux=0, j=0, k=0;	
	
	for (i=0; i<5; i++){
		for (j=0; j<5; j++){
    	for (k=0; k<4; k++){
    		//fazendo a verificação se é repitido e substituindo posições
				if(cartela[k][i] > cartela[k+1][i]){
				aux = cartela[k][i];
				cartela[k][i] = cartela[k+1][i];
				cartela[k+1][i] = aux;
				}	
      }
		}
	}
}

//compara se numero sorteado é repitido ou não
int numJaFoiSorteado(int numSorteado, int arrSorteados[50], int qtdSorteados) {
  
  int i;
  //percore até a quantidades de numeros sorteados verificando se não é repitido
  for (i = 0; i < qtdSorteados; i ++) {
    if (numSorteado == arrSorteados[i]) {
      return 1;
    }
  }
  return 0;
}

//sorteia numeros
sorteiaNum(){
	
	int numSorteado, arrSorteados[50], qtdSorteados = 0, t, i , j;
	//para repitir
	while(qtdSorteados <= 50) {
    
	numSorteado = 1 + rand() % 50;
    //chama a função para verificar se é repitido
    if (numJaFoiSorteado(numSorteado, arrSorteados, qtdSorteados) == 0) {
      arrSorteados[qtdSorteados] = numSorteado;
      printf("numero: %d \n", numSorteado);
    } else {
      continue;
    }
    //contador de quantos sorteados
    qtdSorteados++;
    cantabingo(numSorteado);
    marcaX(numSorteado);
    system("pause");
    
  }

}

marcaX(int numSorteado){
	
	int i, j ,t;
	for(t=0;t<7;t++){
    	for(i=0;i<5;i++){
    		for(j=0;j<5;j++){
    			//if(num_cartelas[t].cartelas[i][j] == numSorteado){
    			//	num_cartelas[t].cartelas[i][j] = 0;
					}
				}
			}
		//}
}


cantabingo(int numSorteado){
	switch (numSorteado){
		case(1):
			printf("RONCO DE PORCO\n");//1= Ronco de porco (Onomatopeia do som suíno) ou Inicio do jogo;
		break;
		case(5):
			printf("CACHORRO\n");//5 = Cachorro (referência ao jogo do bicho);
		break;
		case(6):
			printf("MEIA DUZIA\n");//6 = Meia dúzia;
		break;
		case(9):
			printf("PINGO NO PÉ 9 É\n");//9 = Pingo no pé 9 é ( Uma rima com o n° 9);
		break;
		case(10):
			printf("CRAQUE DE BOLA\n");//10 = Craque de bola (Referência a futebol);
		break;
		case(11):
			printf("CASA DE BRONZE\n");//11 = Casa de bronze (rima com o número onze) ou Um atras do outro (imagem gráfica do n°);
		break;
		case(12):
			printf("UMA DUZIA\n");//12 = Uma dúzia;
		break;
		case(13):
			printf("MARIA CRISTINA\n");//13 = Maria Cristina (esse nome tem 13 letras);
		break;
		case(18):
			printf("DOS OUTROS\n");//18 = Dos outros (tocadilho sonoro com o número);
		break;
		case(20):
			printf("PERU DE NATAL\n");//20 = Peru de Natal ( a imagem do n° 20 lembra um peru de ceia);
		break;
		case(22):
			printf("DOIS PATINHOS NA LAGOA\n");//22 = Dois patinhos na lagoa (Uma das mais famosas associações com a imagem de um número);
		break;
		case(23):
			printf("DESCEDENTE DELE\n");//23 = Antes dele(Referência ao n° 24);
		break;
		case(24):
			printf("NUMERO FEIO\n");//24 = Número feio (O número 24 esta relacionado a homosexualidade, novamente uma referência ao jogo do Bicho em que o n° 24 é o animal veado)
		break;
		case(25):
			printf("DEPOIS DELE\n");//25 = Depois dele (Referência ao n° 24);
		break;
		case(26):
			printf("HOLANDES\n");//26 = Holandês ( Trocadilho sonoro)
		break;
		case(33):
			printf("IDADE DE CRISTO\n");//33 = Idade de Cristo ( Cristo morreu com 33 anos);
		break;
		case(38):
			printf("JUSTIÇA DE GOIAIS\n");//38 = Justiça de Goiais (referência ao revólver 38 usado para resolver certo problemas...)
		break;
		case(44):
			printf("QUA-QUA-QUA\n");//44 = Quá-quá-quá ou Bico Largo (Trocadilho sonoro);*/
		break;
	}
}

//arquivo TXT
int ArqTXT(int cartela [5][5]){
	
	int i,j;
	
	//gerando o arquivo
	FILE *pont_arq;
	pont_arq = fopen("arquivo_tabelas.txt", "a");
  
  //testando se o arquivo foi realmente criado
  if(pont_arq == NULL){
  	printf("Erro na abertura do arquivo!");
  	return 1;
  }
	fprintf(pont_arq, "\n");
	//imprimindo vetor no arquivo
	for (i=0; i<5;i++){
		fprintf(pont_arq, "\n");
		for (j=0; j<5;j++){
			
			fprintf(pont_arq, "%d\t", cartela[i][j]);
		
		}
	}
	
	fclose(pont_arq);
	
}



int main () {
	
	int dezena, randNum, i, j, cartelaNum, numSorteado, cont=0, t;
	//struc para armazenar 50 cartelas
	Cartela num_cartelas[6];
	
	srand(time(NULL));
	
	//for da struct (preencher as 50 tabelas)
	for(t=0;t<6;t++){
	
		for (i=0; i<5;i++){
			dezena = i * 10;
			for (j=0; j<5;j++){
				//sorteia um numero aleatorio de 0 até 10 e soma um
					randNum = 1 + rand() % 10 + dezena;
				//chama verificação se é repitido na cartela
				if (VerificaRepitido(num_cartelas[t].cartelas,randNum,i,j) == 1){
					j--;
					continue;
				}
			num_cartelas[t].cartelas[j][i] = randNum;			
			}
		}	
			
		Ordena(num_cartelas[t].cartelas);
		
		ArqTXT(num_cartelas[t].cartelas);
		
		PrintTabela(num_cartelas[t].cartelas);
	
	}
	printf("\n");
	
	
	sorteiaNum();
	
	/* REGRAS
  Sugerem-se os seguintes passos para a confecção da cartela:
 Preencha totalmente uma coluna por vez, da esquerda para a direita;
 Sorteie um número dentro da escala daquela coluna. Se o número não estiver presente na
coluna, insira-o na ordem correta. Caso contrário, repita este passo;
 Quando as cinco casas da coluna estiverem preenchidas, passe para a próxima coluna;
 Depois de preencher a última coluna, apresente a cartela ao jogador.
  */
  
  
}
