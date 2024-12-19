#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void limparTela();
void mostrarMenuPrincipal();
void submenuComprimento();
void submenuGrandezasEletricas();
void converterMetrosParaCentimetros();
void converterMetrosParaPolegadas();
void converterMetrosParaQuilometros();
void converterCentimetrosParaMetros();
void converterPolegadasParaMetros();
void converterAmperesParaMiliamperes();
void converterAmperesParaKiloamperes();
void converterAmperesParaMicroamperes();
void converterVoltsParaQuilovolts();
void converterVoltsParaMilivolts();
void desenvolvedores();

int main() {
    setlocale(LC_ALL, "pt_BR.UTF-8");
    system("chcp 65001 > nul");  

    while (1) {
        mostrarMenuPrincipal();
        printf("\nEscolha uma opção: ");
        char opcao[2]; 
        scanf("%s", opcao);

        if (opcao[0] == '1') {
            submenuComprimento();
        } else if (opcao[0] == '2') {
            submenuGrandezasEletricas();
        } else if (opcao[0] == '0') {
            printf("\nSaindo do programa...\n");
            exit(0);
        } else if (opcao[0] == '*') {
            desenvolvedores();
        } else {
            printf("\nOpção inválida! Tente novamente.\n");
        }
    }

    return 0;
}

void limparTela() {
    #if defined(_WIN32) || defined(_WIN64)
        system("cls");
    #else
        system("clear");
    #endif
}

void mostrarMenuPrincipal() {
    limparTela();
    printf("\n===== CONVERSOR MULTIFUNCIONAL =====\n");
    printf("1 - Conversor de Comprimento\n");
    printf("2 - Conversor de Grandezas Elétricas\n");
    printf("* - Desenvolvedores\n");
    printf("0 - Sair\n");
}

void submenuComprimento() {
    int opcao;

    while (1) {
        limparTela();
        printf("\n=== CONVERSOR DE COMPRIMENTO ===\n");
        printf("1 - Metros para Centímetros\n");
        printf("2 - Metros para Polegadas\n");
        printf("3 - Metros para Quilômetros\n");
        printf("4 - Centímetros para Metros\n");
        printf("5 - Polegadas para Metros\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                converterMetrosParaCentimetros();
                break;
            case 2:
                converterMetrosParaPolegadas();
                break;
            case 3:
                converterMetrosParaQuilometros();
                break;
            case 4:
                converterCentimetrosParaMetros();
                break;
            case 5:
                converterPolegadasParaMetros();
                break;
            case 0:
                return;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    }
}

void submenuGrandezasEletricas() {
    int opcao;

    while (1) {
        limparTela();
        printf("\n=== GRANDEZAS ELÉTRICAS ===\n");
        printf("1 - Amperes para Miliamperes\n");
        printf("2 - Amperes para Kiloamperes\n");
        printf("3 - Amperes para Microamperes\n");
        printf("4 - Volts para Quilovolts\n");
        printf("5 - Volts para Milivolts\n");
        printf("0 - Voltar ao Menu Principal\n");
        printf("\nEscolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                converterAmperesParaMiliamperes();
                break;
            case 2:
                converterAmperesParaKiloamperes();
                break;
            case 3:
                converterAmperesParaMicroamperes();
                break;
            case 4:
                converterVoltsParaQuilovolts();
                break;
            case 5:
                converterVoltsParaMilivolts();
                break;
            case 0:
                return;
            default:
                printf("\nOpção inválida! Tente novamente.\n");
        }
    }
}

void desenvolvedores() {
    limparTela();
    printf("\n=== DESENVOLVEDORES ===\n");
    printf("1 - Hércules Santos\n");
    printf("2 - Danilo Lacerda\n");
    printf("3 - Ariel Fernando\n");
    printf("4 - Cíntia Conceição\n");
    printf("5 - Julio Junior\n");
    printf("6 - Mágna Dias\n");
    printf("7 - Pedro Gabriel\n");
    printf("8 - Tárcio Santos\n");
    printf("9 - Emoji\n");
    printf("\nPressione qualquer tecla para voltar ao menu principal...\n");
    getchar(); 
    getchar(); 
}

void converterMetrosParaCentimetros() {
    double metros;
    printf("\nDigite o valor em metros: ");
    scanf("%lf", &metros);
    printf("%.2lf metros equivalem a %.2lf centímetros.\n", metros, metros * 100);
    system("pause");
}

void converterMetrosParaPolegadas() {
    double metros;
    printf("\nDigite o valor em metros: ");
    scanf("%lf", &metros);
    printf("%.2lf metros equivalem a %.2lf polegadas.\n", metros, metros * 39.37);
    system("pause");
}

void converterMetrosParaQuilometros() {
    double metros;
    printf("\nDigite o valor em metros: ");
    scanf("%lf", &metros);
    printf("%.2lf metros equivalem a %.2lf quilômetros.\n", metros, metros / 1000);
    system("pause");
}

void converterCentimetrosParaMetros() {
    double centimetros;
    printf("\nDigite o valor em centímetros: ");
    scanf("%lf", &centimetros);
    printf("%.2lf centímetros equivalem a %.2lf metros.\n", centimetros, centimetros / 100);
    system("pause");
}

void converterPolegadasParaMetros() {
    double polegadas;
    printf("\nDigite o valor em polegadas: ");
    scanf("%lf", &polegadas);
    printf("%.2lf polegadas equivalem a %.2lf metros.\n", polegadas, polegadas / 39.37);
    system("pause");
}

void converterAmperesParaMiliamperes() {
    double amperes;
    printf("\nDigite o valor em amperes: ");
    scanf("%lf", &amperes);
    printf("%.2lf amperes equivalem a %.2lf miliamperes.\n", amperes, amperes * 1000);
    system("pause");
}

void converterAmperesParaKiloamperes() {
    double amperes;
    printf("\nDigite o valor em amperes: ");
    scanf("%lf", &amperes);
    printf("%.2lf amperes equivalem a %.2lf kiloamperes.\n", amperes, amperes / 1000);
    system("pause");
}

void converterAmperesParaMicroamperes() {
    double amperes;
    printf("\nDigite o valor em amperes: ");
    scanf("%lf", &amperes);
    printf("%.2lf amperes equivalem a %.2lf microamperes.\n", amperes, amperes * 1000000);
    system("pause");
}

void converterVoltsParaQuilovolts() {
    double volts;
    printf("\nDigite o valor em volts: ");
    scanf("%lf", &volts);
    printf("%.2lf volts equivalem a %.2lf quilovolts.\n", volts, volts / 1000);
    system("pause");
}

void converterVoltsParaMilivolts() {
    double volts;
    printf("\nDigite o valor em volts: ");
    scanf("%lf", &volts);
    printf("%.2lf volts equivalem a %.2lf milivolts.\n", volts, volts * 1000);
    system("pause");
}
