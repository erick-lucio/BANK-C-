#include <iostream>
#include <stdio.h>
#include <conio.h>
#include <string.h>
#include <cstdlib>

using namespace std;







typedef struct {
	int ID;
	char nome[150] ;
	char endereco[100] ;                  
	char bairro[50] ;
	char nascimento[10] ;
	float saldo;
} tipoitem;

typedef struct celula_str *apontador;

typedef struct celula_str {
	 tipoitem item;
	apontador ant, prox;
	
} celula;

typedef struct {
	apontador primeiro, ultimo;
	
} tipolistadupla;

void flvazia(tipolistadupla *lista);
int vazia(tipolistadupla lista);
void insereultimo (tipoitem item, tipolistadupla *lista);
void insereprimeiro(tipoitem item, tipolistadupla *lista);
void retiraultimo(tipolistadupla *lista, tipoitem*item) ;
void retiraprimeiro(tipolistadupla *lista, tipoitem *item) ;
void mostralista (tipolistadupla lista);
void mostrapessoal(int y,tipolistadupla lista);


//TRABALHO ERICK BOLADAO NAQUELE PIQUE
void inicializa1 (char nome[150] ,char endereco[100] ,	char bairro[50] ,char nascimento[10] ,	float saldo,tipoitem item,tipolistadupla *lista,int i);
void inicializa(char nome[150] ,char endereco[100] ,	char bairro[50] ,char nascimento[10] ,	float saldo,tipoitem item,tipolistadupla *lista);
void deposito (int i, double saldo,tipolistadupla *lista);
int saque (int z,int y,tipolistadupla *lista,tipoitem *item);
void tranferencia1 (int i ,double saldo);
void tranferencia2 (int i ,double saldo);
void imprime (int i);
int testint(int i);
float testint1();
int testint3();
void mostraunica(int y,tipolistadupla lista);


//TRABALHO ERICK BOLADAO NAQUELE PIQUE
	

