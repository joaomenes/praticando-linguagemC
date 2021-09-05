/* Este programa receba o valor do peso e altura de uma pessoa
e calule seu IMC pela f�rmula: IMC = peso /(altura x altura).
e exibir do IMC calculado na saida (tela) */

# include <stdio.h> //bib. pad�o : saida e entrada
# include <stdlib.h> //bib. para comando system("pause")
// declara��o de subprograma
float imc_calculado(float peso, float altura);

int main() //programa principal
{
 /* declara��o das vari�veis */
  float peso, altura; //variaveis para entrada de dados
  float imc; //vari�vl para saida de dados - resultado
 
 /* iniciar os comandos do programa */ 
  printf("Informe seu peso: ");
 /* comanda scanf(...) para receber um dado digitado por usu�rio e 
  amazenar na vari�vel peso */
  scanf("%f",&peso);
  printf("Informe sua altura: ");
  scanf("%f",&altura);
  
  // calcular seu imc pela formula
  imc = imc_calculado(peso,altura);
  
  /* imprimir o resultado calculado */
  printf("Seu IMC = %f. \n",imc);
  
  system("pause");
  
  return 0;
}

//subprograma como uma fun��o
//peso e altura s�o vari�veis como par�metros para este subprograma
float imc_calculado(float peso, float altura)
{  float resultado; //vari�vel local

   resultado = peso/(altura*altura);
   return resultado;	
}
   
