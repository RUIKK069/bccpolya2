#include<stdio.h>
int main(void)
{
double raiz,raizdec,Y,Z,n,raizint,AUX;
float X;

printf("Determine um numero para extrair a raiz quadrada:   ");
 scanf("%f", &X);
printf("X= %f",X);
Y=2.00;
raiz=0.00;
raizint=0.00;
raizdec=0.00;
n=0.00;
X=3.00;

while (n<=X) {
    // printf("n= %f X= %f\n",n,X);
  if (X>n*n){
  n=n+1;
  }else{
  if (X==n*n) {
  raiz=n;
  raizint=n;
  // printf("raiz= %f raizint=%d",raiz,raizint);
  n=X+1;
  }else{
  raizint=n-1;
  n=X+1;
  }}}
if ((raiz==0)&&(X!=0)){
  if (Y==0){
  raiz=raizint;
  }else{
  AUX=1.00;
  Z=1.00;
  raizdec=raizint;
  while (AUX<=Y){
  raizdec=raizdec+((1.00)/((10.00)*Z));
  // printf("raizdec= %f",raizdec);
  if (X>raizdec*raizdec){
  }else{
  if (X==raizdec*raizdec){
  AUX=99;
  // printf("X= %f",X);
  }else{
  raizdec=raizdec-((1.00)/((10.00)*Z));
  AUX=AUX+1;
  Z=Z*(10.00);
  // printf("Z= %f",Z);
  }}}
  raiz=raizdec;
  }}
printf("A raiz quadrada é %f\n",raiz);
return 0;
  }






