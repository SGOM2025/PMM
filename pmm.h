#ifndef PMM_H_INCLUDED
#define PMM_H_INCLUDED

#define MAX_OBJ 500
#define MAX_MOC 50
#define MAX_LISTA 5000

typedef struct tSolucao
{
    int vet_sol[MAX_OBJ];
    int vet_pes_moc[MAX_MOC];
    int fo;
}Solucao;

int num_obj;
int num_moc;
int vet_val_obj[MAX_OBJ];
int vet_pes_obj[MAX_OBJ];
int vet_cap_moc[MAX_MOC];

int vet_ind_ord[MAX_OBJ];

int lista_tabu[2][MAX_LISTA];

// SA
void simulated_annealing(Solucao& s, const double& TI, const double& TC,
                         const double& TR, const int& SAMAX, const double& TEM_MAX,
                         double& TEM_TOT, double& TEM_MEL, int& NUM_SOL);

// TABU

int tabu_pos;
int lista_tabu[2][MAX_LISTA];

void atualiza_tabu(int moc, int obj);
int procura_na_tabu(int moc, int obj);
void remover_na_tabu(int moc, int obj);
void busca_tabu(Solucao& s, const double& TEM_MAX, double& TEM_TOT, double& TEM_MEL, int& NUM_SOL);
void busca_tabu_melhorada(Solucao& s, const double& TEM_MAX, double& TEM_TOT, double& TEM_MEL, int& NUM_SOL);

// GRASP

void grasp(Solucao& s, const double& LRC, const double& TEM_MAX,
           double& TEM_TOT, double& TEM_MEL, int& NUM_SOL);

void heu_BL_rand(Solucao& s, const int& iter);
void heu_BL_MM(Solucao& s);
void heu_BL_PM(Solucao& s);
void heu_BL_PM2(Solucao& s);

void heu_cons_ale(Solucao& s);
void heu_cons_gul(Solucao& s);
void heu_cons_ale_gul(Solucao& s, const double& percentual);

void ordenar_objetos();

void ler_dados(char* arq);
void escrever_dados(char* arq);
void gerar_vizinha(Solucao& s);
void calcular_fo_solucao(Solucao& s);
void escrever_solucao(const Solucao& s);

#endif // PMM_H_INCLUDED
