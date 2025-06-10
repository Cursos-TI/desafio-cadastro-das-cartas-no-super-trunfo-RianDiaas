#include <stdio.h>
#include <string.h> //Biblioteca para manipulação de Strings, Vou usar esse repositorio no fgets (para poder casdastra nomes compostos como São Paulo.)

int main(){

//Saudações ao usuario.
printf("Olá, Seja Bem Vindo ao Super Trunfo!\n");
printf("Vamos Começar!\n");
printf("\n"); // linha em branco para melhor organização

// Vamos Criar as Variavéis da Carta 1
char Estado1[3], codigo1[5], nomedacidade1[20];
float pib1, area1;
int pontosturisticos1;
long long int populacao1;

// Vamos Criar as Variavéis da Carta 2
char Estado2[3], codigo2[5], nomedacidade2[20];
float pib2, area2;
int pontosturisticos2;
long long int populacao2;

// vamos usar definições para brincar com cores através do ANSI 
#define RED "\033[31m" 
#define RESET "\033[0m"
#define GREEN "\033[0;32m"

//Inicio do Cadastro da carta 1
printf (RED "-------Cadastro da Carta 1:-------\n\n" RESET);

printf("Digite seu Estado (ex: SP, AL, RJ):");
scanf ("%2s", Estado1); //limitado a 2 caracteres
getchar(); // Limpa o \n do buffer.

printf("Qual o Codigo da Sua Carta? (Ex: SP01, AL01)");
scanf("%4s", codigo1);//limitado a 4 caracteres
getchar();

printf("Nome da Cidade: ");
fgets(nomedacidade1, sizeof(nomedacidade1), stdin); // essa linha le um texto direto do teclado, e armazena em nomedacidade1.
nomedacidade1[strcspn(nomedacidade1, "\n")] = '\0'; // Remove '\n' que a função fgets captura quando o usuario aperta enter.

printf("Quantidade de Habitantes (Digite sem pontos ou Virgulas):");
scanf("%lld", &populacao1);
getchar();

printf("Digite a Área da Cidade (em Km²) Ex: 12.65: ");
scanf("%f", &area1);
getchar();

printf("Digite o PIB da Cidade (Em Bilhões de Reais):");
scanf("%f", &pib1);
getchar();

printf("Digite o Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos1);
getchar();

printf("\n");//linha em branco para melhor organização.

//Inicio do Cadastro da carta 2
printf (RED "-------Cadastro da Carta 2:-------\n\n" RESET);

printf("Digite seu Estado (ex: SP, AL, RJ):");
scanf ("%2s", Estado2);
getchar();

printf("Qual o Codigo da Sua Carta? (Ex: SP01, AL01)");
scanf("%4s", codigo2);
getchar();

printf("Nome da Cidade: ");
fgets(nomedacidade2, sizeof(nomedacidade2), stdin);
nomedacidade2[strcspn(nomedacidade2, "\n")] = '\0'; // mesmo conjunto de instruções utilizado na primeira cidade.

printf("Quantidade de Habitantes (Digite sem pontos ou Virgulas):");
scanf("%lld", &populacao2);
getchar();

printf("Digite a Área da Cidade (em Km²) Ex: 12.65: ");
scanf("%f", &area2);
getchar();

printf("Digite o PIB da Cidade (Em Bilhões de Reais):");
scanf("%f", &pib2);
getchar();

printf("Digite o Número de Pontos Turísticos: ");
scanf("%d", &pontosturisticos2);
getchar();

printf("\n");

/* Agora vamos a exibição
Começando da Carta 1*/
printf(GREEN "----- Carta 1 -----\n" RESET);
printf("Estado: %s\n", Estado1);
printf("Codigo da Carta: %s\n", codigo1);
printf("Nome da cidade: %s\n", nomedacidade1);
printf("Quantidade de Habitantes: %lld\n", populacao1);
printf("Área da Cidade (em Km²): %.2f" ,area1);
printf("PIB: %.2f Bilhões de Reais.\n", pib1);
printf("Numero de Pontos Turisticos: %d\n",pontosturisticos1);

printf("\n");

// Exibição dos dados da carta 2
printf(GREEN "----- Carta 2 -----\n" RESET);
printf("Estado: %s\n", Estado2);
printf("Codigo da Carta: %s\n", codigo2);
printf("Nome da cidade: %s\n", nomedacidade2);
printf("Quantidade de Habitantes: %lld\n", populacao2);
printf("Área da Cidade (em Km²): %.2f" ,area2);
printf("PIB: %.2f Bilhões de Reais.\n", pib2);
printf("Numero de Pontos Turisticos: %d\n",pontosturisticos2);

return 0;
}