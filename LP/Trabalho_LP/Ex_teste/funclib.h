#ifndef FUNCLIB_H
#define FUNCLIB_H

#define FILENAME "funcionario.dat"
#define FILENAME_CSV_nCasado "Tabelas_IRS_2020_nCasado.csv"
#define FILENAME_CSV_1Titular "TABELA_IRS_2020_1TITULAR.csv"
#define FILENAME_CSV_2Titular "TABELA_IRS_2020_2TITULAR.csv"
#define FILENAME_CSV_SS "TABELA_SS_2020.csv"

//ENUMERAÇOES

typedef enum {
    CASADO, DIVORCIADO, VIUVO, SOLTEIRO
} ESTADO_CIVIL;

typedef enum {
    EMPREGADO, CHEFE, ADMINISTRADOR
} CARGO;

typedef enum{
    N_CASADO,CASADO_1TITULAR,CASADO_2TITULAR
}ESTADO_IRS;
//______________________________________________________________________

//CONSTANTES
#define LINHAS_CSV 35
#define LINHAS_CSV_1titular 36 

#define TAMANHO_INICIAL 50


//NUMERO DE FUNCIONARIOS POSSIVEIS NO PROGRAMA
#define MAX_NUM_FUNC 50

//ERROS
#define ERRO_FUNCIONARIO_EXISTE "O codigo de funcionario já se encontra atribuído."
#define ERRO_FUNCIONARIO_NAO_EXISTE  "O funcionario não existe na lista."
#define ERRO_LISTA_VAZIA "A lista de funcionarios está vazia"
#define ERRO_LISTA_CHEIA "A lista de funcionario está cheia."


//NUMERO DE TELEFONE
#define MAX_CHAR_NUM_TLF 9
#define OBTER_TLF_FUNC "Insira o numero de telefone do funcionario: "

//NOME FUNCIONARIO
#define MAX_CHAR_NOME 50
#define OBTER_NOME_FUNC "Insira o nome do funcionario: "

//DATA DE SAIDA
#define ERRO_DATA_DE_SAIDA "Data de saida está vazia"

//CODIGO FUNCIONARIO
#define MIN_NUM_COD_FUNC           0
#define MAX_NUM_COD_FUNC           100
#define MSG_OBTER_COD_FUNC     "Insira um codigo para o funcionario [0-100]: "

//ESTADO CIVIL FUNCIONARIO
#define MIN_EST_CIVIL 0
#define MAX_EST_CIVIL 3
#define OBTER_EST_CIVIL "0 - Casado\n1 - Divorciado\n2 - Viuvo(a)\n3 - Solteiro\nInsira o estado civil do funcionarios [0-3]: "

//NUMERO DE DEPENDENTES DO FUNCIONARIO
#define MIN_NUM_DEPENDENTES 0
#define MAX_NUM_DEPENDENTES 20
#define OBTER_NUM_DEPENDENTES "Insira o numero de dependentes do funcionario [0-5+]"

//ESTADO IRS
#define MIN_EST_IRS 0
#define MAX_EST_IRS 2
#define OBTER_EST_IRS "0 - Não Casado\n1 - Casado 1 Titular\n2 - Casado 2 Titulares[0-3]: "

//CARGO DO FUNCIONARIO
#define MIN_NUM_CARGO 0
#define MAX_NUM_CARGO 2
#define OBTER_NUM_CARGO "0 - Empregado\n1 - Chefe\n2 - Administrador\nInsira o cargo do funcionario [0-2]: "

//DIA (NASCIMENTO) (ENTRADA/SAIDA EMPRESA)
#define MIN_DIA                 1
#define MAX_DIA                 31
#define OBTER_DIA_TRABALHO "Nº de dias que trabalhou: "
#define OBTER_DIA_NASC          "Insira o dia de nascimento: "
#define OBTER_DIA_ENTRADA "Insira o dia de entrada na empresa: "
#define OBTER_DIA_SAIDA "Insira o dia de saida da empresa: "

#define MIN_MES                 1
#define MAX_MES                 12
#define OBTER_MES_TRABALHO "Nº de meses que trabalhou: "
#define OBTER_MES_NASC          "Insira o mês de nascimento: "
#define OBTER_MES_ENTRADA "Insira o mês de entrada na empresa: "
#define OBTER_MES_SAIDA "Insira o mês de saida da empresa: "

#define MIN_ANO                 1970
#define MAX_ANO                 2021
#define OBTER_ANO_NASC          "Insira o ano de nascimento: "
#define OBTER_ANO_ENTRADA "Insira o ano de entrada na empresa: "
#define OBTER_ANO_SAIDA "Insira o ano de saida da empresa: "

#define MIN_VERIFICACAO_SAIDA 0
#define MAX_VERIFICACAO_SAIDA 1
#define OBTER_VALOR_VERIFICACAO_SAIDA "Pertente atualizar a data de saida\n0 - NAO\n1 - SIM\n"


//_______________________________________________________________________

//VALOR SALARIO
#define VALOR_HORA_EMPREGADO 4.589
#define VALOR_HORA_ADMINISTRADOR 7.923
#define VALOR_HORA_CHEFE 19.615
#define VALOR_SUBSIDIO_ALIMENTACAO 4.77
//------------------------------------------------------------------------
//ESTRUTURAS

typedef struct {
    int dia, mes, ano;
} DATA;

typedef struct {
    int contador,flag;
    int codigo; //funcionario_codigo
    char nome[MAX_CHAR_NOME]; //funcionario_nome
    char num_tlf[MAX_CHAR_NUM_TLF]; //funcionario_telefone
    ESTADO_CIVIL est_civil; //funcionario_estadocivil
    int num_dependentes; //funcionario_ numero de filhos
    CARGO cargo; //funcionario_cargo
    ESTADO_IRS est_irs; //ESTADO IRS
    DATA data_de_nascimento; //funcionario_idade
    DATA data_de_entrada; //funcionario_Data de entrada na empresa
    DATA data_de_saida; //funcionario_Assiduidade
} FUNCIONARIO;


typedef struct key_value {
    char col1[50];
    char col2[50];
    char col3[50];
    char col4[50];
    char col5[50];
    char col6[50];
    char col7[50];
} dict;

typedef struct{
    char col1[50];
    char col2[50];
}SS; 


typedef struct{
    int valor_ss_funcionario;
    int valor_ss_empresa;
    int valor_ss_total;
}TIPO_SS;

typedef struct {
    
    int contador;
    int codigo_funcionario,num_meses;
    float base,sub_alimentacao,valor_irs;
    TIPO_SS ss;
    
}SALARIO;

//_______________________________________________________________________

//PROTOTIPOS
void logMsg(char *msg, char *filename);
void Inserir_Funcionario(FUNCIONARIO *funcionarios);
void procurarFuncionarios(FUNCIONARIO funcionarios);
void atualizarFuncionarios(FUNCIONARIO *funcionarios);
void removerFuncionarios(FUNCIONARIO *funcionarios);
void listarFuncionarios(FUNCIONARIO *funcionarios);
//________________________________________________________________________
#endif /* FUNCLIB_H */

