
#ifndef SALARIOLIB_H
#define SALARIOLIB_H


int grow_StructArray_Salario(SALARIO **salario);
//int grow_StructArray_csvSalario(proc_salario **csv_salario);

void imprimirSalario(SALARIO **salario, int i);
//int carregar_csv_salario(FILE *fp, proc_salario **csv_salario);
int Procurar_CodFuncionario_Salario(SALARIO **salario, int cod_func, int tamanho);
int Procurar_CodFuncionario_Salario_ultimaposicao(SALARIO **salario, int cod_func, int tamanho);
void readcsv_salario();
void soma_do_salario_de_funcionario_em_funcao_do_tempo(FUNCIONARIO **funcionarios, SALARIO **salario);

int idade(FUNCIONARIO **funcionarios, int numero);
float antiguidade(FUNCIONARIO **funcionarios, int numero);

int Assuididade(SALARIO **salario, int id, int tamanho);

float salario_bonus(FUNCIONARIO **funcionarios, SALARIO **salario, float sal_base, int cod_func);
float calcular_salarioBase(FUNCIONARIO **funcionarios, int numero, int num_dias);
float calcular_irs(FUNCIONARIO **funcionarios, int numero, float sal_base);

//void printValues(proc_salario **csv_salario);
void readcsv_seg_social(SS values[]);
void readcsv(IRS *values, int est_irs);
void printValues_IRS(IRS *values);

float calcular_ss(FUNCIONARIO **funcionarios, int numero, int opcao_ss, float sal_base);
void Calcular_Salario_tdsfunc(FUNCIONARIO **funcionarios, SALARIO **salario, int posicao_funcionario);
void calcular_salario_tdsfunc_nummes(FUNCIONARIO **funcionarios, SALARIO **salario) ;

void EscreverFicheiro_Binario_Salario(SALARIO **salario);



void Calcular_Salario(FUNCIONARIO **funcionarios, SALARIO **salario);
void listarSalario(SALARIO **salario);
void mediaSalario_det_ano(SALARIO **salario);
void media_numdias(SALARIO **salario);
void mediaSalario(SALARIO **salario);
void menu_salarios(FUNCIONARIO **funcionarios, SALARIO **salario);
int carregar_salario(SALARIO **salario, FILE *fp);



#endif /* SALARIOLIB_H */

