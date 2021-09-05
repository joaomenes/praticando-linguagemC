/* Este programa receba o valor do peso e altura de uma pessoa
e calule seu IMC pela fórmula: IMC = peso /(altura x altura).
e exibir do IMC calculado na saida (tela) */

# include <stdio.h> //bib. padão : saida e entrada
# include <stdlib.h> //bib. para comando system("pause")
// declaração de subprograma
float imc_calculado(float peso, float altura);

int main() //programa principal
{
 /* declaração das variáveis */
  float peso, altura; //variaveis para entrada de dados
  float imc; //variávl para saida de dados - resultado
 
 /* iniciar os comandos do programa */ 
  printf("Informe seu peso: ");
 /* comanda scanf(...) para receber um dado digitado por usuário e 
  amazenar na variável peso */
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

//subprograma como uma função
//peso e altura são variáveis como parâmetros para este subprograma
float imc_calculado(float peso, float altura)
{  float resultado; //variável local

   resultado = peso/(altura*altura);
   return resultado;	
}
   
