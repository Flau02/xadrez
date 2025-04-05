#include <stdio.h>

int main()
{
    int resp;

    do
    {
        int peca, movimento;
        int i = 1, j = 0;

        char direcao;

        printf("Opções para escolha da peça.\n\n");
        printf("1 - TORRE\n");
        printf("2 - BISPO\n");
        printf("3 - RAINHA\n");
        printf("4 - CAVALO\n\n");

        printf("Digite o número da peça: ");
        scanf("%d", &peca);
        printf("\n");

        if (peca == 1) // Define quais movimentos são da TORRE
        {
            printf("Opção de movimeno da TORRE. \n\n");
            printf("A - CIMA\n");
            printf("B - BAIXO\n");
            printf("C - DIREITA\n");
            printf("D - ESQUERDA\n\n");
        }
        else if (peca == 2) // Define quais movimentos são do BISPO
        {
            printf("Opção de movimeno do BISPO. \n\n");
            printf("E - CIMA-DIREITA\n");
            printf("F - CIMA-ESQUERDA\n");
            printf("G - BAIXO-DIREITA\n");
            printf("H - BAIXO-ESQUERDA\n\n");
        }
        else if (peca == 3) // Define quais movimentos são da RAINHA
        {
            printf("Opção de movimeno da RAINHA \n\n");
            printf("A - CIMA\n");
            printf("B - BAIXO\n");
            printf("C - DIREITA\n");
            printf("D - ESQUERDA\n");
            printf("E - CIMA-DIREITA\n");
            printf("F - CIMA-ESQUERDA\n");
            printf("G - BAIXO-DIREITA\n");
            printf("H - BAIXO-ESQUERDA\n\n");
        }
        else
        {
            printf("Opção de movimeno do CAVALO \n\n");
            printf("A - CIMA-CIMA-DIREITA\n");
            printf("B - CIMA-CIMA-ESQUERDA\n");
            printf("C - DIREITA-DIREITA-CIMA\n");
            printf("D - DIREITA-DIREITA-BAIXO\n");
            printf("E - BAIXO-BAIXO-DIREITA\n");
            printf("F - BAIXO-BAIXO-ESQUERDA\n");
            printf("G - ESQUERDA-ESQUERDA-CIMA\n");
            printf("H - ESQUERDA-ESQUERDA-BAIXO\n\n");
        }

        printf("Digite a 'LETRA' correspondente ao movimento que deseja executar: ");
        scanf(" %c", &direcao); // Jogador determina a direção que peça irá se mivimentar

        if (peca != 4)
        {
            printf("Digite a quantidade de casas para o movimento da peça: ");
            scanf("%d", &movimento); // Jogador determina quantidade de casas a peça irá se mivimentar
        }

        printf("\n");

        switch (peca) // Escolha da peça
        {

        case 1: // Peça Torre

            switch (direcao) // Switch para determinar a direção do movimento da TORRE
            {
            case 'A':
            case 'a':
                while (i <= movimento) // Loop para ovimentar a TORRE para cima
                {
                    printf("CIMA\n");
                    i++;
                }
                break;
            case 'B':
            case 'b':
                while (i <= movimento) // Loop para ovimentar a TORRE para baixo
                {
                    printf("BAIXO\n");
                    i++;
                }
                break;
            case 'C':
            case 'c':
                while (i <= movimento) // Loop para ovimentar a TORRE para a direita
                {
                    printf("DIREITA\n");
                    i++;
                }
                break;
            case 'D':
            case 'd':
                while (i <= movimento) // Loop para ovimentar a TORRE para a esquerda
                {
                    printf("ESQUERDA\n");
                    i++;
                }
                break;
            default:
                printf("Letra inválida escolha de 'A' a 'D'!!!");
                break;
            }

            break;
        case 2: // Peça Bispo

            switch (direcao) // Switch para determinar a direção do movimento do BISPO
            {

            case 'E':
            case 'e':
                do // Loop para movimentar o BISPO para diagonal cima-direita
                {
                    printf("CIMA-DIREITA\n");
                    i++;
                } while (i <= movimento);

                break;
            case 'F':
            case 'f':
                do // Loop para movimentar o BISPO para diagonal cima-esquerda
                {
                    printf("CIMA-ESQUERDA\n");
                    i++;
                } while (i <= movimento);

                break;
            case 'G':
            case 'g':
                do // Loop para movimentar o BISPO para diagonal baixo-direita
                {
                    printf("BAIXO-DIREITA\n");
                    i++;
                } while (i <= movimento);

                break;
            case 'H':
            case 'h':
                do // Loop para movimentar o BISPO para diagonal baixo-esquerda
                {
                    printf("BAIXO-ESQUERDA\n");
                    i++;
                } while (i <= movimento);

                break;
            default:
                printf("Letra inválida escolha de 'E' a 'H'!!!");
                break;
            }
            break;

        case 3: // Peça Rainha

            switch (direcao) // Switch para determinar a direção do movimento da RAINHA
            {
            case 'A':
            case 'a':
                for (i = 1; i <= movimento; i++)
                {
                    printf("CIMA\n");
                }

                break;
            case 'B':
            case 'b':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para baixo
                {
                    printf("BAIXO\n");
                }

                break;
            case 'C':
            case 'c':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para direita
                {
                    printf("DIREITA\n");
                }

                break;
            case 'D':
            case 'd':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para esquerda
                {
                    printf("ESQUERDA\n");
                }

                break;
            case 'E':
            case 'e':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para diagonal cima-direita
                {
                    printf("CIMA-DIREITA\n");
                }

                break;
            case 'F':
            case 'f':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para diagonal cima-esquerda
                {
                    printf("CIMA-ESQUERDA\n");
                }

                break;
            case 'G':
            case 'g':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para diagonal baixo-direita
                {
                    printf("BAIXO-DIREITA\n");
                }

                break;
            case 'H':
            case 'h':
                for (i = 1; i <= movimento; i++) // Loop para movimentar a RAINHA para diagonal baixo-esquerda
                {
                    printf("BAIXO-ESQUERDA\n");
                }

                break;

            default:
                printf("Letra inválida escolha de 'A' a 'H'!!!");
                break;
            }

            break;

        case 4: // Peça Cavalo

            switch (direcao) // Switch para determinar a direção do movimento da RAINHA
            {
            case 'A':
            case 'a':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("CIMA\n");
                        j++;
                    }
                    printf("DIREITA\n");
                }
                break;

            case 'B':
            case 'b':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("CIMA\n");
                        j++;
                    }
                    printf("ESQUERDA\n");
                }
                break;

            case 'C':
            case 'c':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("DIREITA\n");
                        j++;
                    }
                    printf("CIMA\n");
                }
                break;

            case 'D':
            case 'd':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("DIREITA\n");
                        j++;
                    }
                    printf("BAIXO\n");
                }
                break;

            case 'E':
            case 'e':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("BAIXO\n");
                        j++;
                    }
                    printf("DIREITA\n");
                }
                break;

            case 'F':
            case 'f':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("BAIXO\n");
                        j++;
                    }
                    printf("ESQUERDA\n");
                }
                break;

            case 'G':
            case 'g':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("ESQUERDA\n");
                        j++;
                    }
                    printf("CIMA\n");
                }
                break;

            case 'H':
            case 'h':
                for (i = 0; i < 1; i++)
                {
                    while (j < 2)
                    {
                        printf("ESQUERDA\n");
                        j++;
                    }
                    printf("BAIXO\n");
                }
                break;

            default:
                printf("Letra inválida escolha de 'A' a 'H'!!!");
                break;
            }

            break;

        default:

            printf("Número inválido escolha opção 1, 2 ou 3!!!");

            break;
        }

        printf("Digite '0' = SAIR ou '1' = CONTINUAR: ");
        scanf("%d", &resp);
        printf("\n");

    } while (resp == 1);

    return 0;
}