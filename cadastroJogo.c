#include <stdio.h>

#include <string.h>
qtd=0;
typedef struct{
	char nome[100];
	char tipo[100];
	
	
	
}tjogo;


void addJogo(tjogo jogo[]){
	printf("Digite o nome do jogo: ");
	fflush(stdin);
	gets(jogo[qtd].nome);
	printf("Digite o tipo do jogo: ");
	fflush(stdin);
	gets(jogo[qtd].tipo);	
	qtd++;
}

void listaJogo(tjogo jogo[]){
	int i;	
	for(i=0;i<qtd;i++){
	printf("*** Jogo [%d] ***\n",i+1);
	printf("Nome do jogo: %s\n",jogo[i].nome);
	printf("Tipo do jogo: %s\n",jogo[i].tipo);
	printf("\n------------------\n\n");
}
}

void buscaJogo(tjogo jogo[], char nomeBusca[]){
	int i;
	char nomeAux[150];
	for(i=0;i<qtd;i++){
		strcpy(nomeAux,jogo[i].nome);
		strupr(nomeAux);
		
		if(strcmp(nomeBusca,nomeAux)==0){
				printf("*** Jogo [%d] ***\n",i+1);
				printf("Nome do jogo: %s\n",jogo[i].nome);
				printf("Tipo do jogo: %s\n",jogo[i].tipo);
				printf("\n------------------\n\n");
				
		}
	}
}

void buscaTipo(tjogo jogo[], char tipoBusca[]){
	int i;
	char tipoAux[150];
	for(i=0;i<qtd;i++){
		strcpy(tipoAux,jogo[i].tipo);
		strupr(tipoAux);
		
		if(strcmp(tipoBusca,tipoAux)==0){
				printf("*** Jogo [%d] ***\n",i+1);
				printf("Nome do jogo: %s\n",jogo[i].nome);
				printf("Tipo do jogo: %s\n",jogo[i].tipo);
				printf("\n------------------\n\n");
				return i;
				
		}
	}
	return -1;
}

void alteraDados(tjogo jogo[], char nomeBusca[100]){
	int i=0, alter;
	
}

int menuOp(){
	
	int op;
	printf("Sistema de Jogos\n");
	printf("[1]- Cadastrar novo jogo\n");
	printf("[2]- Listar jogos\n");
	printf("[3]- Buscar jogo por nome\n");
	printf("[4]- Buscar jogo por tipo\n");
	printf("[5]- Alterar dados\n");
	printf("[6]- Remover dados\n");
	printf("[0]- Sair\n");
	printf("\n\nEntre com sua escolha: ");
	scanf("%d",&op);
	return op;
}
int main(){
	
	tjogo jogos[100];
	int op;
	char nomeBusca[100], tipoBusca[100];
	
	do{
		op=menuOp();
		switch(op){
			case 1:
				printf("\n");
				addJogo(jogos);
				break;
			case 2:
				printf("\n");
				listaJogo(jogos);
				break;
			case 3: 
				printf("\nEntre com nome do jogo: ");
				fflush(stdin);
				gets(nomeBusca);
				strupr(nomeBusca);
				printf("\n");
				buscaJogo(jogos,nomeBusca);
				break;
			case 4:
				printf("\nEntre com o tipo do jogo: ");
				fflush(stdin);
				gets(tipoBusca);
				strupr(tipoBusca);
				printf("\n");
				buscaTipo(jogos,tipoBusca);
				break;
			case 5:
				break;
			case 6:
				break;
			case 0:
				printf("\n\nSaindo...");
				break;
			default:
				printf("Opcao invalida :(");
		}
	getch();
	system("cls");	
	}while(op!=0);
}
