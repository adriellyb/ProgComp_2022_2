#include <stdio.h>
#include <math.h>

void tiro_ao_alvo(int xc, int yc, int xp, int yp, int r) {
  """Função que calcula se o usuário acertou o alvo ou não, a partir das coordenadas do tiro (xp e yp), do alvo (xc e yp) e o raio do alvo (r)"""
    
  float dist;
  dist = sqrt(pow((xp-xc),2)+pow((yp-yc),2));

  if (dist < r) {
      printf("\nAcertou!");
  }
  else {
      printf("\nErrou!");
  }
}

int main()
{
  int xc, yc, xp, yp, r;
  
  printf("Insira, respectivamente, xc, yc, xp, yp e r: \n");
  scanf("%d %d %d %d %d", &xc, &yc, &xp, &yp, &r);

  tiro_ao_alvo(xc, yc, xp, yp, r);

  return 0;
}
