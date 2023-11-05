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

void doWhile(int ini, int fin, int pas) {

    int start = ini;
    int end = fin;
    int increment = pas;

    if (start < end) {
        printf("%d ", start);
        start += increment;
        doWhile(start, end, increment);
    } else printf("%d\n", start);

}

void q6(){


    int start, end, pares = 0;

    printf("\nDigite o valor inicial do intervalo: ");
    scanf("%d", &start);
    printf("\nDigite o valor final do intervalo: ");
    scanf("%d", &end);

    
    for(int x = start; x <= end; x++) {

        if (x % 2 == 0) {
            pares++;
        }
    }

    printf("No intervalo de %d e %d, existem %d digitos pares.\n", start, end, pares);
}

void palindromo(char word[20]){

    for (int x = word[0]; ; x++) {
        if (word[x] == '\0') {
            break;
        }
        for (int y = word[20]; ; y--) {
            if (word[x] == word [y]) {
                palindromo(word);
            }
        }
    }

}

void q7() {
    char setence[20];

    printf("Digite uma palavra (ate 20 caracteres): ");
    fgets(setence, sizeof(setence), stdin);

    palindromo(setence);

    
}

void q8() {
    char password[500];
    int length = 0, upperCase = 0, lowerCase = 0 ,numbers = 0, minimalLength = 0;

    printf("Crie uma senha: ");
    fgets(password, sizeof(password), stdin);

    for (int i = 0; 1; i++) {
        if (password[i] >= 'A' && password[i] <= 'Z') {
            upperCase++;
        } else if (password[i] >= 'a' && password[i] <= 'z') {
            lowerCase++;
        } else if (password[i] >= '0' && password[i] <= '9') {
            numbers++;
        }

        if (password[i] == '\0'){
            break;
        }

        length++;
    }

     if (length >= 8) {
        minimalLength = 1;
    }

    printf("\t[%c] Tamanho mínimo de 8 caracteres.\n\t[%c] Contém letra maiúscula.\n\t[%c] Contém letra minúscula.\n\t[%c] Contém números.\n", (minimalLength ? 'O' : 'X'), (upperCase > 0 ? 'O' : 'X'), (lowerCase > 0 ? 'O' : 'X'), (numbers > 0 ? 'O' : 'X'));
}

void q9() {
    int pastDay, pastMounth, pastYear, currentDay, currentMounth, currentYear;

    printf("Informe a data de nascimento (dd/mm/yyyy): ");
    scanf("%d", &pastDay); scanf("%d", &pastMounth); scanf("%d", &pastYear);
    printf("Informe a data atual (dd/mm/yyyy): ");
    scanf("%d", &currentDay); scanf("%d", &currentMounth); scanf("%d", &currentYear);
   

    

    printf("%d/%d/%d\n", pastDay, pastMounth, pastYear);
    printf("%d/%d/%d\n", currentDay, currentMounth, currentYear);
}

void q10() {

    int rows;
    char slash = '#';

    printf("Informe o numero de linhas do trinagulo: ");
    scanf("%d", &rows);

    for (int i = 0; i <= rows; i++) {
        for 
    }
   
}

int main() {

    //q1();
    //q2();
    //q3();
    //q4();
    //doWhile(0, 1000, 1);
    //q6();
    //q7(); //Essa aqui não deu
    //q8();
    //q9(); //Essa aqui não deu
    //q10(); //Essa aqui não deu

    return 0;
}