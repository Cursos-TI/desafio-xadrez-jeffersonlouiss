#include <stdio.h>

// Desafio de Xadrez - MateCheck
void moverTorre(int casas)
{
    if(casas > 0)
    {
        moverTorre(casas - 1);
        printf("Direita\n");
    }
}

void moverRainha(int casas)
{
    if(casas > 0)
    {
        moverRainha(casas - 1);
        printf("Esquerda\n");
    }
}

void moverBispo(int casas)
{
    if(casas > 0)
    {
        moverBispo(casas - 1);
        printf("Cima, Direita\n");
    }
}

int main() {
    // Nível Novato - Movimentação das Peças
    int torre = 5;
    int bispo = 5;
    int rainha = 8;
    int escolha;

    //Prompt o usuario para escolher qual peça movimentar 
    printf("Escolha qual peça movimentar:\n1 - Torre\n2 - Bispo\n3 - Rainha\n4 - Cavalo\nOpcao: ");
    
    scanf("%i", &escolha);
    switch (escolha)
    {
    case 1:
        // Implementação de Movimentação da Torre
        moverTorre(torre);
        break;
    case 2:
        // Implementação de Movimentação do Bispo
        moverBispo(bispo);
        break;
    case 3:
        // Implementação de Movimentação da Rainha
        moverRainha(rainha);
        break;
    case 4:
        // impletando movimento do cavalo
        
        for(int i = 0;; i++)
        {
            if(i < 2)
            {
                printf("Cima\n");
                continue;
            }
            printf("Direita\n");
            break;
        }
    break;
    default:
        printf("Escolha incorreta!\n");
        break;
    }
    return 0;
}
