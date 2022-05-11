#include <stdio.h>

void main()
{
    int n[10];
    int *vetor_n;
    
    vetor_n=&n[0];
    
    for(int i=0;i<2;i++){
        printf("\nDigite um valor %i:",i);scanf("%d",vetor_n);
        vetor_n++;
    }
    
    vetor_n=&n[0];
    
    for(int i=0;i<10;i++){
        printf("\nO valor na posicao %i é: %i",i,*vetor_n);
        vetor_n++;
    }
    
   
    
}
