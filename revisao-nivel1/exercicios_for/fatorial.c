

//Peça um número n e calcule o fatorial dele (n!).

#include <stdio.h> 

int main() { 
    int numero; 
    int fatorial = 1; 
    
    printf("Digite um número:\n"); 
    scanf("%d", &numero); 
    
    for (int i = 1; i <= numero; i++) { 
        fatorial = fatorial * i; 
    } 
        
        printf("Fatorial do número: %d\n", fatorial); 
        
        return 0; 
    
    }