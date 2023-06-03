#include <stdlib.h>
#include <stdio.h>
#include <time.h>
#include <stdbool.h>
// #include <windows.h>

// void pos(int lin, int col)
// {
//   printf("\e[%d;%dH", lin, col);
// }

// void clear()
// {
//   printf("\e[2J");
// }

// void colorn()
// {
//   printf("\e[m");
// }

// void colorl(int r, int g, int b)
// {
//   printf("\e[38;2;%d;%d;%dm", r,g,b);
// }

// void colorb(int r, int g, int b)
// {
//   printf("\e[48;2;%d;%d;%dm", r,g,b);
// }

void print_esp(int a)
{
  for (int i = 0; i < a; i++)
  {
    printf(" ");
  }  
}

void print_base(int a)
{
  for (int i = 0; i < a; i++)
  {
    if (i != a-1)
    {
      printf("*");printf(" ");
    }
    else
      printf("*");
  } 
}

void print_sqr(int l, int linha, int coluna)
{
  int i;
  // pos(linha, coluna);
  print_base(l);
  printf("\n");
  for (i = 0; i < l - 2; i++)
  {
    pos(linha+i+1, coluna);
    printf("*");print_esp(l*2-3);printf("*\n");
  }
  pos(linha+i+1,coluna);
  print_base(l);
  printf("\n");
}

void sqr_game(int l,int r, int g, int b)
{
    // colorn();
    // colorb(r,g,b);
    printf("\n");
    print_sqr(l, 4,1);// quadrado do jogo
}

void sqr_player(int l,int r, int g, int b)
{
    // colorn();
    // colorb(r, g, b);
    print_sqr(l,4, 13); // quadrado do jogador
}

// void barra_cor(int linha, int coluna, char cor, int *c)
// { 
//   int j = 0;
//   if (cor == 'r')
//   {
//     for (int i = coluna; i <= coluna + 51 ; i++)
//     {
//       pos(linha, i);
//       colorb(j,0,0);
//       printf(" ");
//       j+=5;
//     }
    
//   }
//   else if (cor == 'g')
//   {
//     for (int i = coluna; i <= coluna + 51 ; i++)
//     {
//       pos(linha, i);
//       colorb(0,j,0);
//       printf(" ");
//       j+=5;
//     }
//   }
//   else if (cor == 'b')
//   {
//     for (int i = coluna; i <= coluna + 51 ; i++)
//     {
//       pos(linha, i);
//       colorb(0,0,j);
//       printf(" ");
//       j+=5;
//     }
//   }
//   int loc = *c/5 + coluna;
//   pos(linha,loc);
//   colorb(255,255,255);
//   printf(" "); 
// }

// void joga(int *r, int *g, int *b)
// {
//   colorn();
//   do
//   {
//     colorn();
//     printf("\nDigite um valor de 0 a 255 para red: ");
//     scanf("%d", r);
//   }while (*r < 0 || *r > 255);
//   do
//   {
//     colorn();
//     printf("\nDigite um valor de 0 a 255 para green: ");
//     scanf("%d",g);
//   }while (*g < 0 || *g > 255);
//   do
//   {
//     colorn();
//     printf("\nDigite um valor de 0 a 255 para blue: ");
//     scanf("%d",b);
//   }while (*b < 0 || *b > 255);
// }

float sistema_pontos(int ponto, int jogador)
{
  int dist_max, dist_jogador;
  float pontuacao, ponto_por_dist;
  if (ponto >= 128)
    dist_max = ponto;
  else
    dist_max = 255 - ponto;
  if (jogador > ponto)
    dist_jogador = jogador - ponto;
  else
    dist_jogador = ponto - jogador;

  ponto_por_dist = (float)100/dist_max;
  pontuacao = 100 - ponto_por_dist * dist_jogador;    
  // printf("\n ponto_ por_dist = %f", ponto_por_dist);
  return pontuacao;  
}

void top5(float vet[], int tam_vet)
{
  int aux;
  if (tam_vet > 1)
  {
    for (int i = 0; i < tam_vet-1; i++) // do primeiro num até o penultimo
    {
      for (int j = i+1; j < tam_vet; j++) // do num a frente do i até o ultimo
      {
        if (vet[i] < vet[j]) // troca os nums em ordem decrescente
        {
          aux = vet[i];
          vet[i] = vet[j];
          vet[j] = aux;
        }
      }
    }
  }
    for (int i = 0; i < tam_vet; i++)
    {
      if (i == 5) 
        {break;}
      colorl(70 + i*36,250 - i*10,120 - i*10);
      printf("Top %d: %.2f\n", i+1, vet[i]);
    }
}

int main()
{
    // HANDLE consolehandle =  GetStdHandle(STD_OUTPUT_HANDLE);
    // DWORD consolemode;
    // GetConsoleMode(consolehandle, &consolemode);
    // SetConsoleMode(consolehandle, consolemode | ENABLE_VIRTUAL_TERMINAL_PROCESSING);
  // Código para poder usar as cores no terminal do Windows  
  int r,g,b; 
  int r_u,g_u,b_u;
  float pontos, pr, pg, pb;
  char continuar_jogando = 's';
  float vet_pontos[50];
  int jogada = 0;
  srand(time(0));
  while (continuar_jogando == 's' || continuar_jogando == 'S')
  {
    r_u=255,g_u=255,b_u=255;
    pontos = 0;
    r = 5 * (rand() % 52);
    g = 5 * (rand() % 52);
    b = 5 * (rand() % 52);
    for (int i = 0; i < 5; i++)
    {
      colorl(30,200,240);
      printf("\nTENTATIVA %d\n", i+1);
      printf("Pontuacao atual: %.2f", pontos);
      // printf("%d %d %d\n",r,g,b);
      sqr_game(5, r, g, b);
      putchar('\n');
      sqr_player(5, r_u, g_u, b_u);
      putchar('\n');
      barra_cor(4,23,'r', &r_u);
      barra_cor(6,23,'g', &g_u);
      barra_cor(8,23,'b', &b_u);
      colorn();
      pos(4, 75);
      printf("%d", r_u);
      pos(6,75);
      printf("%d", g_u);
      pos(8,75);
      printf("%d", b_u);
      joga(&r_u,&g_u,&b_u);
      getchar();
      pr = sistema_pontos(r, r_u);
      pg = sistema_pontos(g, g_u);
      pb = sistema_pontos(b, b_u);
      pontos = (pr+pg+pb)/3;
      printf("\nSeu pontos dessa rodada: %.2f", pontos);
      printf("\nPressione Enter para continuar...");
      getchar();
      clear();
      pos(1,1);
    }
    printf("Pontos da partida");
    colorl(0,230,230);
    printf("\n%.2f", pontos);
    printf("A cor correta era:\nr: %d   g: %d   b: %d\n",r,g,b);
    colorn();
    sqr_game(5, r, g, b);
    sqr_player(5, r_u, g_u, b_u);
    colorn();
    printf("\nFIM DE JOGO");
    printf("\nDeseja jogar novamente [s/n] ? ");
    scanf(" %c", &continuar_jogando);
    vet_pontos[jogada] = pontos;
    clear();
    pos(1,1);
    jogada ++;
  }
  top5(vet_pontos, jogada);
  colorn();
  return 0;
}
