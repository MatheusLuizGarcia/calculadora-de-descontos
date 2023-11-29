#include<stdio.h>

typedef struct {
  char nomeProduto[50];
  int quantidade;
  float precoUnitario;
  float precoTotal;
} Produto;

int main() {
  int produtosCount;
  printf("Informe a quantidade de produtos\n");
  scanf("%d",&produtosCount);
  float descontoTotal = 0.0;
  Produto Produtos[produtosCount];
  for(int i = 0; i < produtosCount; i++){
    Produtos[i].nomeProduto[0] = 0;
    Produtos[i].quantidade = 0;
    Produtos[i].precoUnitario = 0;
    Produtos[i].precoTotal = 0;
  }
  for(int y = 0; y < produtosCount; y++){
    printf("Informe o nome do produto\n");
    scanf("%s",&Produtos[y].nomeProduto);
    printf("Informe a quantidade do produto\n");
    scanf("%d",&Produtos[y].quantidade);
    printf("Informe o preço do produto\n");
    scanf("%f",&Produtos[y].precoUnitario);
    Produtos[y].precoTotal = Produtos[y].precoUnitario * Produtos[y].quantidade;
    float desconto = 0;
    if(Produtos[y].quantidade > 5 && Produtos[y].quantidade <= 15){
      desconto = Produtos[y].precoTotal * 0.1;
    }
    if(Produtos[y].quantidade > 15){
      desconto = Produtos[y].precoTotal * 0.2;
    }
    descontoTotal += desconto;
  }
  printf("Produtos com desconto:\n");
  for(int z = 0; z < produtosCount; z++){
    if(Produtos[z].quantidade > 5){
      printf("Produto: %s\n", Produtos[z].nomeProduto);
    }
  }
  printf("Desconto total: %f\n", descontoTotal);
  return 0;
}
