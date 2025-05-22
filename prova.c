#include <stdio.h>
#include <stdlib.h>

int main()
{
    // LOGIN
    /*
    mat1 = 25070104 senha = 123456
    mat2 = 25070092 senha = 123457
    mat3 = 25070001 senha = 123458
    */

    int matriculas[3] = {25070104, 25070092, 24070001};
    int senhas[3] = {123456, 123457, 123458};
    char nome[3][30] = {"Daniel Henrique Reis e Silva", "Daniel Barros Pinto Do Rego", "Pedrinho Girotaum"};

    int usuario, senha, escolhas;
    int continuar = 1;
    int login = 0;

    while (continuar)
    {
        system("cls");

        printf("\n\tAluno-Professor-Gestor-Colaborador\n");
        printf("\t\t     Usuario:\n");
        printf("\t\t     Senha:\n");
        printf("\t?(1) ");
        printf("Acessar(2): ");
        printf("Alterar Senha(3): ");
        scanf("%d", &escolhas);

        switch (escolhas)
        {
        case 1:
            system("cls");
            printf("Coordenador:\nPara acessar o coordenador on-line, digite seu usuario e senha.\n\n");
            printf("Aluno:\nPara acessar o Aluno on-Line, digite sua matricula e senha.\n");
            printf("Caso seja o seu primeiro acesso, ou nunca alterou a senha, digite sua data\n");
            printf("de nascimento no formato DDMMAA. Ex. 030680.\n\n");
            printf("Digite (1) para voltar ao inicio ou qualquer outro numero para sair do sistema: ");
            scanf("%d", &escolhas);
            break;

        case 2:
            printf("\tAluno-Professor-Gestor-Colaborador\n");
            printf("\t\t     Usuario:");
            scanf("%d", &usuario);
            printf("\t\t     Senha:");
            scanf("%d", &senha);

            int i = 0;
            login = 0;
            while (i < 3)
            {
                if (usuario == matriculas[i] && senha == senhas[i])
                {
                    login = 1;
                    break;
                }
                i++;
            }

            if (i == 0)
            {
                if (login == 1)
                {
                    int sair = 0;
                    while (!sair)
                    {
                        system("cls");
                        printf("Informacoes Cadastrais(1)\n");
                        printf("Notas, Frequencias, P.Ensino(2)\n");
                        printf("Pagamentos(3)\n");
                        printf("Atividade Complementar(4)\n");
                        printf("Sair(5)\n");
                        scanf("%d", &escolhas);

                        switch (escolhas)
                        {
                        case 1:
                            system("cls");
                            printf("\tInformacoes Cadastrais\t\t\t\t+-------------------------------+\n");
                            printf("Matricula: %d\t\t\t\t\t|                               |\n", matriculas[i]);
                            printf("Nome: %s\t\t\t|   Clique na imagem para       |\n", nome[i]);
                            printf("Curso: Ciencia Da Computacao\t\t\t\t|    enviar sua foto            |\n");
                            printf("Periodo: 1\t\t\t\t\t\t|                               |\n");
                            printf("Situacao: Matriculado\t\t\t\t\t|       .-~-.                   |\n");
                            printf("Data Matricula: 01/01/2025\t\t\t\t|      /     \\                  |\n");
                            printf("Turno: Manha\t\t\t\t\t\t|     |       |                 |\n");
                            printf("Turma: CC1MA\t\t\t\t\t\t|      \\     /                  |\n");
                            printf("Data Nascimento: 09/11/2006\t\t\t\t|       `-~-'                   |\n");
                            printf("Email: henriquedaniel@gmail.com\t\t\t\t|                               |\n");
                            printf("Telefone: 9199112030\t\t\t\t\t+-------------------------------+\n");
                            printf("Cidade: Belem\tUF: PA\t\t\t\t\t      Meramente Ilustrativo\n");
                            printf("Endereco: Passagem Tres De Outubro, 132\n");
                            printf("Bairro: Sacramenta\n");
                            scanf("%d", &escolhas);
                            break;

                        case 2:
                            system("cls");
                            printf("\tNotas, Frequencias, P.Ensino\n");
                            printf("\nDisciplinas\t\t\t\t\tTurma\t1Bim\t2Bim\tMed.Bim\t 3Aval\tMed.Final    Sit.Final\n");
                            printf("Algebra Linear\t\t\t\t\tCC1MA\t9,00\t-\t-\t -\t-\t     -\n");
                            printf("Programacao De Software\t\t\t\tCC1MA\t9,50\t-\t-\t -\t-\t     -\n");
                            printf("Pensamento Computacional Para Cientista\t\tCC1MA\t8,00\t-\t-\t -\t-\t     -\n");
                            printf("Algoritmo e Codificacoes De Sistemas\t\tCC1MA\t9,10\t-\t-\t -\t-\t     -\n");
                            printf("Logica Digital\t\t\t\t\tCC1MA\t9,10\t-\t-\t -\t-\t     -\n");
                            printf("Negocios Digitais\t\t\t\tCC1MA\t8,00\t-\t-\t -\t-\t     -\n");

                            printf("\n------ FALTAS ------\n");
                            printf("DISCIPLINA\t\t\t\t\tJAN FEV MAR ABR MAI JUN JUL AGO SET OUT NOV DEZ\t%%\n");
                            printf("ALGEBRA LINEAR\t\t\t\t\t-   -   -   -   -   -   -   -   -   -   -   -\t-\n");
                            printf("PROGRAMACAO DE SOFTWARE\t\t\t\t-   3   0   2   -   -   -   -   -   -   -   -\t95\n");
                            printf("PENSAMENTO COMPUTACIONAL PARA CIENTISTA\t\t-   0   0   2   -   -   -   -   -   -   -   -\t98\n");
                            printf("ALGORITMO E CODIFICACAO DE SISTEMA\t\t-   0   0   0   -   -   -   -   -   -   -   -\t100\n");
                            printf("LOGICA DIGITAL\t\t\t\t\t-   0   0   0   2   -   -   -   -   -   -   -\t98\n");
                            printf("NEGOCIOS DIGITAIS\t\t\t\t-   0   0   0   -   -   -   -   -   -   -   -\t100\n");
                            scanf("%d", &escolhas);
                            break;

                        case 3:
                            system("cls");
                            printf("\t\t\t\t  Mensalidades Escolares\n");
                            printf("Mensalidade\tData Dos Vencimentos\tValor\t\tData Do Pagamento\tValor Pago\n");
                            printf("1\t\t30/12/2024\t\tR$ 2394,91\t06/12/2024\t\t1676,44\n");
                            printf("2\t\t05/02/2025\t\tR$ 2526,63\t05/02/2025\t\t1768,64\n");
                            printf("3\t\t06/03/2025\t\tR$ 2621,38\t05/03/2025\t\t2228,17\n");
                            printf("4\t\t07/04/2025\t\tR$ 1966,03\t07/04/2025\t\t1966,03\n");
                            printf("5\t\t05/05/2025\t\tR$ 1966,03\t05/05/2025\t\t1966,03\n");
                            scanf("%d", &escolhas);
                            break;

                        case 4:
                            system("cls");
                            printf("\tAtividade Complementar\n");
                            printf("Voce Nao Possui Atividades Cadastradas");
                            scanf("%d", &escolhas);
                            break;

                        case 5:
                            sair = 1;
                            login = 0;
                            break;

                        default:
                            printf("Opcao invalida!\n");
                            break;
                        }
                    }
                }
                else
                {
                    system("cls");
                    printf("Usuario Ou Senha Incorreto(os)!\n");
                    printf("Digite Qualquer Numero Para Voltar:");
                    scanf("%d", &escolhas);
                }
                break;
            }
            else if (i == 1)
            {
                if (login == 1)
                {
                    int sair = 0;
                    while (!sair)
                    {
                        system("cls");
                        printf("Informacoes Cadastrais(1)\n");
                        printf("Notas, Frequencias, P.Ensino(2)\n");
                        printf("Pagamentos(3)\n");
                        printf("Atividade Complementar(4)\n");
                        printf("Sair(5)\n");
                        scanf("%d", &escolhas);

                        switch (escolhas)
                        {
                        case 1:
                            system("cls");
                            printf("\tInformacoes Cadastrais\t\t\t\t+-------------------------------+\n");
                            printf("Matricula: %d\t\t\t\t\t|                               |\n", matriculas[i]);
                            printf("Nome: %s\t\t\t|   Clique na imagem para       |\n", nome[i]);
                            printf("Curso: Ciencia Da Computacao\t\t\t\t|    enviar sua foto            |\n");
                            printf("Periodo: 1\t\t\t\t\t\t|                               |\n");
                            printf("Situacao: Matriculado\t\t\t\t\t|       .-~-.                   |\n");
                            printf("Data Matricula: 06/12/2024\t\t\t\t|      /     \\                  |\n");
                            printf("Turno: Manha\t\t\t\t\t\t|     |       |                 |\n");
                            printf("Turma: CC1MA\t\t\t\t\t\t|      \\     /                  |\n");
                            printf("Data Nascimento: 18/10/2006\t\t\t\t|       `-~-'                   |\n");
                            printf("Email: danielrego@gmail.com\t\t\t\t|                               |\n");
                            printf("Telefone: 9192990604\t\t\t\t\t+-------------------------------+\n");
                            printf("Cidade: Ananindeua\tUF: PA\t\t\t\t      Meramente Ilustrativo\n");
                            printf("Endereco: Avenida Helio da Mota Gueiros, 135\n");
                            printf("Bairro: 40 Horas\n");
                            scanf("%d", &escolhas);
                            break;

                        case 2:
                            system("cls");
                            printf("\tNotas, Frequencias, P.Ensino\n");
                            printf("\nDisciplinas\t\t\t\t\tTurma\t1Bim\t2Bim\tMed.Bim\t 3Aval\tMed.Final    Sit.Final\n");
                            printf("Algebra Linear\t\t\t\t\tCC1MA\t8,50\t-\t-\t -\t-\t     -\n");
                            printf("Programacao De Software\t\t\t\tCC1MA\t8,50\t-\t-\t -\t-\t     -\n");
                            printf("Pensamento Computacional Para Cientista\t\tCC1MA\t8,60\t-\t-\t -\t-\t     -\n");
                            printf("Algoritmo e Codificacoes De Sistemas\t\tCC1MA\t8,80\t-\t-\t -\t-\t     -\n");
                            printf("Logica Digital\t\t\t\t\tCC1MA\t9,40\t-\t-\t -\t-\t     -\n");
                            printf("Negocios Digitais\t\t\t\tCC1MA\t8,00\t-\t-\t -\t-\t     -\n");

                            printf("\n------ FALTAS ------\n");
                            printf("DISCIPLINA\t\t\t\t\tJAN FEV MAR ABR MAI JUN JUL AGO SET OUT NOV DEZ\t%%\n");
                            printf("ALGEBRA LINEAR\t\t\t\t\t-   -   -   -   -   -   -   -   -   -   -   -\t-\n");
                            printf("PROGRAMACAO DE SOFTWARE\t\t\t\t-   0   2   2   -   -   -   -   -   -   -   -\t96\n");
                            printf("PENSAMENTO COMPUTACIONAL PARA CIENTISTA\t\t-   2   2   0   -   -   -   -   -   -   -   -\t95\n");
                            printf("ALGORITMO E CODIFICACAO DE SISTEMA\t\t-   3   0   3   -   -   -   -   -   -   -   -\t90\n");
                            printf("LOGICA DIGITAL\t\t\t\t\t-   0   0   2   2   -   -   -   -   -   -   -\t95\n");
                            printf("NEGOCIOS DIGITAIS\t\t\t\t-   3   0   3   -   -   -   -   -   -   -   -\t90\n");

                            scanf("%d", &escolhas);
                            break;

                        case 3:
                            system("cls");
                            printf("\t\t\t\t  Mensalidades Escolares\n");
                            printf("Mensalidade\tData Dos Vencimentos\tValor\t\tData Do Pagamento\tValor Pago\n");
                            printf("1\t\t02/01/2025\t\tR$ 2394,91\t02/01/2025\t\t1676,44\n");
                            printf("2\t\t05/02/2025\t\tR$ 1894,97\t30/01/2025\t\t1515,98\n");
                            printf("3\t\t06/03/2025\t\tR$ 2621,38\t28/02/2025\t\t1966,03\n");
                            printf("4\t\t07/04/2025\t\tR$ 2621,38\t26/03/2025\t\t1966,03\n");
                            printf("5\t\t05/05/2025\t\tR$ 2621,38\t25/04/2025\t\t1966,03\n");
                            scanf("%d", &escolhas);
                            break;

                        case 4:
                            system("cls");
                            printf("\tAtividade Complementar\n");
                            printf("Voce Nao Possui Atividades Complementares\n");
                            scanf("%d", &escolhas);
                            break;

                        case 5:
                            sair = 1;
                            login = 0;
                            break;

                        default:
                            printf("Opcao invalida!\n");
                            break;
                        }
                    }
                }
                else
                {
                    system("cls");
                    printf("Usuario Ou Senha Incorreto(os)!\n");
                    printf("Digite Qualquer Numero Para Voltar:");
                    scanf("%d", &escolhas);
                }
                break;
            }
            else
            {
                if (login == 1)
                {
                    int sair = 0;
                    while (!sair)
                    {
                        system("cls");
                        printf("Informacoes Cadastrais(1)\n");
                        printf("Notas, Frequencias, P.Ensino(2)\n");
                        printf("Pagamentos(3)\n");
                        printf("Atividade Complementar(4)\n");
                        printf("Sair(5)\n");
                        scanf("%d", &escolhas);

                        switch (escolhas)
                        {
                        case 1:
                            system("cls");
                            printf("\tInformacoes Cadastrais\t\t\t\t+-------------------------------+\n");
                            printf("Matricula: %d\t\t\t\t\t|                               |\n", matriculas[i]);
                            printf("Nome: %s\t\t\t\t\t|   Clique na imagem para       |\n", nome[i]);
                            printf("Curso: Ciencia Da Computacao\t\t\t\t|    enviar sua foto            |\n");
                            printf("Periodo: 3\t\t\t\t\t\t|                               |\n");
                            printf("Situacao: Matriculado\t\t\t\t\t|       .-~-.                   |\n");
                            printf("Data Matricula: 01/01/2024\t\t\t\t|      /     \\                  |\n");
                            printf("Turno: Tarde\t\t\t\t\t\t|     |       |                 |\n");
                            printf("Turma: CC3TA\t\t\t\t\t\t|      \\     /                  |\n");
                            printf("Data Nascimento: 02/04/2005\t\t\t\t|       `-~-'                   |\n");
                            printf("Email: pedrinhogirotaum@gmail.com\t\t\t|                               |\n");
                            printf("Telefone: 9198639908\t\t\t\t\t+-------------------------------+\n");
                            printf("Cidade: Belem\tUF: PA\t\t\t\t\t      Meramente Ilustrativo\n");
                            printf("Endereco: Cesupa, 1523\n");
                            printf("Bairro: Nazare\n");
                            scanf("%d", &escolhas);
                            break;

                        case 2:
                            system("cls");
                            printf("\tNotas, Frequencias, P.Ensino\n");
                            printf("\nDisciplinas\t\t\t\t\tTurma\t1Bim\t2Bim\tMed.Bim\t 3Aval\tMed.Final    Sit.Final\n");
                            printf("Estatistica e Probabilidade\t\t\tCC3TA\t10,00\t-\t-\t -\t-\t     -\n");
                            printf("Estrutura De Dados\t\t\t\tCC3TA\t10,00\t-\t-\t -\t-\t     -\n");
                            printf("Circuitos Logicos Digitais\t\t\tCC3TA\t10,00\t-\t-\t -\t-\t     -\n");
                            printf("Laboratorio De Sistemas Embarcados\t\tCC3TA\t10,00\t-\t-\t -\t-\t     -\n");
                            printf("Interface De Software\t\t\t\tCC3TA\t10,00\t-\t-\t -\t-\t     -\n");
                            printf("Sistemas Operacionais\t\t\t\tCC3TA\t10,00\t-\t-\t -\t-\t     -\n");

                            printf("\n------ FALTAS ------\n");
                            printf("DISCIPLINA\t\t\t\t\tJAN FEV MAR ABR MAI JUN JUL AGO SET OUT NOV DEZ\t%%\n");
                            printf("ESTATISTICA E PROBABILIDADE\t\t\t-   -   -   -   -   -   -   -   -   -   -   -\t-\n");
                            printf("ESTRUTURA DE DADOS\t\t\t\t-   0   0   0   -   -   -   -   -   -   -   -\t100\n");
                            printf("CIRCUITOS LOGICOS DIGITAIS\t\t\t-   0   0   -   -   -   -   -   -   -   -   -\t100\n");
                            printf("LABORATORIO DE SISTEMAS EMBARCADOS\t\t-   0   0   0   -   -   -   -   -   -   -   -\t100\n");
                            printf("INTERFACE DE SOFTWARE\t\t\t\t-   0   0   -   -   -   -   -   -   -   -   -\t100\n");
                            printf("SISTEMAS OPERACIONAIS\t\t\t\t-   0   0   -   -   -   -   -   -   -   -   -\t100\n");
                            scanf("%d", &escolhas);
                            break;

                        case 3:
                            system("cls");
                            printf("\t\t\t\t  Mensalidades Escolares\n");
                            printf("Mensalidade\tData Dos Vencimentos\tValor\t\tData Do Pagamento\tValor Pago\n");
                            printf("1\t\t01/01/2024\t\tR$ 2494,91\t30/12/2023\t\t1876,44\n");
                            printf("2\t\t05/02/2024\t\tR$ 1894,97\t30/01/2024\t\t1785,98\n");
                            printf("3\t\t06/03/2024\t\tR$ 2721,38\t28/02/2024\t\t2110,03\n");
                            printf("4\t\t07/04/2024\t\tR$ 2721,38\t26/03/2024\t\t2110,03\n");
                            printf("5\t\t05/05/2024\t\tR$ 2721,38\t25/04/2024\t\t2110,03\n");
                            scanf("%d", &escolhas);
                            break;

                        case 4:
                            system("cls");
                            printf("\tAtividade Complementar\n");
                            printf("Voce Nao Possui Atividades Cadastradas\n");
                            scanf("%d", &escolhas);
                            break;

                        case 5:
                            sair = 1;
                            login = 0;
                            break;

                        default:
                            printf("Opcao invalida!\n");
                            break;
                        }
                    }
                }
                else
                {
                    system("cls");
                    printf("Usuario Ou Senha Incorreto(os)!\n");
                    printf("Digite Qualquer Numero Para Voltar:");
                    scanf("%d", &escolhas);
                }
                break;
            }

        case 3:

            int novasenha;
            int novasenha1;
            system("cls");
            printf("\tAluno-Professor-Gestor-Colaborador\n");
            printf("\t\t     Usuario:");
            scanf("%d", &usuario);
            printf("\t\tSenha Atual: ");
            scanf("%d", &senha);
            printf("\t\tNova Senha: ");
            scanf("%d", &novasenha);
            printf("\t  Conf. Nova Senha: ");
            scanf("%d", &novasenha1);

            i = 0;
            while (i < 3)
            {
                if (usuario == matriculas[i])
                {
                    login = 2;
                    break;
                }
                i++;
            }

            if (login == 2)
            {
                if (senha != senhas[i])
                {
                    printf("Senha Errada\n");
                    scanf("%d", &escolhas);
                }

                else
                {
                    if (novasenha != novasenha1)
                    {
                        system("cls");
                        printf("Senha Errada\n");
                        scanf("%d", &escolhas);
                    }

                    else
                    {
                        system("cls");
                        printf("Senha Alterada!");
                        senhas[i] = novasenha;
                        scanf("%d", &escolhas);
                    }
                }
            }
            break;
        }
    }
    return 0;
}