#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main(){
  char* cadena = (char*)malloc(100);/*asignar memoria para una variable*/
  char* cadena1 = (char*)malloc(100);
  printf("Escribe la cadena\n");
  gets(cadena);/*lee una cadena de caracteres del teclado hasta que se encuentra el carácter '\n'*/
  int num_caract1,num_caract2,apoyo, i, j;
  apoyo= 1;
  j = 0;
  char x = ' ';
  num_caract1=strlen(cadena);

  for(i=0;i<=num_caract1;i++)
    {
    if(cadena[i] != x)
    {
      cadena1[j] = cadena[i];
      j++;
    }
  }
  printf("Palabra: %s\n", cadena1);
  num_caract2 = strlen(cadena1);
  printf("Cantidad de letras: %d\n",num_caract2);
  for(i=0;i<=num_caract2/2;i++)
    {
    if(cadena1[i] != cadena1[num_caract2-i-1])
    apoyo = 0;
    }
  if(apoyo)
    printf("Si es palindromo\n");
  else
    printf("No es palindromo\n");

  free(cadena);
  free(cadena1);/*Se libera la memoria reservada*/

}
