#include <stdio.h>
int main(){
printf("Olá, seja bem vindo ao jogo super trunfo\n\n");
printf("Vamos começar cadrastrando as duas cartas das cidades\n\n");

printf("Por favor, digite as informacões sem dar espaço entre as palavras!\n\n");

printf("Primeira carta;\n");

char estado1[50];
char codigodacarta1[50];
char nomedacidade1[50];
int populacao1;
float areaemkm1;
float pib1;
int numeropontosturisticos1;

//primeira carta, nomes, numeros e etc

printf("Digite o estado da cidade:");
scanf("%s", &estado1);
printf("Digite o codigo da carta:");
scanf("%s", &codigodacarta1);
printf("Digite o nome da cidade:");
scanf("%s", &nomedacidade1);
printf("Digite a populacao:");
scanf("%i", &populacao1);
printf("Digite a area em km2:");
scanf("%f", &areaemkm1);
printf("Digite o PIB:");
scanf("%f", &pib1);
printf("Digite o numero de pontos turisticos:");
scanf("%i", &numeropontosturisticos1);

//calculos pib e densidade, aparentemente isso precisa ser feito aqui e não lá em cima
  
float PIBpercapita1 = pib1/populacao1;
float densidadepopulacional1 = populacao1/areaemkm1;
  
printf("\n");

//dados da primeira carta
  
printf("carta 1:\n\n");

printf("estado: %s\n", estado1);
printf("codigo da carta: %s\n", codigodacarta1);
printf("nome da cidade: %s\n", nomedacidade1);
printf("populacao: %i\n", populacao1);
printf("area em km2: %f\n", areaemkm1);
printf("densidade populacional: %f\n", densidadepopulacional1);
printf("PIB: %f\n", pib1);
printf("PIB per capta: %f\n", PIBpercapita1);
printf("numero de pontos turisticos: %i\n", numeropontosturisticos1);

printf("\n\n");

printf("agora vamos cadastrar a segunda carta\n\n");

char estado2[50];
char codigodacarta2[50];
char nomedacidade2[50];
int populacao2;
float areaemkm2;
float pib2;
int numeropontosturisticos2;

//segunda carta, nomes, numeros e etc
  
printf("Digite o estado da cidade:");
scanf("%s", &estado2);
printf("Digite o codigo da carta:");
scanf("%s", &codigodacarta2);
printf("Digite o nome da cidade:");
scanf("%s", &nomedacidade2);
printf("Digite a populacao:");
scanf("%i", &populacao2);
printf("Digite a area em km2:");
scanf("%f", &areaemkm2);
printf("Digite o PIB:");
scanf("%f", &pib2);
printf("Digite o numero de pontos turisticos:");
scanf("%i", &numeropontosturisticos2);

float PIBpercapita2 = pib2/populacao2;
float densidadepopulacional2 = populacao2/areaemkm2;

printf("\n");

printf("carta 2:\n\n");

printf("estado: %s\n", estado2);
printf("codigo da carta: %s\n", codigodacarta2);
printf("nome da cidade: %s\n", nomedacidade2);
printf("populacao: %i\n", populacao2);
printf("area em km2: %f\n", areaemkm2);
printf("densidade populacional: %f\n", densidadepopulacional2);
printf("PIB: %f\n", pib2);
printf("PIB per capta: %f\n", PIBpercapita2);
printf("numero de pontos turisticos: %i\n", numeropontosturisticos2);

printf("\n\n");

// agora vamos para o nivel dois de dificuldade no codigo
  
printf("Muito bem, as duas cartas foram cadastradas com sucesso!\n\n");
printf("Agora vamos comparar as duas cartas para ver quais valores são melhores\n\n");

  if (populacao1 > populacao2) {
    printf("Comparação das cartas --> Atributo população:\n");
    printf("A carta 1 venceu!! Ela tem uma população maior que a carta 2\n");
    printf("carta 1: %s tem: %d habitantes\n",nomedacidade1, populacao1);
    printf("carta 2: %s tem: %d habitantes\n\n",nomedacidade2, populacao2);
    
  } else {
    printf("Comparação das cartas --> Atributo população:\n");
    printf("A carta 2 venceu!! Ela tem uma população maior que a carta 1\n");
    printf("carta 1: %s tem: %d habitantes\n",nomedacidade1, populacao1);
    printf("carta 2: %s tem: %d habitantes\n\n",nomedacidade2, populacao2);
    
  }

if (areaemkm1 > areaemkm2) {
  printf("Comparação das cartas --> Atributo area em km2:\n");
  printf("A carta 1 venceu!! Ela tem uma area maior que a carta 2\n");
  printf("carta 1: %s tem: %f km2\n",nomedacidade1, areaemkm1);
  printf("carta 2: %s tem: %f km2\n\n",nomedacidade2, areaemkm2);}

else {
  printf("Comparação das cartas --> Atributo area em km2:\n");
  printf("A carta 2 venceu!! Ela tem uma area maior que a carta 1\n");
  printf("carta 1: %s tem: %f km2\n",nomedacidade1, areaemkm1);
  printf("carta 2: %s tem: %f km2\n\n",nomedacidade2, areaemkm2);}

if (densidadepopulacional1 > densidadepopulacional2) {
  printf("Comparação das cartas --> Atributo densidade populacional:\n");
  printf("A carta 1 perdeu!! Ela tem uma densidade populacional maior que a carta 2\n");
  printf("carta 1: %s tem: %f habitantes/km2\n",nomedacidade1, densidadepopulacional1);
  printf("carta 2: %s tem: %f habitantes/km2\n\n",nomedacidade2, densidadepopulacional2);}

else {
  printf("Comparação das cartas --> Atributo densidade populacional:\n");
  printf("A carta 2 perdeu!! Ela tem uma densidade populacional maior que a carta 1\n");
  printf("carta 1: %s tem: %f habitantes/km2\n",nomedacidade1, densidadepopulacional1);
  printf("carta 2: %s tem: %f habitantes/km2\n\n",nomedacidade2, densidadepopulacional2);}

if (PIBpercapita1 > PIBpercapita2) {
  printf("Comparação das cartas --> Atributo PIB per capita:\n");
  printf("A carta 1 venceu!! Ela tem um PIB per capita maior que a carta 2\n");
  printf("carta 1: %s tem: %f R$/habitante\n",nomedacidade1, PIBpercapita1);
  printf("carta 2: %s tem: %f R$/habitante\n\n",nomedacidade2, PIBpercapita2);}

else {
  printf("Comparação das cartas --> Atributo PIB per capita:\n");
  printf("A carta 2 venceu!! Ela tem um PIB per capita maior que a carta 1\n");
  printf("carta 1: %s tem: %f R$/habitante\n",nomedacidade1, PIBpercapita1);
  printf("carta 2: %s tem: %f R$/habitante\n\n",nomedacidade2, PIBpercapita2);}

printf("chegamos ao final do jogo, obrigado por jogar!");


return 0;
}