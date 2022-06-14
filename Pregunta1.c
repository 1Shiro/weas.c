#include <stdio.h>
#include <stdlib.h>
#include <math.h>


float suma(float v1,float v2){
  float suma;
  suma=v1+v2;
  return suma;
  }
float resta(float v1,float v2){
  float resta;
  resta=v1-v2;
  return resta;
  }
float multi(float v1,float v2){
  float multi;
  multi=v1*v2;
  return multi;
  }
float divi(float v1,float v2){
  float divi;
  divi=v1/v2;
  return divi;
  }

int main(){
  char op;
  float v1,v2,resultado;
  scanf("%c %f %f",&op,&v1, &v2);
  if (op=='+') {
    resultado= suma(v1,v2);
    printf("%f\n",resultado );
  }
  if (op=='-'){
  resultado= resta(v1,v2);
  printf("%f\n",resultado );
  }
  if (op=='*'){
  resultado= multi(v1,v2);
  printf("%f\n",resultado );
  }
  if (op=='/'){
  resultado= divi(v1,v2);
  printf("%f\n",resultado );
  }
return(0);
}
