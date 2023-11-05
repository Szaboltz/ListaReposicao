#include <stdio.h>
#include <conio.h>

void q1() {
    int ho;

    printf("Entre com a quantidade de [Ho] : ");
    scanf("%d", &ho);
 
    if (ho > 1) {
        printf("Ho");
    } else {
        printf("Ho");
    }

    for (int n = 1; n < ho; n++) {
        printf("-Ho");
    }

    printf(". Feliz Natal!!!");
}

void q2() {
    float p1, p2, nf;

    printf("Entre com a nota p1: ");
    scanf("%f", &p1);

    while (1){
        if (p1 < 0 || p1 > 10) {
            printf("Nota invalida!\n\n");
            printf("Entre com a nota p1: ");
            scanf("%f", &p1);
        } else {
            break;
        }
    }

    printf("Entre com a nota p2: ");
    scanf("%f", &p2);

    while (1){
        if (p2 < 0 || p2 > 10) {
            printf("Nota invalida!\n\n");
            printf("Entre com a nota p2: ");
            scanf("%f", &p2);
        } else {
            break;
        }
    }
    
    nf = (p1 + p2) / 2;

    if (nf>=5) printf ("Nota final: %.1f - Aprovado\n", nf);
    else printf ("Nota final: %.1f - Reprovado\n", nf);

    if (nf >= 9.0) {
        printf("conceito: E\n");
    } else if (nf >= 6.0 &&  nf < 9.0) {
        printf("conceito: B\n");
    } else if (nf >= 5.0 && nf < 6.0) {
        printf("conceito: R\n");
    } else {
        printf("conceito: F\n");
    }

}

void q3() {
    char sentence[500];
    int length = 0, i = 0, words = 0;

    printf("Entre com um texto de ate 500 caracteres: ");
    fgets(sentence, sizeof(sentence), stdin);

    for (i = 0; 1 ; i++) {
        if (sentence[i] == ' ') {
            words++;
        }

        length++;

        if(sentence[i] == '\0') {
            words++;
            break;
        }

    }

    printf("Quatidade de palavras: %d\n", words);
    printf("Tamanho do texto: %d\n", length - 2);
}

void count_up (int i, int f) {
    int ct;
    printf ("\n");
    for (ct=i; ct<=f; ct++) printf ("%d ", ct);
}

void count_down (int i, int f) {
    int ct;
    printf ("\n");
    for (ct=i; ct>=f; ct--) printf ("%d ", ct);
}

void q4() {
    char op;
    int start, end;

    printf("Voce quer que eu conte de forma [c]rescente ou [d]ecrescente: ");
    op = getch();

    while (1) {
        if (op == 'c' || op == 'C') {
            printf("\nRealizando a contagem de forma CRESCENTE\n");

            printf("\nEntre com o numero INICIAL: ");
            scanf("%d", &start);
            printf("Entre com o numero FINAL: ");
            scanf("%d", &end);

            if (end >= start) {
                count_up(start, end);
                break;
            } else {
                printf("ERRO: o numero final deve ser MAIOR que o inicial!\n");
            }
        } else if (op == 'd' || op == 'D') {
            printf("\nRealizando a contagem de forma DECRESCENTE\n");

            printf("\nEntre com o numero INICIAL: ");
            scanf("%d", &start);
            printf("Entre com o numero FINAL: ");
            scanf("%d", &end);

            if (end <= start) {
                count_down(start, end);
                break;
            } else {
                printf("ERRO: o numero final deve ser MENOR que o inicial!\n");
            }
        } else {
            printf("\nOpcao Invalida. Digite 'c' ou 'd': ");
            op = getch();
        }
    }



}




int main() {

    //q1();
    //q2();
    //q3();
    //q4();

    return 0;
}